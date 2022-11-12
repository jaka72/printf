#include "test.h"


//int	a = -4;

char	c = 'a';
int	g = 25;
int b = 0;
//int	d = 2147483647;
//int	e = -2147483648;
//int	f = 42;

//int	h = 4200;
int i = 8;
int j = -12;
int k = 123456789;

void check_ints_pos(void);
void check_ints_neg(void);
void check_ints_left_pos(void);
void check_ints_left_neg(void);


void check_ints_all(void)
{
	check_ints_pos();
	check_ints_neg();
	check_ints_left_pos();
	check_ints_left_neg();
	//ints_undefined();
}


void check_ints_pos(void)
{

//	printf(LGRN"\n_________________________________________________________________________");printf(LGRN"\n_________________________________________________________________________");
	print_line(LGRN); print_line(LGRN);
	printf(LGRN"\n___INTS RIGHT POSITIVE, int=%d __________________________________________\n\n", g);
		   
	//print_line();  //4
	printf(BLU"       %%1.1d  %%.1d   %%1.d   %%.d    %%3.5d\n"HWHT);
	ret_orig =    printf("Orig: \"[%1.1d]   [%.1d]   [%1.d]   [%.d]   [%3.5d]\"\n", g,g,g,g,g);
	ret_mine = ft_printf("Mine: \"[%1.1d]   [%.1d]   [%1.d]   [%.d]   [%3.5d]\"\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"\nTENS   %%10d          %%10.d         %%.10d         %%10.10d\n"HWHT);
	ret_orig =    printf("Orig: \"[%10d]  [%10.d]  [%.10d]  [%10.10d]\"\n", g,g,g,g);
	ret_mine = ft_printf("Mine: \"[%10d]  [%10.d]  [%.10d]  [%10.10d]\"\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"\n       %%4.4d  %%.4d   %%4.d   %%4.1d  %%1.4d  %%5.3d\n"HWHT);
	ret_orig =    printf("Orig: \"[%4.4d] [%.4d] [%4.d] [%4.1d] [%1.4d] [%5.3d]\"\n", g, g, g, g, g, g);
	ret_mine = ft_printf("Mine: \"[%4.4d] [%.4d] [%4.d] [%4.1d] [%1.4d] [%5.3d]\"\n", g, g, g, g, g, g);

	printf(LGRN"\n___CASES WITH *.*  int=%d __________________________________________________", g);
	printf(BLU"\n      -2,-3,b   2,-3,b    -2,3,b\n"RESET);
	ret_orig =    printf("Orig: [%*.*d]      [%*.*d]     [%*.*d]\n",-2,-3,g, 2,-3,g, -2,3,g);
	ret_mine = ft_printf("Mine: [%*.*d]      [%*.*d]     [%*.*d]\n",-2,-3,g, 2,-3,g, -2,3,g);
	printf("Orig: %d, Mine: %d\n", ret_orig, ret_mine);

	printf(BLU"\n      -3,-2,b    3,-2,b    -3,2,b\n"RESET);
	ret_orig =    printf("Orig: [%*.*d]      [%*.*d]     [%*.*d]\n",-3,-2,g, 3,-2,g, -3,2,g);
	ret_mine = ft_printf("Mine: [%*.*d]      [%*.*d]     [%*.*d]\n",-3,-2,g, 3,-2,g, -3,2,g);
	printf("Orig: %d, Mine: %d\n", ret_orig, ret_mine);

	///////////////////////////////////////////////////////////////////////////////
	// CHECKING INPUT ZERO i=0 , RIGHT ALIGN ////////////////////////////////////////////////////
	printf(LGRN"\n___RIGHT-ALIGN, int=0 ____________________________________________________\n"RESET);
	printf(BLU"      %%d  %%0d %%1d %%3d   %%01d  %%03d   %%0*d\n"RESET);
	ret_orig =    printf("Orig: [%d] [%0d] [%1d] [%3d] [%01d]   [%03d]  [%0*d]\n", 0,b,b,b,b,b,b,b);
	ret_mine = ft_printf("Mine: [%d] [%0d] [%1d] [%3d] [%01d]   [%03d]  [%0*d]\n", 0,b,b,b,b,b,b,b);
	printf("Orig: %d, Mine: %d\n", ret_orig, ret_mine);

	

////////// LEFT ALIGN
	printf(LGRN"\n___LEFT-ALIGN, int=0 _______________________________________________________\n"RESET);
	printf(BLU"      %%-d  %%-1d %%-3d \n"RESET);
	ret_orig =    printf("Orig: [%-d]  [%-1d]  [%-3d] \n", b,b,b);
	ret_mine = ft_printf("Mine: [%-d]  [%-1d]  [%-3d] \n", b,b,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%-.d %%-.0d %%-.1d  %%-.3d  %%-1.0d  %%-3.d   %%-3.2d   %%-3.5d\n"RESET);
	ret_orig =    printf("Orig: [%-.d]   [%-.0d]    [%-.1d]    [%-.3d]  [%-1.0d]     [%-3.d]   [%-3.2d]    [%-3.5d]\n",b,b,b,b,b,b,b,b);
	ret_mine = ft_printf("Mine: [%-.d]   [%-.0d]    [%-.1d]    [%-.3d]  [%-1.0d]     [%-3.d]   [%-3.2d]    [%-3.5d]\n",b,b,b,b,b,b,b,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU" UNDEFINED: Cannot be together '-' and '0':  %%00.0d %%01.0d %%03.0d   %%03.2d\n\n"RESET); 

	////////// VARIANTS WITH *.*d   -*.*d   0*.*d
	printf(LGRN"\n___VARIANTS WITH *.*d   -*.*d   0*.*d ______________________________________\n"RESET);
	printf(BLU"      -2,-3,0   2,-3,0    -2,3,0\n"RESET);
	ret_orig =    printf("Orig: [%*.*d]      [%*.*d]     [%*.*d]\n",-2,-3,b, 2,-3,b, -2,3,b);
	ret_mine = ft_printf("Mine: [%*.*d]      [%*.*d]     [%*.*d]\n",-2,-3,b, 2,-3,b, -2,3,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      -3,-2,0    3,-2,0    -3,2,0\n"RESET);
	ret_orig =    printf("Orig: [%*.*d]      [%*.*d]     [%*.*d]\n",-3,-2,b, 3,-2,b, -3,2,b);
	ret_mine = ft_printf("Mine: [%*.*d]      [%*.*d]     [%*.*d]\n",-3,-2,b, 3,-2,b, -3,2,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	

	//  CASES %0*d  
	printf(BLU"      %%0*d, -4,8    \n"RESET);
	ret_orig =    printf("Orig: [%0*d]   \n",-4,i);
	ret_mine = ft_printf("Mine: [%0*d]   \n",-4,i);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%-*.*d  2,-2,0    \n"RESET);
	ret_orig =    printf("Orig: [%-*.*d] \n",2,-2,b);
	ret_mine = ft_printf("Mine: [%-*.*d] \n",2,-2,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%*.*d  3,-2,0    \n"RESET);
	ret_orig =    printf("Orig: [%*.*d] \n",3,-2,b);
	ret_mine = ft_printf("Mine: [%*.*d] \n",3,-2,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	
	printf(BLU"      %%*.*d  -2,-3,0    \n"RESET);
	ret_orig =    printf("Orig: [%*.*d] \n",-2,-3,b);
	ret_mine = ft_printf("Mine: [%*.*d] \n",-2,-3,b);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


void check_ints_neg(void)
{
	g = -42;
	printf(LGRN"\n__INTS RIGHT NEGATIVE, int = %d _______________________________________________\n", g);
	//print_line();  //1
	//printf(BLU"           %%d     %%5d      %%05d      %%0.0d\n"RESET);
	//printf("Orig: \"  %% [%d]  [%5d]  [%05d]  [%0.0d]\"\n", g, g, g, g);
	//ft_printf("Mine: \"  %% [%d]  [%5d]  [%05d]  [%0.0d]\"\n", g, g, g, g);
	   

	//print_line();  //2
	//printf(BLU"       %%0.0d   %%.0d    %%0.d    %%.d\n"HWHT);
	//printf("Orig: \"[%0.0d]   [%.0d]   [%0.d]   [%.d]\"\n", g, g, g, g);
	//ft_printf("Mine: \"[%0.0d]   [%.0d]   [%0.d]   [%.d]\"\n", g, g, g, g);
	   
	//print_line();  //3
	printf(BLU"       %%1.1d   %%.1d    %%.1d    %%.d\n"HWHT);
	printf("Orig: \"[%1.1d]   [%.1d]   [%1.d]   [%.d]\"\n", g, g, g, g);
	ft_printf("Mine: \"[%1.1d]   [%.1d]   [%1.d]   [%.d]\"\n", g, g, g, g);
	   
	//print_line();  //4
	printf(BLU"\n       %%4.4d   %%.4d    %%4.d   %%4.1d  %%1.4d   %%5.3d\n"HWHT);
	printf("Orig: \"[%4.4d] [%.4d] [%4.d] [%4.1d] [%1.4d] [%5.3d]\"\n", g, g, g, g, g, g);
	ft_printf("Mine: \"[%4.4d] [%.4d] [%4.d] [%4.1d] [%1.4d] [%5.3d]\"\n", g, g, g, g, g, g);
	
	//print_line();  //5
	printf(BLU"\nTENS   %%10d          %%10.d         %%.10d          %%10.10d\n"HWHT);
	   printf("Orig: \"[%10d]  [%10.d]  [%.10d]  [%10.10d]\"\n", g,g,g,g);
	ft_printf("Mine: \"[%10d]  [%10.d]  [%.10d]  [%10.10d]\"\n", g,g,g,g);

	//print_line();  //3
	//printf(BLU"SAME LEN  %%2d   \n"HWHT);
	//   printf("Orig: \"[%0.2d] \"\n", g);
	//ft_printf("Mine: \"[%0.2d] \"\n", g);

	//print_line();  //5
	printf(BLU"\nLEFT   %%-.0d   %%-d     %%-6d       %%-6.0d     %%-6.4d     %%-4.6\n"HWHT);
	printf("Orig: \"[%-.0d]   [%-d]   [%-6d]   [%-6.0d]   [%-6.4d]   [%-4.6d]\"\n", g,g,g,g,g,g);
	ft_printf("Mine: \"[%-.0d]   [%-d]   [%-6d]   [%-6.0d]   [%-6.4d]   [%-4.6d]\"\n", g,g,g,g,g,g);
}




void check_ints_left_pos(void)
{
	g = 125;
	printf(LGRN"\n___INTS LEFT POSITIVE, int=%d __________________________________________________", g);
	//print_line();  //1
	printf(BLU"          %%-d    %%-5d     \n"RESET);
	   printf("Orig:   %% [%-d]  [%-5d] \n", g, g);
	ft_printf("Mine:   %% [%-d]  [%-5d] \n", g, g);
	   
	//print_line();  // 2 SPACE FLAG
	printf(BLU"\nSPACE     %%- d    %%-5 d  \n"RESET);
	   printf("Orig:   %% [%- d]  [%- 5d]  \n", g,g);
	ft_printf("Mine:   %% [%- d]  [%- 5d]  \n", g,g);

	//print_line();  //3
	printf(BLU"\n        %%-.0d      %%-.d\n"HWHT);
	   printf("Orig:   [%-.0d]     [%-.d]\n", g, g);
	ft_printf("Mine:   [%-.0d]     [%-.d]\n", g, g);
	   
	//print_line();  //4
	printf(BLU"\n      %%-1.1d  %%-.1d   %%-.1d   %%-.d    %%-3.5d\n"HWHT);
	   printf("Orig: [%-1.1d]   [%-.1d]   [%-1.d]   [%-.d]   [%-3.5d]\n", g,g,g,g,g);
	ft_printf("Mine: [%-1.1d]   [%-.1d]   [%-1.d]   [%-.d]   [%-3.5d]\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"\nTENS  %%-10d          %%-10.d         %%-.10d         %%-10.10d\n"HWHT);
	   printf("Orig: [%-10d]  [%-10.d]  [%-.10d]  [%-10.10d]\n", g,g,g,g);
	ft_printf("Mine: [%-10d]  [%-10.d]  [%-.10d]  [%-10.10d]\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"\n      %%-4.4d  %%-.4d   %%-4.d   %%-4.1d  %%-1.4d  %%-5.3d\n"HWHT);
	printf("Orig: [%-4.4d]  [%-.4d]  [%-4.d]  [%-4.1d]  [%-1.4d]  [%-5.3d]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%-4.4d]  [%-.4d]  [%-4.d]  [%-4.1d]  [%-1.4d]  [%-5.3d]\n", g, g, g, g, g, g);
	
	printf(BLU"\n___NOT POSSIBLE '-' AND '0' TOGETHER ___________________________________________");
	printf(BLU"\n%%-05d     %%-0.0d   %%- 05d  %%- 0.0d   %%- 0.4d   %%-0.0d    %%-0.d\n");
}


void check_ints_left_neg()
{
	g = 456;
	printf(LGRN"\n___INTS LEFT NEGATIVE, int = %d _________________________________________________\n", g);
	//print_line();  //1
	//printf(BLU"           %%-d    %%-5d      %%-05d     %%-0.0d\n"RESET);
	//   printf("Orig: \"  %% [%-d]  [%-5d]  [%-05d]  [%-0.0d]\"\n", g, g, g, g);
	//ft_printf("Mine: \"  %% [%-d]  [%-5d]  [%-05d]  [%-0.0d]\"\n", g, g, g, g);
	   
	//print_line();  // 2 SPACE FLAG
	//printf(BLU"SPACE      %%- d    %%-5 d     %%- 05d    %%- 0.0d   %%- 0.4d\n"RESET);
	//   printf("Orig: \"  %% [%- d]  [%- 5d]  [%- 05d]  [%- 0.0d]  [%- 0.4d]\"\n", g,g,g,g,g);
	//ft_printf("Mine: \"  %% [%- d]  [%- 5d]  [%- 05d]  [%- 0.0d]  [%- 0.4d]\"\n", g,g,g,g,g);

	//print_line();  //3
	//printf(BLU"       %%-0.0d  %%-.0d   %%-0.d   %%-.d\n"HWHT);
	//printf("Orig: \"[%-0.0d]   [%-.0d]   [%-0.d]   [%-.d]\"\n", g, g, g, g);
	//ft_printf("Mine: \"[%-0.0d]   [%-.0d]   [%-0.d]   [%-.d]\"\n", g, g, g, g);
	   
	//print_line();  //4
	printf(BLU"\n      %%-1.1d  %%-.1d   %%-.1d   %%-.d    %%-3.5d\n"HWHT);
	   printf("Orig: [%-1.1d]   [%-.1d]   [%-1.d]   [%-.d]   [%-3.5d]\n", g,g,g,g,g);
	ft_printf("Mine: [%-1.1d]   [%-.1d]   [%-1.d]   [%-.d]   [%-3.5d]\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"\nTENS  %%-10d          %%-10.d         %%-.10d         %%-10.10d\n"HWHT);
	   printf("Orig: [%-10d]  [%-10.d]  [%-.10d]  [%-10.10d]\n", g,g,g,g);
	ft_printf("Mine: [%-10d]  [%-10.d]  [%-.10d]  [%-10.10d]\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"\n      %%-4.4d  %%-.4d   %%-4.d   %%-4.1d  %%-1.4d  %%-5.3d\n"HWHT);
	printf("Orig: [%-4.4d]  [%-.4d]  [%-4.d]  [%-4.1d]  [%-1.4d]  [%-5.3d]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%-4.4d]  [%-.4d]  [%-4.d]  [%-4.1d]  [%-1.4d]  [%-5.3d]\n", g, g, g, g, g, g);

}




void ints_undefined(void)
{
	//print_line();  //1
	//printf(BLU"           %%d    %%5d      %%05d     %%0.0d\n"RESET);
	//ret_orig =    printf("Orig: \"  %% [%d]  [%5d]  [%05d]  [%0.0d]\"\n", g, g, g, g);
	//ret_mine = ft_printf("Mine: \"  %% [%d]  [%5d]  [%05d]  [%0.0d]\"\n", g, g, g, g);
	   
	//print_line();  // 2 SPACE FLAG
	//printf(BLU"SPACE      %% d    %%5 d     %% 05d    %% 0.0d\n"RESET);
	//ret_orig =    printf("Orig: \"  %% [% d]  [% 5d]  [% 05d]  [% 0.0d]\"\n", g, g, g, g);
	//ret_mine = ft_printf("Mine: \"  %% [% d]  [% 5d]  [% 05d]  [% 0.0d]\"\n", g, g, g, g);

	//print_line();  //3
	//printf(BLU"       %%0.0d  %%.0d   %%0.d   %%.d\n"HWHT);
	//ret_orig =    printf("Orig: \"[%0.0d]   [%.0d]   [%0.d]   [%.d]\"\n", g, g, g, g);
	//ret_mine = ft_printf("Mine: \"[%0.0d]   [%.0d]   [%0.d]   [%.d]\"\n", g, g, g, g);

	//printf(BLU"      %%.d %%.0d %%.1d  %%.3d    %%0.0d %%1.0d %%1.d  %%3.d   %%3.2d   %%3.5d\n"RESET);
	//ret_orig =    printf("Orig: [%.d]  [%.0d]   [%.1d]   [%.3d]   [%0.0d]    [%1.0d]   [%1.d]   [%3.d]  [%3.2d]   [%3.5d]\n",b,b,b,b,b,b,b,b,b,b);
	//ret_mine = ft_printf("Mine: [%.d]  [%.0d]   [%.1d]   [%.3d]   [%0.0d]    [%1.0d]   [%1.d]   [%3.d]  [%3.2d]   [%3.5d]\n",b,b,b,b,b,b,b,b,b,b);
	//printf("Orig: %d, Mine: %d\n", ret_orig, ret_mine);

	//printf(BLU"      %%00.0d %%01.0d %%03.0d   %%03.2d\n"RESET);  // WITH FLAG_ZERO
	//ret_orig =    printf("Orig: [%00.0d]     [%01.0d]    [%03.0d]    [%03.2d]\n",b,b,b,b);
	//ret_mine = ft_printf("Mine: [%00.0d]     [%01.0d]    [%03.0d]    [%03.2d]\n",b,b,b,b);

	//ret_orig =    printf("Orig: %0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d,\n", 1,0,i,1,0,j,1,0,k,1,0,b,1,0,c);
	//ret_mine = ft_printf("Mine: %0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d,\n", 1,0,i,1,0,j,1,0,k,1,0,b,1,0,c);
	//printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//printf(BLU"      %%0*.*d  3,0,b    \n"RESET);
	//ret_orig =    printf("Orig: [%0*.*d] \n",3,0,b);
	//ret_mine = ft_printf("Mine: [%0*.*d] \n",3,0,b);
	//printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	//printf(BLU"      %%0*.*d  2,-2,0    \n"RESET);
	//ret_orig =    printf("Orig: [%0*.*d] \n",2,-2,b);
	//ret_mine = ft_printf("Mine: [%0*.*d] \n",2,-2,b);
	//printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


int main(void)
{
	check_ints_all();

	return (0);
}
