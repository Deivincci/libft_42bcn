# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmoral-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 09:14:20 by dmoral-p          #+#    #+#              #
#    Updated: 2024/02/17 10:50:53 by dmoral-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	 ft_isalpha.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	$(work)

%.o: %.c Makefile libft.h 
	@$(CC) $(DBFLG) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	$(deleting)

fclean: clean
	@rm -f $(NAME)

re: clean fclean
	@make all
	$(weee)
	
.PHONY: all clean fclean re

define work                                                                      
                                                                                 
@echo  "\033[32m                @@@@@@                               @@@@@@                  \033[0m"
@echo  "\033[32m                @@@@@@                               @@@@@@                  \033[0m"
@echo  "\033[32m                      @@@@@@                   @@@@@@                        \033[0m"
@echo  "\033[32m                      @@@@@@                   @@@@@@                        \033[0m"
@echo  "\033[32m                      @@@@@@                   @@@@@@                        \033[0m"
@echo  "\033[32m                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  \033[0m"
@echo  "\033[32m             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  \033[0m"
@echo  "\033[32m          @@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@      @@@@@@@@@@@@            \033[0m"
@echo  "\033[32m          @@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@      @@@@@@@@@@@@            \033[0m"
@echo  "\033[32m          @@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@      @@@@@@@@@@@@            \033[0m"
@echo  "\033[32m    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@      @@@@@@@@@@@@   "$$(whoami)"   @@@@@@@@@@@@@@@@@      @@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      @@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      @@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@      @@@@@@                               @@@@@@      @@@@@@      \033[0m"
@echo  "\033[32m    @@@@@@      @@@@@@   ¡¡COMPILADO CON EXITO!!     @@@@@@      @@@@@@      \033[0m"
@echo  "\033[32m                      @@@@@@@@@@@@       @@@@@@@@@@@@                        \033[0m"
@echo  "\033[32m                      @@@@@@@@@@@@       @@@@@@@@@@@@                        \033[0m"
@echo  "\033[32m                      @@@@@@@@@@@@       @@@@@@@@@@@@                        \033[0m"
                                                                                 
endef

define deleting                                                                  
                                                                                 
@echo  "\033[32m MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m M COMPILACION MMMMMMMMMMMMMMMMWNXKK0KKKKKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m M ELIMINADA  MMMMMMMMMMMNKkxddddddddddddddddddxOKWMMMMMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m M  CON   MMMMMMMMMMMNKxdoddk0XNWMMMMMMMMMWWNKOxdoodkKWMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m M EXITO  MMMMMMMMWKdlox0NWMMMMMMMMMMMMMMN0dodkKWWXOdooxKWMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMNOolxKWMMMMMMMMMMMMMMMMW0:.    .oNMMMN0dloONMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMWOllkNWMMMMMMMMMMMMMMMMMMNc       .OMMMMMMNkllOWMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMWKocONMMMMMMMMMMMMMMMMMMMMMWx.      :KMMMMMMMMNkcoKWMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMNkcdXMMMMMMMMMMNXXXXXXXXXXKKK0x:'..,lOXWMMMMMMMMWKocOWMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMNd:kWMMMMMMMMMMWX0koc;'.................dNMMMMMMMMMNx:xWMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMWd:OWMMMMMMMMMMMMMMMWNKOxl:,...          .oNMMMMMMMMMWk:xWMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMWx:kWMMMMMMMMMMMWOodk0XXNNNNNXK0x;         .oNMMMMMMMMMWx:OWMMMMMMMMMM"
@echo  "\033[32m MMMMMMM0:dWMMMMMMMMMMMNx.   ...'',oXMMMMXc         .lNMMMMMMMMMNocKMMMMMMMMMM"
@echo  "\033[32m MMMMMMWocKMMMMMMMMMMXk:.       .,oKWMMMMMK;         .dWMMMMMMMMWO:xWMMMMMMMMM"
@echo  "\033[32m MMMMMMKcoWMMMMMMMMMMKl........,xNMMMMWWMMWo.  ...'',;xNMMMMMMMMMNlcNMMMMMMMMM"
@echo  "\033[32m MMMMMMO:xMMMMMMMMWNXXK0kxkkkOO0KXXXNWMMMMX:   .....';kWMMMMMMMMMWd:KMMMMMMMMM"
@echo  "\033[32m MMMMMMk:kMMMMMMMMXo                oXMMMMO.         .dWMMMMMMMMMMx:0MMMMMMMMM"
@echo  "\033[32m MMMMMMO:kMMMMMMMMWx                kWMMMWd.         .kMMMMMMMMMMWd:0MMMMMMMMM"
@echo  "\033[32m MMMMMM0:dWMMMMMMMM0                0MMMMX:          'OMMMMMMMMMMWocXMMMMMMMMM"
@echo  "\033[32m MMMMMMNllNMMMMMMMMX                KMMMMO.          ,KMMMMMMMMMMKcoWMMMMMMMMM"
@echo  "\033[32m MMMMMMMk:kWMMMMMMMW                NMMMWd     .'    :XMMMMMMMMMWx:OMMMMMMMMMM"
@echo  "\033[32m MMMMMMMNocKMMMMMMMM                WMMMX:    'kO,   lWMMMMMMMMM0:dWMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMKclXMMMMMMM                MMMMO'   ;0WWo  .dWMMMMMMMMKclXMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMWKclXMMMMMM                MMMWd. .lXMMM0' .kMMMMMMMWKllXMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMKlc0WMMMMM              XMMMX: .dNMMMMWo 'OMMMMMMWOcoXMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMXdcxNMMMMK            dNMMM0''kWMMMMMM0,,KMMMMMXdcxNMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMW0llkNMMNx          okWMWWkl0WMMMMMMMWdoNMMMXxcoKWMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMNOllxKWKOkkOkkOkkkOXMMMWNNMMMMMMMMMMNXWWKxlo0WMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMMW0dlokKWMMMMMMMMMMMMMMMMMMMMMMMMMMWKxooxKWMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMMMMMNOdoodkKNWMMMMMMMMMMMMMMMMWNKkdood0NMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMMMMMMMMWKkddddddxkOOOO00OkkxddddddkXWMMMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMMMMMMMMMMMMMNX0OkxxdddddxxxkO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
@echo  "\033[32m MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"
                                                                                 
endef

define weee

@echo  " ░█▀█░█▀▄░█▀█░█▀▀░█▀▀░█▀▀░█▀█░░░░░░░░   "
@echo  " ░█▀▀░█▀▄░█░█░█░░░█▀▀░▀▀█░█░█░░░░░░░░   "
@echo  " ░▀░░░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░░░░░░░░   "
@echo  " ░█▀▄░█▀▀░█▄█░█▀█░█░█░█▀▀░░░█▀▀░█▀█░█▀█ "
@echo  " ░█▀▄░█▀▀░█░█░█▀█░█▀▄░█▀▀░░░█░░░█░█░█░█ "
@echo  " ░▀░▀░▀▀▀░▀░▀░▀░▀░▀░▀░▀▀▀░░░▀▀▀░▀▀▀░▀░▀ "
@echo  " ░░░█▀▀░█░█░▀█▀░▀█▀░█▀█                 "
@echo  " ░░░█▀▀░▄▀▄░░█░░░█░░█░█                 "
@echo  " ░░░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀                 "


endef
