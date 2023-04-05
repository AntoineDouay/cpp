
CC = c++

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

CFLAGS  = -Wall -Werror -Wextra -std=c++98
 
NAME = megaphone
 
all: $(NAME)
 
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
 
clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)