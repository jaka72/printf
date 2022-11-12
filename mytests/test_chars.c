#include "test.h"

void check_chars(void)
{	
	char c = 'a';

	//print_line(HYEL); print_line(HYEL);
	printf(HYEL"\n__TEST CHARS [ %%c = %c ]__________________________________________________\n\n", c);
	printf(BLU"       %%%%  %%5.c     %%-5c     %%*c      %%-*c     %%c\n"RESET);
	ret_orig =    printf("Orig:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
	ret_mine = ft_printf("Mine:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%*c, -12 \n"RESET);
	ret_orig =    printf("Orig: [%*c]\n", -12,c);
	ret_mine = ft_printf("Mine: [%*c]\n", -12,c);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	c = '-';
	printf(HYEL"\n____[ %%c = %c ]_______________________________________________________\n\n", c);
	printf(BLU"       %%%%  %%5.c     %%-5c     %%*c      %%-*c    %%c\n"RESET);
	ret_orig =    printf("Orig:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
	ret_mine = ft_printf("Mine:  %%  [%5c]  [%-5c]  [%*c]  [%-*c]  [%c]\n", c, c, 5, c, 5, c, c);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"      %%*c, -12 \n"RESET);
	ret_orig =    printf("Orig: [%*c]\n", -12,c);
	ret_mine = ft_printf("Mine: [%*c]\n", -12,c);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	/*
	print_line();  //3
	printf(BLU"           %%%%      %%5.c           %%-5c          %%*c         %%-*c             %%c\n"RESET);
	   printf("Orig: \"Once %% upon [%5.c] a time [%-5c] there [%*c] was [%-*c] a little [%c] girl.\"\n", c, c, 5, c, 5, c, c);
	my_printf("Mine: \"Once %% upon [%5.c] a time [%-5c] there [%*c] was [%-*c] a little [%c] girl.\"\n", c, c, 5, c, 5, c, c);
	printf(RESET);
	*/
}



int main(void)
{

	check_chars();

	return (0);
}
