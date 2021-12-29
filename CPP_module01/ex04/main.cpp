#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

// ./a.out filename s1 s2

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
		return (1);
	std::string	filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream	file(filename);
	std::string		line;
	
	while(file)
	{
		std::getline(std::cin, line);
		if (line == "-1")
			break ;
		std::cout << line << std::endl;
	}

	file.close();
	return 0;
// open "filename", read the content and write to filename.replace
// the program will find the occurences of s1 and then replace them with s2

}



/*

open
read
write



*/
