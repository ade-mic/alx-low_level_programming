#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c && ar -rcs libname.a *.o
