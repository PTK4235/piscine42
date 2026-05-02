NAME = rush-02
CFLAGS = -Wall -Wextra -Werror

cc = cc

# List of source files
SRCS    = main.c convert_str_to_tokens.c parsing_number.c read_to_tab.c struct_dict.c utils.c
# Automatic generating of names of files .o
OBJS    = ${SRCS:.c=.o}

# Main Rule
all: ${NAME}

# Compilating of executable
${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

# Rule to compile from .c to .o
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

# Cleaning of files .o
clean:
	rm -f ${OBJS}

# Full cleaning (Objects + Executable)
fclean: clean
	rm -f ${NAME}

# Re-compiling from zero
re: fclean all

# all clean fclean AND re are used like commands, not files
.PHONY: all clean fclean re