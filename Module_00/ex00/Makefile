NAME = megaphone

SRCS = megaphone.cpp

CFLAGS = -Wall -Werror -Wextra

BUILD_DIR = obj
OBJS = $(SRCS:.cpp=.o)
OBJ = $(addprefix $(BUILD_DIR)/,$(OBJS))

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -lm -o $(NAME) -g
	@echo "$(NAME) created"

$(BUILD_DIR)/%.o: %.cpp Makefile
	@mkdir -p $(BUILD_DIR)
	clang++ $(CFLAGS) -o $@ -c $<

clean:
	@/bin/rm -rf $(BUILD_DIR)
	@echo "Object files deleted"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "binary deleted"

re : 
	@make fclean
	@make all

.PHONY: all, clean, fclean, re, all