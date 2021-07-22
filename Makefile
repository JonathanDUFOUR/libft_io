# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 23:33:41 by jodufour          #+#    #+#              #
#    Updated: 2021/07/22 22:05:42 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################
#               COMANDS               #
#######################################
CC		=	gcc -c -o
LINKER	=	ar rcs
MAKEDIR	=	mkdir -p
RM		=	rm -rf

#######################################
#               LIBRARY               #
#######################################
NAME	=	libft_io
NAME_A	=	${NAME}.a
NAME_SO	=	${NAME}.so

#######################################
#             DIRECTORIES             #
#######################################
INCD	=	includes/
SRCD	=	srcs/
OBJD	=	objs/

######################################
#            SOURCE FILES            #
######################################
SRCS	=	\
			ft_atoi_base.c			\
			ft_atoi.c				\
			ft_atol.c				\
			ft_atou.c				\
			ft_atoul.c				\
			ft_cat.c				\
			ft_convert_base.c		\
			ft_ctoa.c				\
			ft_file_size.c			\
			ft_indexof.c			\
			ft_intlen.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_islower.c			\
			ft_isprint.c			\
			ft_isspace.c			\
			ft_isupper.c			\
			ft_itoa_base.c			\
			ft_itoa.c				\
			ft_lutoa_base.c			\
			ft_putbyte_fd.c			\
			ft_putbytes_fd.c		\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_putint_fd.c			\
			ft_putlint_fd.c			\
			ft_putluint_fd.c		\
			ft_putstr_fd.c			\
			ft_putuint_base_fd.c	\
			ft_putuint_fd.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_uintlen.c			\
			ft_utoa_base.c			\
			ft_utoa.c				\
			ft_wrong_base.c			\
			get_next_line_utils.c	\
			get_next_line.c

######################################
#            OBJECT FILES            #
######################################
OBJS	=	${SRCS:.c=.o}
OBJS	:=	${addprefix ${OBJD}, ${OBJS}}

DEPS	=	${OBJS:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-Wall -Wextra -MMD -I${INCD}

ifeq (DEBUG, true)
	CFLAGS	+=	-g
endif

LDFLAGS	=	

#######################################
#                RULES                #
#######################################
${NAME_A}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

${NAME_SO}:	CFLAGS	+= -fPIC
${NAME_SO}:	LDFLAGS += -shared
${NAME_SO}:	LINKER = gcc -o
${NAME_SO}:	${OBJS}
	${LINKER} $@ ${LDFLAGS} $^

all:	${NAME_A} ${NAME_SO}

-include ${DEPS}

${OBJD}%.o:	${SRCD}%.c
	@${MAKEDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME_A} ${NAME_SO}

re:	fclean all

norm:
	@norminette ${SRCD} | grep 'Error' ; true

coffee:
	@echo '                                              '
	@echo '                   "   "                      '
	@echo '                  " " " "                     '
	@echo '                 " " " "                      '
	@echo '         _.-==="""""""""===-._                '
	@echo '        |=___    ~ ~ ~    ___=|=,.            '
	@echo '        |    """======="""    |  \\           '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |   ||          '
	@echo '        |                     |  //           '
	@echo '         \                   /==""            '
	@echo '          \                 /                 '
	@echo '           ""--._______.--""                  '
	@echo '                                              '

.PHONY: all clean fclean re norm coffee
