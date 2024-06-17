NAME = rush02
	
SOURCES = main.c demi_atoi.c dico.c lib.c write_cnumb.c
	
OBJECTS = $(SOURCES:.c=.o)
	
CCF = cc -Wall -Werror -Wextra #-fsanitize=address -g 

%.o: %.c
	$(CCF) -o $@ -c $<

$(NAME): $(OBJECTS)
	$(CCF) $(OBJECTS) -o $(NAME)
	
.PHONY: fclean

fclean:
	rm $(NAME) $(SOURCES:.c=.o)
