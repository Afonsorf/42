norminette -R CheckForbiddenSourceHeader ./ex0*/*
gcc -Wextra -Werror -Wall main.c ex0*/*.c
./a.out