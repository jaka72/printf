#include "test.h"

void check_p_all(void)
{

    print_line(MAG); print_line(MAG);
	printf(MAG"\n___POINTERS and HEX _____________________________________________________\n\n"RESET);
	
	// POINTERS %p
	ret_orig =    printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	ret_mine = ft_printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	printf("Orig: %d, Mine: %d,                          NULL is different on Mac !!!\n\n", ret_orig, ret_mine);

	ret_orig =    printf("[%p] [%x]\n", (void *)209590960, 209590960);
	ret_mine = ft_printf("[%p] [%x]\n", (void *)209590960, 209590960);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("[%x]  [%x]  [%x]  [%x]\n", 209590960, 20703891, 1, 0);
	ret_mine = ft_printf("[%x]  [%x]  [%x]  [%x]\n", 209590960, 20703891, 1, 0);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("[%p]\n", (void*)209590960);
	ret_mine = ft_printf("[%p]\n", (void*)209590960);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("[%*p]  [%*x]\n", 13, (void*)209590960, 12, 209590960);
	ret_mine = ft_printf("[%*p]  [%*x]\n", 13, (void*)209590960, 12, 209590960);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);

	ret_orig =    printf("[%-*p]\n", 3,NULL);
	ret_mine = ft_printf("[%-*p]        NULL is different on Mac\n", 3,NULL);
	printf("Orig: %d, Mine: %d\n\n", ret_orig, ret_mine);


}





