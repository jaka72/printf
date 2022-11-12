
# In my test.h need to match the header from the tested printf, something like ft_printf.h

LIB="../libftprintf.a"

cd ..
make
cd mytests

# MANDATORY
gcc test_mandatory.c $LIB && ./a.out

# CHARS
#gcc test_chars.c $LIB && ./a.out

# INTS
#gcc test_ints.c $LIB && ./a.out

# UNSIGNED INTS
#gcc test_u.c $LIB && ./a.out

# STRINGS ALL
#gcc test_strings.c $LIB && ./a.out

# HEX
#gcc test_hex.c $LIB && ./a.out

# MIXED
# gcc test_mixed.c $LIB && ./a.out
