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
		return (ERROR);
	}

	Replace			replace(argv[2], argv[3]);
	std::ifstream	in_file(argv[1]);
	std::string		out_filename = argv[1];
	std::string		line;

	if (in_file.fail())
	{
		std::cout << "input file open fail" << std::endl;
		return (ERROR);
	}
	out_filename.append(".replace");
	std::ofstream	out_file(out_filename);

	if (out_file.fail())
	{
		std::cout << "output file open fail" << std::endl;
		in_file.close();
		return (ERROR);
	}
	while(std::getline(in_file, line))
	{
		if (line.find(replace.getReplaceSrc()) == std::string::npos)
			out_file << line << std::endl;
		else
		{
			while (1)
			{
				out_file << replace.before_word(line) << replace.getReplaceDest();
				line = replace.after_word(line);
				if (line.find(replace.getReplaceSrc()) == std::string::npos)
				{
					out_file << line;
					break ;
				}
			}
			out_file << std::endl;
		}
	}
	in_file.close();
	out_file.close();
	return (SUCCESS);
}
