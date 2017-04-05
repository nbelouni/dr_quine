/*
   Grace
*/
#include <stdio.h>

#define ENDL		10
#define C_ARRAY		"/*%c   Grace%c*/%c#include <stdio.h>%c%c#define ENDL		10%c#define C_ARRAY		%c%s%c%c#define MAIN() 		int main(){FILE *fd; fd = fopen(%cGrace_kid.c%c, %cw%c); fprintf(fd, C_ARRAY, ENDL, ENDL, ENDL, ENDL, ENDL, ENDL, 34, C_ARRAY, 34, ENDL, 34, 34, 34, 34, ENDL, ENDL, ENDL); fclose(fd);return (0);}%c%cMAIN();%c"
#define MAIN() 		int main(){FILE *fd; fd = fopen("Grace_kid.c", "w"); fprintf(fd, C_ARRAY, ENDL, ENDL, ENDL, ENDL, ENDL, ENDL, 34, C_ARRAY, 34, ENDL, 34, 34, 34, 34, ENDL, ENDL, ENDL); fclose(fd);return (0);}

MAIN();
