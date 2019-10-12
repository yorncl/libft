CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./headers

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
SRCS_B = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS = ${SRCS:.c=.o}
OBJS_B = ${SRCS_B:.c=.o}

SRCS_TEST = test/libft_test.c
BIN_TEST = run_test

LIB = libft.a
LIB_B = libft_bonus.a



NAME = libft.a


all : ${NAME}

${NAME} :  ${SRCS}
	${CC} ${CFLAGS} -I ./libft.h  -c ${SRCS}
	ar rcs ${LIB} ${OBJS}

bonus : ${NAME} ${SRCS_B}
	${CC} ${CFLAGS} -I ./libft_bonus.h -c ${SRCS_B}
	ar rcs ${LIB} ${OBJS}

re : fclean all

clean :
	rm -f ${OBJS}
	rm -f ${OBJS_B}

fclean : clean
	rm -f ${LIB} ${BIN_TEST}

test : all
	${CC} ${SRCS_TEST} ${LIB} -o ${BIN_TEST}
	./run_test