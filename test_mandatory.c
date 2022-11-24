
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

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
#define RES "\x1B[0m"

int ret_orig, ret_mine;

void test_c()
{
    

    printf(HYEL"\n__TEST CHARS__________________________________________________\n\n" RES);
    // printf(BLU"       %%%%  %%5.c     %%-5c     %%*c      %%-*c     %%c\n"RES);
    // ret_orig =    printf("Orig:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
    // ret_mine = ft_printf("Mine:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);

    ret_orig =    printf("");
    ret_mine = ft_printf("");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("\x01\x02\a\v\b\f\r\n");
    ret_mine = ft_printf("\x01\x02\a\v\b\f\r\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig = printf("%%\n");
    ret_mine = ft_printf("%%\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf(" %%\n");
    ret_mine = ft_printf(" %%\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf(" %%c\n");
    ret_mine = ft_printf(" %%c\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%%%%%%\n");
    ret_mine = ft_printf("%%%%%%\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%%%c\n", 'x');
    ret_mine = ft_printf("%%%c\n", 'x');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%c\n", 'x');
    ret_mine = ft_printf("%c\n", 'x');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf(" %c\n", 'x');
    ret_mine = ft_printf(" %c\n", 'x');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%c \n", 'x');
    ret_mine = ft_printf("%c \n", 'x');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%c%c%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%c%c%c\n", 'a', '\t', 'b');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%cc%cc%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%cs%cs%c\n", 'c', 'b', 'a');
    ret_mine = ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}


void test_s()
{
    printf(HYEL"\n__TEST STRINGS__________________________________________________\n\n" RES);

    ret_orig =    printf("%s\n", "");
    ret_mine = ft_printf("%s\n", "");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf("%s\n", (char *)NULL);
    ret_mine = ft_printf("%s\n", (char *)NULL);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf("%s\n", "some string with %s hehe");
    ret_mine = ft_printf("%s\n", "some string with %s hehe");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf(" %s\n", "can it handle \t and \n?\n");
    ret_mine = ft_printf(" %s\n", "can it handle \t and \n?\n");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
    ret_mine = ft_printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf("%s%s%s\n", "And ", "some", "joined");
    ret_mine = ft_printf("%s%s%s\n", "And ", "some", "joined");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);


    ret_orig =    printf("%ss%ss%ss\n", "And ", "some other", "joined");
    ret_mine = ft_printf("%ss%ss%ss\n", "And ", "some other", "joined");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}


void test_p()
{
    printf(HYEL"\n__TEST POINTERS__________________________________________________\n\n" RES);
		
    ret_orig =    printf("%p\n", "");
    ret_mine = ft_printf("%p\n", "");
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%p\n", NULL);
    ret_mine = ft_printf("%p\n", NULL);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%p\n", (void *)-14523);
    ret_mine = ft_printf("%p\n", (void *)-14523);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("0x%p-\n", (void *)ULONG_MAX);
    ret_mine = ft_printf("0x%p-\n", (void *)ULONG_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    ret_mine = ft_printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}



void test_d()
{
    printf(HYEL"\n__TEST INTEGERS d __________________________________________________\n\n" RES);
    ret_orig =    printf("%d\n", 0);
    ret_mine = ft_printf("%d\n", 0);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%d\n", -10);
    ret_mine = ft_printf("%d\n", -10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", -200000);
    ret_mine = ft_printf("%d\n", -200000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", -6000023);
    ret_mine = ft_printf("%d\n", -6000023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 10);
    ret_mine = ft_printf("%d\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 10000);
    ret_mine = ft_printf("%d\n", 10000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", 100023);
    ret_mine = ft_printf("%d\n", 100023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", INT_MAX);
    ret_mine = ft_printf("%d\n", INT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d\n", INT_MIN);
    ret_mine = ft_printf("%d\n", INT_MIN);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%dxx\n", 10);
    ret_mine = ft_printf("dgs%dxx\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%d%dd%d\n", 1, 2, -3);
    ret_mine = ft_printf("%d%dd%d\n", 1, 2, -3);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}




void test_i()
{
    printf(HYEL"\n__TEST INTEGERS i __________________________________________________\n\n" RES);

    ret_orig =    printf("%i\n", 0);
    ret_mine = ft_printf("%i\n", 0);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%i\n", -10);
    ret_mine = ft_printf("%i\n", -10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", -200000);
    ret_mine = ft_printf("%i\n", -200000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", -6000023);
    ret_mine = ft_printf("%i\n", -6000023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 10);
    ret_mine = ft_printf("%i\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 10000);
    ret_mine = ft_printf("%i\n", 10000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", 100023);
    ret_mine = ft_printf("%i\n", 100023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", INT_MAX);
    ret_mine = ft_printf("%i\n", INT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i\n", INT_MIN);
    ret_mine = ft_printf("%i\n", INT_MIN);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%ixx\n", 10);
    ret_mine = ft_printf("dgs%ixx\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%i%ii%i\n", 1, 2, -3);
    ret_mine = ft_printf("%i%ii%i\n", 1, 2, -3);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}


void test_u()
{
    printf(HYEL"\n__TEST UNSIGNED INTEGERS__________________________________________________\n\n" RES);

    ret_orig =    printf("%u\n", 0);
    ret_mine = ft_printf("%u\n", 0);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%u\n", -10);
    ret_mine = ft_printf("%u\n", -10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%u\n", -200000);
    ret_mine = ft_printf("%u\n", -200000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", -6000023);
    ret_mine = ft_printf("%u\n", -6000023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 10);
    ret_mine = ft_printf("%u\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 10000);
    ret_mine = ft_printf("%u\n", 10000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", 100023);
    ret_mine = ft_printf("%u\n", 100023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", INT_MAX);
    ret_mine = ft_printf("%u\n", INT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", INT_MIN);
    ret_mine = ft_printf("%u\n", INT_MIN);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u\n", UINT_MAX);
    ret_mine = ft_printf("%u\n", UINT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%uxx\n", 10);
    ret_mine = ft_printf("dgs%uxx\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%u%uu%u\n", 1, 2, -3);
    ret_mine = ft_printf("%u%uu%u\n", 1, 2, -3);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}


// ret_orig =    printf
//ret_mine = ft_printf

void test_x()
{
    ret_orig =    printf("%x\n", 0);
    ret_mine = ft_printf("%x\n", 0);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%x\n", -10);
    ret_mine = ft_printf("%x\n", -10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);

    ret_orig =    printf("%x\n", -200000);
    ret_mine = ft_printf("%x\n", -200000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", -6000023);
    ret_mine = ft_printf("%x\n", -6000023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 10);
    ret_mine = ft_printf("%x\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 10000);
    ret_mine = ft_printf("%x\n", 10000);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 100023);
    ret_mine = ft_printf("%x\n", 100023);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 0xabcdef);
    ret_mine = ft_printf("%x\n", 0xabcdef);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", 0x7fedcba1);
    ret_mine = ft_printf("%x\n", 0x7fedcba1);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", INT_MAX);
    ret_mine = ft_printf("%x\n", INT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", INT_MIN);
    ret_mine = ft_printf("%x\n", INT_MIN);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x\n", UINT_MAX);
    ret_mine = ft_printf("%x\n", UINT_MAX);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("dgs%xxx\n", 10);
    ret_mine = ft_printf("dgs%xxx\n", 10);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
    
    ret_orig =    printf("%x%xx%x\n", 1, 2, -3);
    ret_mine = ft_printf("%x%xx%x\n", 1, 2, -3);
    printf(BLU"Orig: %d, Mine: %d\n\n" RES, ret_orig, ret_mine);
}

// void test_X()
// {
// 	TEST("X format", {
// 		test_printf("%X", 0);
// 		test_printf("%X", -10);
// 		test_printf("%X", -200000);
// 		test_printf("%X", -6000023);
// 		test_printf("%X", 10);
// 		test_printf("%X", 10000);
// 		test_printf("%X", 100023);
// 		test_printf("%X", 0xabcdef);
// 		test_printf("%X", 0x7fedcba1);
// 		test_printf("%X", INT_MAX);
// 		test_printf("%X", INT_MIN);
// 		test_printf("%X", UINT_MAX);
// 		test_printf("dgs%Xxx", 10);
// 		test_printf("%X%Xx%X", 1, 2, -3);
// 	})
// }

// int main(int argn, char **argv)
// {
// 	printf(YEL "Mandatory:" NC "\n");
// 	pf_setup_framework(argn, argv);

// 	simple_test();
// 	test_c();
// 	test_s();
// 	test_p();
// 	test_d();
// 	test_i();
// 	test_u();
// 	test_x();
// 	test_X();

// 	TEST("random", {
// 		// generated in python
// 		//==%%^^&&++==
// 	});
// }


int main(void)
{
	test_c();
	// test_s();
	// test_p();
	// test_d();
	// test_i();
	// test_u();
	// test_x();

    // printf("new: [%#8x] \n", 0x123);
    // printf("new: [%8x] \n", 0x123);
    // printf("new: [% 8d] \n", 123);
    // printf("new: [%08x] \n", 0x123);
    // printf("new: [%-8x] \n", 0x123);

	return (0);
}
