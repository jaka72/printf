#include "ft_printf.h"

// clang-7 -pthread -lm  -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c ft_putnbr_hex.c print_c.c print_d.c print_d_right.c print_d_left.c print_d0_right.c print_d0.c print_u.c print_u_right.c print_u_left.c print_p.c print_p_right.c print_p_left.c print_p_null.c print_s_null.c print_s.c print_x.c print_x_right.c print_x_left.c ft_utils_functions.c libft_functions.c main.c check_chars.c check_strings.c check_hex.c check_ints.c && ./a.out

// clang-7 -pthread -lm  -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c ft_putnbr_hex.c ft_utils_functions.c print_c.c print_d.c print_d_right.c print_d_left.c print_d0_right.c print_d0.c print_u.c print_u_right.c print_u_left.c print_p.c print_p_right.c print_p_left.c print_p_null.c print_s_null.c print_s.c print_x.c print_x_right.c print_x_left.c ft_utils_functions.c libft_functions.c main.c && ./a.out



// PREMAKNJENI FAJLI V LIBFT
//  clang-7 -pthread -lm  -Wall -Werror -Wextra -g3 -fsanitize=address ft_printf.c libft/ft_putnbr_hex.c print_c.c print_d.c print_d_right.c print_d_left.c print_d0_right.c print_d0.c print_u.c print_u_right.c print_u_left.c print_p.c print_p_right.c print_p_left.c print_p_null.c print_s_null.c print_s.c print_x.c print_x_right.c print_x_left.c ft_utils_functions.c libft/ft_isdigit.c libft/ft_putchar.c libft/ft_putstr.c libft/ft_getlen.c libft/ft_putnbr.c libft/ft_putnbr_long.c libft/ft_putstr_precision.c libft/ft_strlen.c main.c  && ./a.out

//libft/libft.h utils.h

/////////////////////////////////////////////////////////////////
/* VARIOUS INFO  ///////////////////////////////////////////////
 Pri Makefile se ustvari file libftprintf.a, tega je treba vpisat zadnjega pri gcc:
     gcc check_chars.c  main.c libftprintf.a


IMPORTANT: 
	If in %d precision is negative %.*d,  -5,  then precision is always 1

	Pri %p naj ne bi blo ne fl_zero, ne ft_precision,  == warning!
		Moja printa nekaj drugace, samo je zgleda vseeno, ker ne sme tega bit


ZA POPRAVIT
	CASE_1 , IMA SAMO ENO VRSTICO, LAHKO JO DAS DOL IN JE MANJ FUNKCIJ

	v print_c  	ne rabi imet null spredaj



 NEW PROBLEMS
 TOREJ ZGLEDA DA PRI x IN p NIKOLI NI VALUE NEGATIVEN. 
    	- MINUS SE NE RABI SPRINTAT.
		- SPACE SE TUDI NE RABI SPRINTAT		
 Od Kasa Makefile mi javlja pri gcc (ne pri clang ali clang-7) napake glede unsigned < 0 in unsigned >= 0 (it's always false or always true).
 Ne vem v cem je razlika med mojim in njegovim, mogoce v kakem Werror ???
     ft_utils_functions.c:114:8: error: comparison of unsigned expression < 0 		is always false [-Werror=type-limits]

 GCC is giving errors for passing NULL to %s, Clang does not give errors.


 Test 594 (moul_mix_1) : FAILED. [SIGABRT] ???
	NOW OK, I INCREASED ARRAY SIZE FROM arr[10] TO arr[12]  ?????
	ALSO TRY IF IT WORKS WITH t_size????

QUESTIONS:
 Is it allowed to pass another function into an argument: print_s_left(ft_strlen(t_val.s));

 How to protect write(1,c,1) ???

 Test PFT ne dela na repl.it, z nobenim Makefajlom

	What is this prefix ft_, which functions have to have it???

	Does every function have to be in its own file, unless it is connected to 
	   another function, then they can be together???

	How to continue new line (with \ ??, has to continue at begining of new line?)

 DISCUSSION ABOUT MAKEFILE, MAYBE SOMETHING USEFUL
    https://42born2code.slack.com/archives/CNC93EWK0/p1604937501286600


 TIPS FROM:  Joppe | jkoers20/12/2020
	I don't think that a jump table (dispatch table ) is really the best solution to this project.
	You could do it like this
	1. Print format string until you find a %
	2. Parse the flags that come after, and put the result in some struct
	3. Find the conversion type (i, c, s, ect), pass the created struct to a function (print_c(t_struct *flags) and interpret the struct again inside that funcion (precision means something different for i than s)
	4. Convert the whole conversion to a string, print that
	5. Repleat

*/ ///////////////////////////////////////////////////////////////////////

