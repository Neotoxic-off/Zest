OBJS	=	$(patsubst %.cpp, %.o, $(wildcard src/*.cpp))
OBJS	+=	$(patsubst %.cpp, %.o, $(wildcard src/*/*.cpp))

INCLUDE	=	include

HFILE	=	$(wildcard $(INCLUDE)/*.hpp)

NAME	=	zest.out

FLAG	=	-I $(INCLUDE)
FLAG	+=	-g3
FLAG	+=	-Wall -Wextra -O3 -fno-builtin

CC	=	@g++
RM	=	@rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAG)

$(OBJS): $(HFILE)

clean:
	@$(RM) $(OBJS)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned *o"

fclean: clean
	@$(RM) $(NAME)
	@echo "\e[32m[ DONE ]\033[0m  Cleanned $(NAME)"

re:	fclean all

.cpp.o:	%.c
	@$(CC) -c $< -o $@ $(FLAG) && echo "\e[32m[ DONE ] \033[0m" $< || echo "\e[91;5m[ FAIL ] \e[25m" $< "\033[0m"

.PHONY: all clean fclean re