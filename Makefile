NAME	= libft.a
SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_numlen.c \
	ft_puthex_lower_fd.c ft_puthex_upper_fd.c ft_putnbr_unsigned_fd.c \

BONUS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
	ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ		= $(SRC:.c=.o)
BONUS_OBJ	= $(BONUS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs
RM		= rm -f

INCLUDES = -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
	$(CC) $(CFLAGS) -c $(BONUS)
	$(AR) $(NAME) $(BONUS_OBJ)

.PHONY: all clean fclean re
