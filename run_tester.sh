
# In my test.h need to match the header from the tested printf, something like ft_printf.h

LIB="libftprintf.a"

make

# MANDATORY
gcc test_mandatory.c $LIB && ./a.out
