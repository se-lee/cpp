#include "Replace.hpp"

int		arg_is_valid(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
		return (0);
	return (1);
}

int		display_error(std::string message)
{
	std::cout << message << std::endl;
	return (ERROR);
}

int		main(int argc, char **argv)
{
	if (!arg_is_valid(argc, argv))
		return (display_error("Error: Invalid argument"));
	
	Replace			replace(argv[1], argv[2], argv[3]);
	
	if (!replace.set_in_file())
		return (display_error("Error: input file open fail"));	
	if (!replace.set_out_file())
		return (display_error("Error: outfile faile"));
	replace.replace_word();
	return (SUCCESS);
}