int main(void)
{
	//int	a = -4;
	//b = 0;
	//char	c = 'a';
	//int	d = 2147483647;
	//int	e = -2147483648;
	//int	f = 42;
	//int	g = 25;
//	int	h = 4200;
//	i = 8;
	//j = -12;
	//k = 123456789;
//	int	l = 0;
	//int	m = -12345678;
	//n = "abcdefghijklmnop";
	//n2 = "super";
	//char	*o = "-a";
//	char *p = "-12";
	//p2 = "-12";
	//q = "0";
	//q2 = "";
//	char	*r = "%%";
	//char	*s = "-2147483648";
	//char	*t = "0x12345678";
	//char	*u = "-0";

	//check_chars(c);
	//check_strings(n2);
	//check_strings_left(n2);
	//check_strings(t);
	//check_ints_pos(i);
	//check_ints_neg(x);
	//check_ints_left_pos(i);
	//check_ints_left_neg(l);
	//check_hex_right(x);
	//check_hex_left(x);
	//check_heXXX_right(x);
	//check_heXXX_left(x);
//	int ret_orig = 0;
//	int ret_mine = 0;

/*	printf(BLU" _______________________________________ \n"RESET);
	ret_orig =    printf("Orig: %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	ret_mine = ft_printf("Mine: %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine); */

//	----------Test 511 : ----------
//"%-2s, %.s, %-4s, %-2.4s, 
// %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, 
// %.1s, %.2s, %.4s, %.8s" // 1st '*' = 12, 2nd '*' = 18
//%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s
//   -2s, .s,    -4s,-2.4s,   -8.12s,     3s,     8s,   ---2s, .*s, %.0s,.1s, %.2s, %.4s,     %.8s
//< (null), , (null),   ,   (null)  , (null),   (null), (null), (null), ,|  ,   ,     ,       (null) 
//> (null), , (null), (nul, (null)  , (null),   (null), (null), (null), ,| (, (n, (nul,       (null) 
// vse ok 
//printf(BLU" %%-2s, %%.s, %%-4s, %%-8.12s, %%3s, %%8s, %%---2s, %%.*s, %%.0s _______ \n"RESET);
// // slabe
//printf(BLU" %%.1s, %%.2s, %%.4s, _______ \n"RESET);

/*
	printf(BLU"Was wrong %%-2.4s  %%.1s  %%.2s  %%.4s _______ \n"RESET);
	ret_orig =    printf("Orig:, %-2.4s, %.1s, %.2s, %.4s,\n", NULL, NULL, NULL, NULL);
	ret_orig =	  printf("Mac :, (nul, (, (n, (nul,\n");
	ret_mine = ft_printf("Mine:, %-2.4s, %.1s, %.2s, %.4s,\n", NULL, NULL, NULL, NULL);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"Was good %%-2s, %%.s, %%-4s, %%-8.12s, %%3s, %%8s, %%---2s, %%.*s, %%.0s _______ \n"RESET);
	ret_orig =    printf("Orig:,%-2s, %.s, %-4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s,\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL);
	//ret_orig =	  printf("Mac :,,\n");
	ret_mine = ft_printf("Mine:,%-2s, %.s, %-4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s,\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
*/

	/* -----------------------------------------------------------------------------
** 						%p POINTERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Pointers - Basic
/*
static char	a01;
static unsigned char a02;
static short a03;
static unsigned short a04;
static int a05;
static unsigned int a06;
static long a07;
static unsigned long a08;
static long long a09;
static unsigned long long a10;
static char *a11;
static void *a12;
 
	printf("\n");
	   printf("Orig: %p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06);
	ft_printf("Mine: %p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06);
	printf("\n");
	   printf("Orig: %p%p%p%p%p%p\n",&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("Mine: %p%p%p%p%p%p\n",&a07,&a08,&a09,&a10,&a11,&a12);

	printf("\n");
	   printf("Orig: %12p %12p %12p %12p %12p %12p\n",&a01,&a02,&a03,&a04,&a05,&a06);
	ft_printf("Mine: %12p %12p %12p %12p %12p %12p\n",&a01,&a02,&a03,&a04,&a05,&a06);
	printf("\n");
	   printf("Orig: %12p %12p %12p %12p %12p %12p\n",&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("Mine: %12p %12p %12p %12p %12p %12p\n",&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");   // 2095909600
	ret_orig =    printf("Orig: [%12p] [%12p] [%10x]\n", (void *)4317518080, (void*)430748364, 2147483647);
	ret_mine = ft_printf("Mine: [%12p] [%12p] [%10x]\n", (void *)4317518080, (void*)430748364, 2147483647);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	int r01 = 0;
	ret_orig =    printf("Orig: Presque. %p\n", &r01);
	ret_mine = ft_printf("Mine: Presque. %p\n", &r01);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//printf("\norig: %-0 5%\n"); 
	ret_orig =    printf("Orig: [%05%]\n");
	ret_mine = ft_printf("Mine: [%-05%]\n");
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
	//ret_orig =    printf("Orig: Lala, %d%% qui parlent à adorent %s. Presque. %p\n", 100, "Ly", &r00);
	//ret_mine = ft_printf("Mine: Lala, %d%% qui parlent à adorent %s. Presque. %p\n", 100, "Ly", &r00);
	//printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	//"Lalalal %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}
*/


	//ret_orig =    printf("Orig: [%-05%]\n");
	//ret_mine = ft_printf("Mine: [%0-5%]\n");
	//int ret_orig = 0;
	//int ret_mine = 0;

	//int x = 12345;
	//ret_orig =    printf("Orig: [%10.8u]\n", x);
	//ret_mine = ft_printf("Mine: [%10.8u]\n", x);
	//printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

// gcc main.c libftprintf.a && ./a.out

	

	int x = 345;
		//x = -345;
	ft_putstr("Right align %%x\n");
	   printf("[%9x]  [%09x]  [% 9x]  [% 09x]\n", x, x, x, x, x);  // vse ok 
	ft_printf("[%9x]  [%09x]  [% 9x]  [% 09x]\n", x, x, x, x, x);  // vse ok

	ft_putstr("Left align %%x\n");
	   printf("[%-9x]  [%-09x]  [%- 9x]  [%- 09x]\n", x, x, x, x);
	ft_printf("[%-9x]  [%-09x]  [%- 9x]  [%- 09x]\n", x, x, x, x);    // orig ignorira space !!

	void *p = (void*)345;
	ft_putstr("Right align %%p\n");
	   printf("[%9p]  [%09p]  [% 9p]  [% 09p]  \n", p, p, p, p, p);
	ft_printf("[%9p]  [%09p]  [% 9p]  [% 09p]  \n", p, p, p, p, p);  // pri 0 mora dat nule za 0x  -> 0x00000abcd

	ft_putstr("Left align %%p\n");
	   printf("[%-9p]  [%-09p]  [%- 9p]  [%-09p]  \n", p, p, p, p, p);
	ft_printf("[%-9p]  [%-09p]  [%- 9p]  [%-09p]  \n", p, p, p, p, p);

	ft_putstr("Fixed NULL pointer, right align\n");
	   printf("orig: % *p 42 == |% s|\n", -20, NULL, "abcd");
	ft_printf("mine: % *p 42 == |% s|\n", -20, NULL, "abcd");

	ft_putstr("\nTest pft 647 RIGHT\n");
	   printf("orig: |% *.5i|  |% *.5d|\n", 9, 42, 4, 42);
	ft_printf("mine: |% *.5i|  |% *.5d|\n", 9, 42, 4, 42);

	ft_putstr("\nTest pft 647 LEFT\n");
	   printf("orig: |%- *.5i|  |%- *.5d|\n", 9, 42, 4, 42);
	ft_printf("mine: |%- *.5i|  |%- *.5d|\n", 9, 42, 4, 42);

	ft_putstr("\nFlag Plus RIGHT\n");
	   printf("orig: |%+i|  |%+.5d|\n", -42, -42);
	ft_printf("mine: |%+i|  |%+.5d|\n", -42, -42);

	ft_putstr("\nFlag Plus LEFT\n");
	   printf("orig: |%-+i|  |%-+.5d|\n", 42, 42);
	ft_printf("mine: |%-+i|  |%-+.5d|\n", 42, 42);
    
	return (0);
}

