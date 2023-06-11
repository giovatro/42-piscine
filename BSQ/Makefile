# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 18:30:55 by npaturzo          #+#    #+#              #
#    Updated: 2023/06/07 19:28:39 by npaturzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bsq: main.o open_map.o open_map2.o make_map.o solve_map.o print_map.o
	cc -Wall -Wextra -Werror main.o open_map.o open_map2.o make_map.o solve_map.o print_map.o -o bsq

main.o:
	cc -c -Wall -Wextra -Werror main.c bsq.h

open_map.o:
	cc -c -Wall -Wextra -Werror open_map.c bsq.h

open_map2.o:
	cc -c -Wall -Wextra -Werror open_map2.c bsq.h

make_map.o:
	cc -c -Wall -Wextra -Werror make_map.c bsq.h

solve_map.o:
	cc -c -Wall -Wextra -Werror solve_map.c bsq.h

print_map.o:
	cc -c -Wall -Wextra -Werror print_map.c bsq.h

clean:
	rm -f *.o bsq

fclean: clean
	rm -f bsq
