##                                                                                                                                                                                                                 
## Makefile for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                          
##                                                                                                                                                                                                                 
## Made by thanh-truc hoang                                                                                                                                                                                        
## Login   <hoang_t@epitech.net>                                                                                                                                                                                   
##                                                                                                                                                                                                                 
## Started on  Mon Dec  1 21:58:39 2014 thanh-truc hoang                                                                                                                                                           
## Last update Fri Dec 12 10:40:58 2014 thanh-truc hoang                                                                                                                                                           
##                                                                                                                                                                                                              ##                                                                                                                                                                                                                 
## Makefile for  in /home/hoang_t/rendu/CPE_2014_Pushswap                                                                                                                                                          
##                                                                                                                                                                                                                 
## Made by thanh-truc hoang                                                                                                                                                                                        
## Login   <hoang_t@epitech.net>                                                                                                                                                                                   
##                                                                                                                                                                                                                 
## Started on  Mon Dec  1 21:58:39 2014 thanh-truc hoang                                                                                                                                                           
## Last update Fri Dec 12 10:40:58 2014 thanh-truc hoang                                                                                                                                                           
##                                                                                                                                                                                                                 

EXEC    = push_swap

CC      = cc

RM      = rm -f

CFLAGS  = -Iinclude             \
          -Wextra -Wall -Werror \
          -ansi -pedantic       \

SRCS    =  libmy/pushswap.c \
           libmy/my_getnbr.c \
           libmy/my_putnbr.c \
           libmy/sort_out.c \
           libmy/request.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
        $(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
        $(RM) $(OBJS)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all

CC      = cc

RM      = rm -f

NAME    = libmy/libmy.a

CFLAGS  = -Wextra -Wall -Werror
CFLAGS  = -ansi -pedantic

SRCS    =  libmy/pushswap.c \
           libmy/my_getnbr.c \
           libmy/my_putchar.c \
           libmy/my_putnbr.c \
           libmy/sort_out.c \
           libmy/my_putstr.c \
           libmy/request.c

OBJS    = $(SRCS:.c=.o)

AR      = ar -rc

all: $(NAME)

$(NAME):$(OBJS)
        $(AR) $(NAME) $(OBJS)
        ranlib $(NAME)
        $(CC) -o $(EXEC) $(OBJS) $(CFLAGS)

clean:
        $(RM) $(NAME)
        $(RM) $(EXEC)
        $(RM) $(OBJS)

fclean: clean
        $(RM) $(NAME)
        $(RM) $(EXEC)
        $(RM) $(OBJS)

re: fclean all

.PHONY: re fclean clean all
