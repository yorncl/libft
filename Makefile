CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./headers

SRCS = $(shell find src -name "*.c")
OBJS = ${SRCS:.c=.o}

SRCS_TEST = test/libft_test.c
BIN_TEST = run_test


LIB = libft.a

NAME = libft

LINK = ar rcs

libft : all

all : ${NAME}

${NAME} : ${OBJS} headers/libft.h
	${CC} ${CFLAGS} -c ${SRCS}
	${LINK} ${LIB} ${OBJS}

re : fclean all

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${LIB} ${BIN_TEST}

test : all
	${CC} ${SRCS_TEST} ${LIB} -o ${BIN_TEST}
	./run_test