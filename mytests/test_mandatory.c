#include "test.h"


void test_c()
{
    int ret_orig, ret_mine;

    printf(HYEL"\n__TEST CHARS__________________________________________________\n\n" RESET);
    // printf(BLU"       %%%%  %%5.c     %%-5c     %%*c      %%-*c     %%c\n"RESET);
    // ret_orig =    printf("Orig:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
    // ret_mine = ft_printf("Mine:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);

    ret_orig =    printf("");
    ret_mine = ft_printf("");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("\x01\x02\a\v\b\f\r\n");
    ret_mine = ft_printf("\x01\x02\a\v\b\f\r\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig = printf("%%\n");
    ret_mine = ft_printf("%%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %%\n");
    ret_mine = ft_printf(" %%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %%c\n");
    ret_mine = ft_printf(" %%c\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%%%%%%\n");
    ret_mine = ft_printf("%%%%%%\n");
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%%%c\n", 'x');
    ret_mine = ft_printf("%%%c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c\n", 'x');
    ret_mine = ft_printf("%c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf(" %c\n", 'x');
    ret_mine = ft_printf(" %c\n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c \n", 'x');
    ret_mine = ft_printf("%c \n", 'x');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%c%c%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%c%c%c\n", 'a', '\t', 'b');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%cc%cc%c\n", 'a', '\t', 'b');
    ret_mine = ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

    ret_orig =    printf("%cs%cs%c\n", 'c', 'b', 'a');
    ret_mine = ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
    printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}

// void test_s()
// {
// 	TEST("s format", {
// 		test_printf("%s", "");
// 		test_printf("%s", (char *)NULL);
// 		test_printf("%s", "some string with %s hehe");
// 		test_printf(" %s", "can it handle \t and \n?");
// 		test_printf("%sx", "{} al$#@@@^&$$^#^@@^$*((&");
// 		test_printf("%s%s%s", "And ", "some", "joined");
// 		test_printf("%ss%ss%ss", "And ", "some other", "joined");
// 	})
// }

void test_s()
{
    int ret_orig, ret_mine;

    printf(HYEL"\n__TEST STRINGS__________________________________________________\n\n" RESET);

        ret_orig =    printf("%s\n", "");
        ret_mine = ft_printf("%s\n", "");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


		ret_orig =    printf("%s\n", (char *)NULL);
		ret_mine = ft_printf("%s\n", (char *)NULL);
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
    	ret_orig =    printf("%s\n", "some string with %s hehe");
    	ret_mine = ft_printf("%s\n", "some string with %s hehe");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
    	ret_orig =    printf(" %s\n", "can it handle \t and \n?\n");
    	ret_mine = ft_printf(" %s\n", "can it handle \t and \n?\n");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
    	ret_orig =    printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
    	ret_mine = ft_printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
    	ret_orig =    printf("%s%s%s\n", "And ", "some", "joined");
    	ret_mine = ft_printf("%s%s%s\n", "And ", "some", "joined");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	
    	ret_orig =    printf("%ss%ss%ss\n", "And ", "some other", "joined");
    	ret_mine = ft_printf("%ss%ss%ss\n", "And ", "some other", "joined");
        printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


}

// void test_p()
// {
// 	TEST("p format", {
// 		test_printf("%p", "");
// 		test_printf("%p", NULL);
// 		test_printf("%p", (void *)-14523);
// 		test_printf("0x%p-", (void *)ULONG_MAX);
// 		test_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
// 	})
// }

// void test_d()
// {
// 	TEST("d format", {
// 		test_printf("%d", 0);
// 		test_printf("%d", -10);
// 		test_printf("%d", -200000);
// 		test_printf("%d", -6000023);
// 		test_printf("%d", 10);
// 		test_printf("%d", 10000);
// 		test_printf("%d", 100023);
// 		test_printf("%d", INT_MAX);
// 		test_printf("%d", INT_MIN);
// 		test_printf("dgs%dxx", 10);
// 		test_printf("%d%dd%d", 1, 2, -3);
// 	})
// }

// void test_i()
// {
// 	TEST("i format", {
// 		test_printf("%i", 0);
// 		test_printf("%i", -10);
// 		test_printf("%i", -200000);
// 		test_printf("%i", -6000023);
// 		test_printf("%i", 10);
// 		test_printf("%i", 10000);
// 		test_printf("%i", 100023);
// 		test_printf("%i", INT_MAX);
// 		test_printf("%i", INT_MIN);
// 		test_printf("dgs%ixx", 10);
// 		test_printf("%i%ii%i", 1, 2, -3);
// 	})
// }

// void test_u()
// {
// 	TEST("u format", {
// 		test_printf("%u", 0);
// 		test_printf("%u", -10);
// 		test_printf("%u", -200000);
// 		test_printf("%u", -6000023);
// 		test_printf("%u", 10);
// 		test_printf("%u", 10000);
// 		test_printf("%u", 100023);
// 		test_printf("%u", INT_MAX);
// 		test_printf("%u", INT_MIN);
// 		test_printf("%u", UINT_MAX);
// 		test_printf("dgs%uxx", 10);
// 		test_printf("%u%uu%u", 1, 2, -3);
// 	})
// }

// void test_x()
// {
// 	TEST("x format", {
// 		test_printf("%x", 0);
// 		test_printf("%x", -10);
// 		test_printf("%x", -200000);
// 		test_printf("%x", -6000023);
// 		test_printf("%x", 10);
// 		test_printf("%x", 10000);
// 		test_printf("%x", 100023);
// 		test_printf("%x", 0xabcdef);
// 		test_printf("%x", 0x7fedcba1);
// 		test_printf("%x", INT_MAX);
// 		test_printf("%x", INT_MIN);
// 		test_printf("%x", UINT_MAX);
// 		test_printf("dgs%xxx", 10);
// 		test_printf("%x%xx%x", 1, 2, -3);
// 	})
// }

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
	// test_c();
	test_s();


    //printf("new: [%#8x] ", 0x123);

	return (0);
}
