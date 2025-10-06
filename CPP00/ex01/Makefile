NAME    := phonebook
CXX     := clang++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98  -fsanitize=address -ggdb3
RM      := rm -f
SRC     :=  main.cpp      \
			src/phonebook.cpp \
			src/messages.cpp \
			src/contact.cpp

OBJ     := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
