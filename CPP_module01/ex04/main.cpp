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
	// std::ifstream	in_file(argv[1]);
	// std::string		out_filename = argv[1];
	std::string		line;
	int				line_num = 1;
	out_filename.append(".replace");
	// std::ofstream	out_file(out_filename);

	while(std::getline(in_file, line))
	{
		std::cout << line_num << ": " << line << std::endl;
		out_file << replace.replace_word(line);
		line_num++;
	}
	in_file.close();
	return 0;
// open "filename", read the content and write to filename.replace
// the program will find the occurences of s1 and then replace them with s2

}



/*

open
read
write



*/