/*  TEST PFT ERRORS

/////////////////////////////////////////////////
THESE ARE NOT NECESSARY, ANNA HAD ALSO WRONG:

	Test  496:  new2019_negstar_8 
	Test  647:  moul_star_2 
	Test 4192:  notintsubject_o_neg_prec_star_01                               Test 4193:  notintsubject_o_neg_prec_star_02                               
	Test 4194:  notintsubject_o_neg_prec_star_03 




///////////////////////////////////////////
MY ERRORS PFT:

Test    7:  pct_5w          [TIMEOUT] %5% THESE ARE CAUSING ERRORS IN ORIGINAL
Test    8:  pct_5wlj        [TIMEOUT] -%5%
Test    9:  pct_5wzp        [TIMEOUT] %05%
Test   10:  pct_5wljzp      [TIMEOUT] %-05%



Test 594 (moul_mix_1) : FAILED. [SIGABRT] ???
	NOW OK, I INCREASED ARRAY SIZE FROM arr[10] TO arr[12]  ?????
	ALSO TRY IF IT WORKS WITH t_size????

  return test("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}
	int r00 = 0; 
      return test("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}
expected output : "Lalalala, 100% des gens qui parlent à Ly adorent Ly. Ou Presque. 0x7ffee3acb41c"


*/
