#include "test.h"

void check_mixed(void)
{

    char *r = "abc";
    char *p = "efg";
    int h = 34;
    char *g = "-12";
	printf(BLU"\n___CHECK MIXED %%c%%s%%d_________________________________");


//PRINT("%%%dbada%s%%**%s**-d%%0*d%-12s0*@", h, "bada", r, p, r, r, i, r, i, r, i));
	// h = 4200; i = 8;  p = "-12";  *r = "%%";
	// %% %d bada %s %% ** %s **-d % %0*d %-12s 0*@
	// %4200badabada%**%%**-d%0*d-12         0*@       // RESULT

	// ..  h    ....   arg   ..  ..   r=%%    ....   ..  ...
	// %%  %d   bada   %s    %%  **   %s      **-d   %%  0*d   %-12s 0*@
	// %   4200 bada   bada  %   **   %       **-d   %   0*d   -12         0*@

	printf(BLU"        %%c \n"RESET);//                             %d  y     %s
	ret_orig =    printf("Orig: %%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p/*, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p/*, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"______A MIX______________\n"RESET);// "%%"
	ret_orig =    printf("Orig: %s\n",                r   /*, r, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %s\n",                r  /*, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"______A MIX______________\n"RESET);// "-12"
	ret_orig =    printf("Orig: %-12s0*@\n",           g   /*, r, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %-12s0*@\n",           g  /*, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"______A MIX______________\n"RESET);//    "%%" "-12"
	ret_orig =    printf("Orig: %s**-d%%0*d%-12s0*@\n",  r,    g   /*, r, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %s**-d%%0*d%-12s0*@\n",  r,    g    /*, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"______A MIX______________\n"RESET);//                             %d  y     %s
	ret_orig =    printf("Orig: %s %%**%s**-d%%0*d%-12s0*@\n", "bada", r, p/*, r, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %s %%**%s**-d%%0*d%-12s0*@\n", "bada",r, p/*, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
	// ZJEBE SE CE NI PRESLEDKA MED %s%%**%s**     NAROBE		TOREJ CE SE %s TAKOJ NADALJUJE Z %   NPR %s%%
	//                              %s %%**%s**    PRAVILNO

	printf(BLU"______A MIX______________\n"RESET);//                             %d  y     %s
	ret_orig =    printf("Orig: %%%dxxxx%s%d\n", h, "bada",h/*, r, p, r, r, i, r, i, r, i*/);
	ret_mine = ft_printf("Mine: %%%dxxxx%s%d\n", h, "bada",h/*, r, p, r, r, i, r, i, r, i*/);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	printf(BLU"______A MIX______________\n"RESET);//                             %d  y     %s
	ret_orig =    printf("[A] %% %5c%*c%%%05d\n", 'x', 5,'y', 8);
	ret_mine = ft_printf("[A] %% %5c%*c%%%05d\n", 'x', 5,'y', 8);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}


int main(void)
{
	check_mixed();

	return (0);
}
