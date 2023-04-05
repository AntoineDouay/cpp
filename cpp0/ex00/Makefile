# the compiler: gcc for C program, define as g++ for C++
CC = c++

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)
  # compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -Wall -Werror -Wextra -std=c++98
 
  # The build target 
NAME = megaphone
 
all: $(NAME)
 
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
 
clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)