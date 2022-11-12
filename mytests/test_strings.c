#include "test.h"
#include <stdio.h>

void check_strings_right(char *x);
//void check_strings_NULL();
void check_strings_left(char *x);
void check_strings_undef_beh(void);

	char *x = "abcdefg";
	char *n = "abcdefghijklmnop";
	char *p = "-12";
	//p2 = "-12";
	char *q = "0";
	char *q2 = "";
	char *n2 = "mango";


void check_strings_all(void)
{
	check_strings_right(n2);
	check_strings_left(x);
	check_strings_undef_beh();
}


void check_strings_right(char *x)
{
	print_line(RED); print_line(RED);
	printf(RED"\n___TEST STRINGS__________________________________________________________\n\n"RESET);
	//print_line();  //1
	printf(BLU"      %%s       %%8s         %%-8s        %%5s      %%3s !!\n"RESET);
	   ret_orig = printf("Orig: [%s]  [%8s]  [%-8s]  [%5s]  [%3s]\n", x,x,x,x,x);
	ret_mine = ft_printf("Mine: [%s]  [%8s]  [%-8s]  [%5s]  [%3s]\n", x,x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	
	//print_line();  //2
	printf(BLU"      %%.s  %%.0s %%.1s  %%.3s   %%.5s     %%.7s\n"RESET);
	   ret_orig = printf("Orig: [%.s]   [%.0s]   [%.1s]   [%.3s]  [%.5s]  [%.7s]\n", x,x,x,x,x,x);		
	ret_mine = ft_printf("Mine: [%.s]   [%.0s]   [%.1s]   [%.3s]  [%.5s]  [%.7s]\n", x,x,x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //3
	printf(BLU"      %%s      %%-6s     %%.3s  %%6.3s    %%5.5s\n"RESET);
	   ret_orig = printf("Orig: [%s] [%-6s] [%.3s] [%6.3s] [%5.5s]\n", x,x,x,x,x);		
	ret_mine = ft_printf("Mine: [%s] [%-6s] [%.3s] [%6.3s] [%5.5s]\n", x,x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //4
	printf(BLU"      %%6.3s     %%3.5s    %%6.0s\n"RESET);
	   ret_orig = printf("Orig: [%6.3s]  [%3.5s]  [%6.0s]\n", x,x,x);		
	ret_mine = ft_printf("Mine: [%6.3s]  [%3.5s]  [%6.0s]\n", x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


	//print_line();  //5 
	printf(BLU"      %%10s         %%-10s         %%.5s     %%6.5s     %%-6.5s\n"RESET);
	   ret_orig = printf("Orig: [%10s] [%-10s]  [%.5s]  [%6.5s]  [%-6.5s]\n", x,x,x,x,x);
	ret_mine = ft_printf("Mine: [%10s] [%-10s]  [%.5s]  [%6.5s]  [%-6.5s]\n", x,x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //6
	printf(BLU"      %%10s          %%10.0s        %%10.s         %%10.10s\n"RESET);
	   ret_orig = printf("Orig: [%10s]  [%10.0s]  [%10.s]  [%10.10s]\n", x,x,x,x);
	ret_mine = ft_printf("Mine: [%10s]  [%10.0s]  [%10.s]  [%10.10s]\n", x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	
	//print_line();  //7
	printf(BLU"      %%-10.10s      %%-01.10s\n"RESET);
	   ret_orig = printf("Orig: [%-10.10s]     [%-1.10s]\n", x,x);
	ret_mine = ft_printf("Mine: [%-10.10s]     [%-1.10s]\n", x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

}

void check_strings_left(char *x)
{

	printf(RED"\n___STRINGS_LEFT_ALIGN________________________________________\n\n"RESET);
	//print_line();  //1
	   printf(BLU"       %%-s     %%-8s        %%-5s     %%-3s \n"RESET);
	   ret_orig = printf("Orig: [%-s]  [%-8s]  [%-5s]  [%-3s]\n", x,x,x,x);
	ret_mine = ft_printf("Mine: [%-s]  [%-8s]  [%-5s]  [%-3s]\n", x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	

	//print_line();  //2
	printf(BLU"      %%-.s  %%-.0s   %%-.1s  %%-.3s   %%-.5s     %%-.7s\n"RESET);
	   ret_orig = printf("Orig: [%-.s]    [%-.0s]      [%-.1s]    [%-.3s]   [%-.5s]  [%-.7s]\n", x,x,x,x,x,x);		
	ret_mine = ft_printf("Mine: [%-.s]    [%-.0s]      [%-.1s]    [%-.3s]   [%-.5s]  [%-.7s]\n", x,x,x,x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //3
	printf(BLU"      %%-s      %%-6s     %%-5.5s\n"RESET);
	   ret_orig = printf("Orig: [%-s] [%-6s] [%-5.5s]\n", x,x,x);		
	ret_mine = ft_printf("Mine: [%-s] [%-6s] [%-5.5s]\n", x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //4
	printf(BLU"      %%-6.3s     %%-3.5s   %%-6.0s\n"RESET);
	   ret_orig = printf("Orig: [%-6.3s]  [%-3.5s]  [%-6.0s]\n", x,x,x);		
	ret_mine = ft_printf("Mine: [%-6.3s]  [%-3.5s]  [%-6.0s]\n", x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //5 
	printf(BLU"       %%-10s         %%-.5s    %%-6.5s\n"RESET);
	   ret_orig = printf("Orig: [%-10s]  [%-.5s]  [%-6.5s]  \n", x,x,x);
	ret_mine = ft_printf("Mine: [%-10s]  [%-.5s]  [%-6.5s]  \n", x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//print_line();  //6
	printf(BLU"      %%-10s          %%-10.0s        %%-10.s\n"RESET);
	   ret_orig = printf("Orig: [%-10s]  [%-10.0s]  [%-10.s]\n", x,x,x);
	ret_mine = ft_printf("Mine: [%-10s]  [%-10.0s]  [%-10.s]\n", x,x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	
	//print_line();  //7
	printf(BLU"      %%-10.10s         %%-01.10s\n"RESET);
	   ret_orig = printf("Orig: [%-10.10s]     [%-1.10s]\n", x,x);
	ret_mine = ft_printf("Mine: [%-10.10s]     [%-1.10s]\n", x,x);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	// VARIOUS PROBLEMATIC CASES ////////////////////////////////////////////
	printf(RED"\n___STRINGS_VARIOUS_PROBLEMATIC_CASES___________________________\n\n"RESET);
	printf(BLU"      %%*s,-4,%s    \n"RESET, q);
	ret_orig =    printf("Orig: [%*s] \n",-4, q);
	ret_mine = ft_printf("Mine: [%*s] \n",-4, q);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%-*s,-4,%s    \n"RESET, q);
	ret_orig =    printf("Orig: [%*s] \n",-4, q);
	ret_mine = ft_printf("Mine: [%*s] \n",-4, q);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%.*s,-4,%s    \n"RESET, p);
	ret_orig =    printf("Orig: [%.*s] \n",-4,p);
	ret_mine = ft_printf("Mine: [%.*s] \n",14,p);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%.*s,-4,%s      %%.*s,-1,%s\n"RESET, n, p);
	ret_orig =    printf("Orig: [%.*s]            [%.*s]\n",-4,n, -1,p);
	ret_mine = ft_printf("Mine: [%.*s]            [%.*s]\n",-4,n, -1,p);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%.*s,2,%s       %%.1s. %s    \n"RESET, n, p);
	ret_orig =    printf("Orig: [%.*s]                          [%.1s]\n",2,n, p);
	ret_mine = ft_printf("Mine: [%.*s]                          [%.1s]\n",2,n, p);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%-*.*s,3,2,%s     %%-*.*s,3,2,%s \n"RESET, q, q2);
	ret_orig =    printf("Orig: [%-*.*s]            [%-*.*s]\n",3,2,q, 3,2,q2);
	ret_mine = ft_printf("Mine: [%-*.*s]            [%-*.*s]\n",3,2,q, 3,2,q2);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


	printf(RED"\n___STRINGS WITH NULL ________________________\n\n"RESET);
	char *s = NULL;

	printf(BLU" %%-15.4, NULL \n"RESET);
	ret_orig =    printf("Orig: [%-15.4s]\n", s);
	ret_mine = ft_printf("Mine: [%-15.4s] !!! Different on Mac\n", s);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("Orig: %-8s, %.s, %-4s, %-5.4s, %-8.12s\n", s, s, s, s, s);
	ret_mine = ft_printf("Mine: %-8s, %.s, %-4s, %-5.4s, %-8.12s\n", s, s, s, s, s);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("Orig: [%8.3s]  [%8s]  [%-8s]\n", s, s, s);
	ret_mine = ft_printf("Mine: [%8.3s]  [%8s]  [%-8s]\n", s, s, s);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

}


void check_strings_undef_beh(void)
{
	char *s = NULL;

	printf(RED"\n___STRINGS_UNDEFINED_BEHAVIOUR (printf gives Warning)___________________________\n" RESET);

	printf(BLU"      %%0s       %%0.s   %%0.0s   %%0s         %%-01.10s\n"RESET);
	   //printf("Orig: [%0s]  [%0.s]    [%0.0s]      [%0s]   [%-01.10s]\n", x,x,x,x,x);
	ft_printf("Mine: [%0s]  [%0.s]    [%0.0s]      [%0s]   [%-01.10s]\n", x,x,x,x,x);

	printf(RED"\n___STRINGS WITH NULL - UNDEFINED_BEHAVIOUR ________________________\n" RESET);

	
	//ret_orig =    printf("Orig: [%9.22s]  [%---s]  [%.*s]\n", s, s, -9,s);
	ret_mine = ft_printf("Mine: [%9.22s]  [%---s]  [%.*s]\n", s, s, -9,s);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}



int main(void)
{

	check_strings_all();

	return (0);
}
