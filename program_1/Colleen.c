/*
	Colleen
*/

#include <stdio.h>

void	print_quine(char *s)
{
	printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10);
}

int		main()
{
	char	*s = "/*%c	Colleen%c*/%c%c#include <stdio.h>%c%cvoid	print_quine(char *s)%c{%c	printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint		main()%c{%c	char	*s = %c%s%c;%c	print_quine(s);%c	/*%c		end of quine%c	*/%c	return (0);%c}%c";
	print_quine(s);
	/*
		end of quine
	*/
	return (0);
}
