#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_quine(char *s, int n)
{
	char	file_name[10];char	clang[100];
	FILE	*fd;

	sprintf(file_name, "Sully_%d.c", n);
	fd = fopen(file_name, "w");
	fprintf(fd, s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 34, 37, 37, 37, 34, 10, 10, 10, 10, 10, n, 10, 34, s, 34, 10, 10, 10, 10, 10);
	fclose(fd);sprintf(clang, "clang -Wall -Wextra -Werror -o Sully_%d %s; ./Sully_%d", n, file_name, n);system(clang);
}

int		main(int argc, char **argv)
{
	int		n = 5;
	char	*s = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cvoid	print_quine(char *s, int n)%c{%c	char	file_name[10];char	clang[100];%c	FILE	*fd;%c%c	sprintf(file_name, %cSully_%cd.c%c, n);%c	fd = fopen(file_name, %cw%c);%c	fprintf(fd, s, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 37, 34, 10, 34, 34, 10, 10, 34, 37, 37, 37, 34, 10, 10, 10, 10, 10, n, 10, 34, s, 34, 10, 10, 10, 10, 10);%c	fclose(fd);sprintf(clang, %cclang -Wall -Wextra -Werror -o Sully_%cd %cs; ./Sully_%cd%c, n, file_name, n);system(clang);%c}%c%cint		main(int argc, char **argv)%c{%c	int		n = %d;%c	char	*s = %c%s%c;%c	(void)argc;%c	if (n > 0){print_quine(s, (!strchr(argv[0], '_')) ? n : n - 1);};%c	return (0);%c}%c";
	(void)argc;
	if (n > 0){print_quine(s, (!strchr(argv[0], '_')) ? n : n - 1);};
	return (0);
}
