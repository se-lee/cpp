/*
小文字を大文字に変えるやつ

$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *

*/

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			j = 0;
			str = argv[i];
			while (str[j])
			{
				std::cout << (char)toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

