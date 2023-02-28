NAME		=	minitalk
LIBFT_PATH  =	includes/libft/
INCLUDES	=	-I $(LIBFT_PATH)
CFLAGS		=	-Wall -Wextra -Werror $(INCLUDES)

SERVER_SRCS =	sources/server.c
CLIENT_SRCS =	sources/client.c

SERVER_OBJS = 	$(SERVER_SRCS:.c=.o)
CLIENT_OBJS = 	$(CLIENT_SRCS:.c=.o)

SERVER 		= 	server
CLIENT 		= 	client

RM = rm -f

all: libft $(NAME)

libft:
	$(MAKE) -C $(LIBFT_PATH) 

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): $(SERVER_OBJS) $(LIBFT)
	$(CC) $< -o $@ -L$(LIBFT_PATH) -lft

$(CLIENT): $(CLIENT_OBJS) $(LIBFT)
	$(CC) $< -o $@ -L$(LIBFT_PATH) -lft

clean:
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	$(MAKE) clean -C $(LIBFT_PATH)

fclean:
	$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re
