CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./headers

SRCS = $(shell find src -name "*.c")
OBJS = ${SRCS:.c=.o}

SRCS_TEST = test/libft_test.c
BIN_TEST = run_test


LIB = lib/libft.a


libft : all

all : ${OBJS}
	ar rcs ${LIB} ${OBJS}

re : fclean all

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${LIB} ${BIN_TEST}

test : all
	${CC} ${SRCS_TEST} ${LIB} -o ${BIN_TEST}
	./run_test