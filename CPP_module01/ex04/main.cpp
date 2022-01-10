#include "Replace.hpp"

int		arg_is_valid(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (!arg_is_valid(argc, argv))
	{
		std::cout << "Error" << std::endl;
		return (1);
	}

	Replace			replace(argv[2], argv[3]);
	std::ifstream	in_file(argv[1]);
	std::string		line;
	int				line_num = 1;

	if (in_file.fail())
	{
		std::cout << "input file open fail" << std::endl;
		return (1);
	}
	std::ofstream	out_file(out_filename);
	std::string		out_filename = argv[1];
	out_filename.append(".replace");
	if (out_file.fail())
	{
		std::cout << "output file open fail" << std::endl;
		in_file.close();
		return (1);
	}
	while(std::getline(in_file, line))
	{
		std::cout << line_num << ":" << line << std::endl;\
		if (line.find(replace.getReplaceSrc()) == std::string::npos)
			out_file << line << std::endl;
		else
			out_file << replace.put_before(line) << replace.getReplaceDest()
				<< replace.put_after(line) << std::endl;
		line_num++;
	}
	in_file.close();
	out_file.close();
	return (0);
}
