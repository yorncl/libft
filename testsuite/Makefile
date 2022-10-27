CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -g -fsanitize=address
LDFLAGS = -L.. -lft

SRCS = $(wildcard ./*.c)

EXECS = ${SRCS:.c=.out}
NAME=run_tests


%.out: %.c
	${CC} ${CFLAGS} -I.. -o $@ $< ${LDFLAGS}

all : ${NAME}

$(NAME) :  ${EXECS}
	@@for file in ${EXECS} ; do $$file ; done

re : fclean all

clean :
	rm -f ${EXECS}

.PHONY: all re clean fclean test
