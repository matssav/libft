NAME = libft.a
LIBFT = libft.h
FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memmove.c \
	  ft_substr.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_putstr_fd.c \
	  ft_strmapi.c \
	  ft_strncpy.c \
	  ft_striteri.c \

SRCSBONUS = ft_lstnew.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstadd_front.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstiter.c \
	  ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

PARALLEL ?= -j

.PHONY: all clean fclean re bonus

all:	#$(NAME)
		$(MAKE) $(PARALLEL) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
		@echo "Libft compiled"

bonus:	$(OBJSBONUS)
		ar rc $(NAME) $(OBJSBONUS)
		@ranlib $(NAME)

%.o: %.c $(LIBFT)
		gcc $(FLAGS) -c $< -o $@

clean:
		@/bin/rm -f $(OBJS) $(OBJSBONUS)
		@echo "Libft cleaned"

fclean:	clean
		@/bin/rm -f $(NAME)
		@echo "Libft full cleaned"

re:		fclean all
