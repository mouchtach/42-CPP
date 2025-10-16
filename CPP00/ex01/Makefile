NAME	= phonebook
CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
SRC		=	main.cpp			\
			src/phonebook.cpp	\
			src/messages.cpp	\
			src/contact.cpp
HDR		=	headers/colors.hpp	\
			headers/contact.hpp	\
			headers/phonebook.hpp	\
			headers/main.hpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS)  $^ -o $@

%.o: %.cpp headers/colors.hpp headers/contact.hpp headers/phonebook.hpp headers/main.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
