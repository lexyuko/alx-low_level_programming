#!/bin/bash
gcc -Wall -Wextra -Werror -pendatic -c *.c
ar rc liball.ac *.o
