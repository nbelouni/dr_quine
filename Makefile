SRC_PATH	=	src/
OBJ_PATH	=	obj/
INC_PATH	=	inc/

SRCS1		= program_1/Colleen.c
SRCS2		= program_2/Grace.c
SRCS3		= program_3/Sully.c

OBJS1		= program_1/Colleen.o
OBJS2		= program_2/Grace.o
OBJS3		= program_3/Sully.o

FLAGS		=	-Wall -Wextra -Werror

CC			=clang
NAME1		=program_1/Colleen	
NAME2		=program_2/Grace
NAME3		=program_3/Sully	

all: $(NAME1) $(NAME2) $(NAME3)
$(NAME1): $(OBJS1)
	$(CC) $(FLAGS) $(OBJS1) -o $(NAME1) 

$(NAME2): $(OBJS2)
	$(CC) $(FLAGS) $(OBJS2) -o $(NAME2)

$(NAME3): $(OBJS3)
	$(CC) $(FLAGS) $(OBJS3) -o $(NAME3)

clean:
	rm -rf $(OBJS1) $(OBJS2)  $(OBJS3)

fclean: clean
	rm -f $(NAME1) $(NAME2)  $(NAME3)

re: fclean all

.PHONY: clean fclean re
