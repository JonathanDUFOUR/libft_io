# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 23:33:41 by jodufour          #+#    #+#              #
#    Updated: 2021/10/09 01:01:05 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#######################################
#               COMANDS               #
#######################################
CC			=	clang -c -o
LINK		=	ar rcs
MKDIR		=	mkdir -p
RM			=	rm -rf

#######################################
#               LIBRARY               #
#######################################
NAME		=	libft_io
NAME_A		=	${NAME}.a
NAME_SO		=	${NAME}.so

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR		=	srcs/
PTF_SRC_DIR	=	ft_printf/
OBJ_DIR		=	objs/
INC_DIR		=	includes/
PRV_DIR		=	private/

######################################
#            SOURCE FILES            #
######################################
PTF_SRC		=	\
				${addprefix %/,				\
					get_arg_prct.c			\
					padded_putprct.c		\
				}							\
				${addprefix b/,				\
					blen.c					\
					get_arg_b.c				\
					padded_putlluint_bin.c	\
				}							\
				${addprefix c/,				\
					get_arg_c.c				\
					padded_putchar.c		\
					padded_putwchar.c		\
					wclen.c					\
				}							\
				${addprefix d/,				\
					dlen.c					\
					flag_exception.c		\
					get_arg_d.c				\
					padded_putllint.c		\
				}							\
				${addprefix o/,				\
					get_arg_o.c				\
					olen.c					\
					padded_putlluint_oct.c	\
				}							\
				${addprefix p/,				\
					get_arg_p.c				\
					padded_putaddr.c		\
					plen.c					\
				}							\
				${addprefix s/,				\
					get_arg_s.c				\
					padded_putnstr.c		\
					padded_putnwstr.c		\
					putnull.c				\
					wstrlen.c				\
					wstrsize.c				\
				}							\
				${addprefix u/,				\
					get_arg_u.c				\
					padded_putlluint.c		\
					ulen.c					\
				}							\
				${addprefix x/,				\
					get_arg_x_lower.c		\
					get_arg_x_upper.c		\
					padded_putlluint_hexa.c	\
					xlen.c					\
				}							\
				ft_printf.c					\
				mng_arg.c					\
				mng_flags.c					\
				mng_fwidth.c				\
				mng_lmod.c					\
				mng_prec.c					\
				mng_spec.c					\
				mng_text.c					\
				padding.c					\
				ptf_strchr.c				\
				ptf_strlen.c				\
				putlluint_bin.c				\
				putlluint_hexa.c			\
				putlluint_oct.c

SRC			=	\
				${addprefix ${PTF_SRC_DIR},	\
					${PTF_SRC}				\
				}							\
				ft_atohhi.c					\
				ft_atohhu.c					\
				ft_atohi.c					\
				ft_atohu.c					\
				ft_atoi_base.c				\
				ft_atoi.c					\
				ft_atoli.c					\
				ft_atolli.c					\
				ft_atollu.c					\
				ft_atolu.c					\
				ft_atou.c					\
				ft_cat.c					\
				ft_convert_base.c			\
				ft_ctoa.c					\
				ft_fddel.c					\
				ft_file_size.c				\
				ft_hhintlen.c				\
				ft_hhuintlen.c				\
				ft_hintlen.c				\
				ft_huintlen.c				\
				ft_indexof.c				\
				ft_intlen.c					\
				ft_isalnum.c				\
				ft_isalpha.c				\
				ft_isascii.c				\
				ft_isdigit.c				\
				ft_islower.c				\
				ft_isprint.c				\
				ft_isspace.c				\
				ft_isupper.c				\
				ft_itoa_base.c				\
				ft_itoa.c					\
				ft_lintlen.c				\
				ft_llintlen.c				\
				ft_lluintlen.c				\
				ft_luintlen.c				\
				ft_lutoa_base.c				\
				ft_putbyte_fd.c				\
				ft_putbytes_fd.c			\
				ft_putchar_fd.c				\
				ft_putendl_fd.c				\
				ft_putint_fd.c				\
				ft_putlint_fd.c				\
				ft_putllint_fd.c			\
				ft_putlluint_fd.c			\
				ft_putluint_fd.c			\
				ft_putstr_fd.c				\
				ft_putuint_base_fd.c		\
				ft_putuint_fd.c				\
				ft_tolower.c				\
				ft_toupper.c				\
				ft_uintlen.c				\
				ft_utoa_base.c				\
				ft_utoa.c					\
				ft_wrong_base.c				\
				get_next_line_utils.c		\
				get_next_line.c

######################################
#            OBJECT FILES            #
######################################
OBJ			=	${SRC:.c=.o}
OBJ			:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP			=	${OBJS:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS		=	-Wall -Wextra -Werror
CFLAGS		+=	-MMD -MP
CFLAGS		+=	-I${INC_DIR} -I${PRV_DIR}

ifeq (${DEBUG}, 1)
	CFLAGS	+=	-g
endif

LDFLAGS		=	

#######################################
#                RULES                #
#######################################
${NAME_A}:	${OBJ}
	${LINK} $@ ${LDFLAGS} $^

${NAME_SO}:	CFLAGS	+= -fPIC
${NAME_SO}:	LDFLAGS += -shared
${NAME_SO}:	LINK = clang -o
${NAME_SO}:	${OBJ}
	${LINK} $@ ${LDFLAGS} $^

all: ${NAME_A} ${NAME_SO}

-include ${DEP}

${OBJ_DIR}%.o:	${SRC_DIR}%.c
	@${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJ_DIR}

fclean:
	${RM} ${OBJ_DIR} ${NAME_A} ${NAME_SO}

re:	fclean all

-include /home/jodufour/Templates/mk_files/coffee.mk
-include /home/jodufour/Templates/mk_files/norm.mk

.PHONY: all clean fclean re norm coffee
