CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS =	ft_isspace.c \
	ft_min.c \
	ft_max.c \
	ft_intlen.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strcmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_strreplace.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_dictnew.c \
	ft_dictadd.c \
	ft_dictget.c \
	ft_dictgetindex.c \
	ft_dictclear.c \
	ft_dictdelone.c \
	ft_dictrem.c \
	ft_dictsize.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

OBJS = ${SRCS:.c=.o}

SRCS_TEST = tests/libft_test.c
BIN_TEST = tests/run_test

NAME = libft.a

all : ${NAME}

$(NAME) :  ${OBJS}
	ar rcs ${NAME} ${OBJS}

re : fclean all

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME} ${BIN_TEST}

test : all
	${CC} ${CFLAGS} -fsanitize=address -g3 -I . ${SRCS_TEST} ${NAME} -o ${BIN_TEST}
	
.PHONY: all re clean fclean test
