#ifndef TEST_H
# define TEST_H

#include "../ft_printf.h"
#include <unistd.h>

#define BLKB  "\e[40m"
#define HYEL  "\e[0;93m"
#define HGRN  "\e[0;92m"
#define HWHT  "\e[0;97m"
#define YEL   "\e[0;33m"
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define LGRN   "\e[0;92m"
//#define BLU   "\x1B[34m"
#define BLU   "\033[1;36m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

//local LIGHT_CYAN="\[\033[1;36m\]"
//   \e[92mLight green

int ret_orig;
int ret_mine;

void check_chars(void);
void check_strings_all(void);
void check_ints_all(void);
void check_hex_all(void);
void check_u_all(void);
void check_p_all(void);
void check_mixed(void);

void print_line(char *color)
{
	printf("\n%s_________________________________________________________________________"RESET, color);
}

#endif
