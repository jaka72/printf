#include "test.h"

void check_u_all(void)
{
    int l = 0;
    int i = 0;


    print_line(GRN); print_line(GRN);
	printf(GRN"\n__TEST %%u UNSIGNED [0] __________________________________________________\n\n");

	printf(BLU"      %%01.0u, 0  0*.*u,   1,0,0 \n"RESET);
	ret_orig =    printf("Orig: [%01.0u]       [%0*.*u]\n", l, 1, 0, l);
	ret_mine = ft_printf("Mine: [%01.0u]       [%0*.*u]\n", l, 1, 0, l);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	l = i;
	printf(BLU"\n      %%02.0u, 0  0*.*u,   2,0,0 \n"RESET);
	ret_orig =    printf("Orig: [%02.0u]       [%0*.*u]\n", l, 2, 0, l);
	ret_mine = ft_printf("Mine: [%02.0u]       [%0*.*u]\n", l, 2, 0, l);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	l = i;
	printf(BLU"\n        %%0*.*u,   2,-1,0 \n"RESET);
	ret_orig =    printf("Orig: [%0*.*u]\n", 2, -1, l);
	ret_mine = ft_printf("Mine: [%0*.*u]\n", 2, -1, l);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);
}



int main(void)
{
	check_u_all();

	return (0);
}
