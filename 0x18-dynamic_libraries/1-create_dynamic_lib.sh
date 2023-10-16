#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -Wall -Werror -pedantic -Wextra -shared -o liball.so *.o
