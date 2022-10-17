NAME = push_swap

SRCS = $(wildcard ./srcs/*/*.c) $(wildcard ./srcs/*.c) 
OBJS = $(SRCS:.c=.o)

CFLAGS		= -g -Wall -Wextra -Werror -lreadline -ltinfo -fsanitize=address

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	@gcc -o $(NAME) $(OBJS) $(CFLAGS)
	-@mkdir -p objects
	-@mv $(OBJS) objects
	@echo	"$$ ./push_swap && Object Files Generated"

%.o	:	%.c
	@gcc $(CFLAGS) -c $^ -I./ -o $@

clean	:
	@rm -f $(OBJS)
	@echo	""
	@echo	"$$ Object Files Deleted"
	@echo	""
		
fclean	:	clean
	@rm -f $(NAME)
	@echo	""
	@echo	"$$ push_swap Deleted"
	@echo	""

re			:	fclean all

.PHONY		:	all clean fclean re bonus