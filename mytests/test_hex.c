#include "test.h"

void check_hex_right(void);
void check_hex_left(void);


void check_hex_all(void)
{
	check_hex_right();
	check_hex_left();
}



void check_hex_right(void)
{

	int g = 1235;
	print_line(MAG); print_line(MAG);
	printf(MAG"\n___HEX_RIGHT__%x_________________________________________________________\n\n"RESET, g);

	//print_line();  //1
	printf(BLU"           %%x    %%5x      %%05x     %%0.0x\n"RESET);
	   printf("Orig:   %% [%x]  [%5x]  [%05x]  [%0.0x]\n", g, g, g, g);
	ft_printf("Mine:   %% [%x]  [%5x]  [%05x]  [%0.0x]\n", g, g, g, g);
	   
	//print_line();  //3
	printf(BLU"\n       %%0.0x  %%.0x    %%0.x    %%.x\n"HWHT);
	printf("Orig: [%0.0x]   [%.0x]   [%0.x]   [%.x]\n", g, g, g, g);
	ft_printf("Mine: [%0.0x]   [%.0x]   [%0.x]   [%.x]\n", g, g, g, g);
	   
	//print_line();  //4
	printf(BLU"\n       %%1.1x  %%.1x    %%1.x    %%.x     %%3.5x\n"HWHT);
	   printf("Orig: [%1.1x]   [%.1x]   [%1.x]   [%.x]   [%3.5x]\n", g,g,g,g,g);
	ft_printf("Mine: [%1.1x]   [%.1x]   [%1.x]   [%.x]   [%3.5x]\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"\nTENS   %%10x          %%10.x         %%.10x         %%10.10x\n"HWHT);
	   printf("Orig: [%10x]  [%10.x]  [%.10x]  [%10.10x]\n", g,g,g,g);
	ft_printf("Mine: [%10x]  [%10.x]  [%.10x]  [%10.10x]\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"\n       %%4.4x  %%.4x   %%4.x   %%4.1x  %%1.4x  %%5.3x\n"HWHT);
	printf("Orig: [%4.4x] [%.4x] [%4.x] [%4.1x] [%1.4x] [%5.3x]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%4.4x] [%.4x] [%4.x] [%4.1x] [%1.4x] [%5.3x]\n", g, g, g, g, g, g);

	// UNDEFINED_BEHAVIOUR /////////////////////////////////////
	//print_line();  // 2 SPACE FLAG
	printf(BLU"\n__UNDEFINED_BEHAVIOUR___________\n     %% x   %%5 x     %% 05x    %% 0.0x    \n\n"RESET);
	//   printf("Orig: [% x]  [% 5x]  [% 05x]  [% 0.0x]\n", g, g, g, g);
	//ft_printf("Mine: [% x]  [% 5x]  [% 05x]  [% 0.0x]\n", g, g, g, g);
}



void check_hex_left(void)
{
	int g = 0x4B9C;
	printf(MAG"\n___HEX_LEFT__%x_________________________________________________________\n\n"RESET, g);
	//print_line();  //1
	printf(BLU"           %%-X    %%-5X \n"RESET);
	   printf("Orig:   %% [%-X]  [%-5X] \n", g, g);
	ft_printf("Mine:   %% [%-X]  [%-5X] \n", g, g);
	   
	

	//print_line();  //3
	printf(BLU"\n      %%-.0X      %%-.X\n"HWHT);
	   printf("Orig: [%-.0X]   [%-.X]\n", g, g);
	ft_printf("Mine: [%-.0X]   [%-.X]\n", g, g);
	   
	//print_line();  //4
	printf(BLU"\n       %%-1.1X  %%-.1X    %%-.1X    %%-.X     %%-3.5X\n"HWHT);
	   printf("Orig: [%-1.1X]   [%-.1X]   [%-1.X]   [%-.X]   [%-3.5X]\n", g,g,g,g,g);
	ft_printf("Mine: [%-1.1X]   [%-.1X]   [%-1.X]   [%-.X]   [%-3.5X]\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"\nTENS   %%-10X          %%-10.X         %%-.10X         %%-10.10X\n"HWHT);
	   printf("Orig: [%-10X]  [%-10.X]  [%-.10X]  [%-10.10X]\n", g,g,g,g);
	ft_printf("Mine: [%-10X]  [%-10.X]  [%-.10X]  [%-10.10X]\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"\n       %%-4.4X  %%-.4X   %%-4.X   %%-4.1X  %%-1.4X  %%-5.3X\n"HWHT);
	printf("Orig: [%-4.4X]  [%-.4X]  [%-4.X]  [%-4.1X]  [%-1.4X]  [%-5.3X]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%-4.4X]  [%-.4X]  [%-4.X]  [%-4.1X]  [%-1.4X]  [%-5.3X]\n", g, g, g, g, g, g);

	/////////////////////////////////////
	//printf(BLU"\n___UNDEFINED_BEHAVIOUR_%X__________________________________\n", g);
	//print_line();  //1
	//printf(BLU"    %%-05X     %%-0.0X    %%-0.X\n\n"RESET);
	//   printf("Orig:   [%-05X]  [%-0.0X]  [%-0.X] \n", g, g, g, g);
	//ft_printf("Mine:   [%-05X]  [%-0.0X]  [%-0.X] \n", g, g, g, g);

	//print_line();  // 2 SPACE FLAG
	//printf(BLU"SPACE      %%- X    %%-5 X     %%- 05X    %%- 0.0X   %%- 0.4X\n\n"RESET);
	   //printf("Orig:   %% [%- X]  [%- 5X]  [%- 05X]  [%- 0.0X]  [%- 0.4X]\n", g,g,g,g,g);
	//ft_printf("Mine:   %% [%- X]  [%- 5X]  [%- 05X]  [%- 0.0X]  [%- 0.4X]\n", g,g,g,g,g);

}





/*
void check_ints_neg(int g)
{
	printf(BLU"\n__INTS_RIGHT_NEGATIVE_%x__________________________________________", g);
	//print_line();  //1
	printf(BLU"           %%x     %%5x      %%05x      %%0.0x\n"RESET);
	printf("Orig:   %% [%x]  [%5x]  [%05x]  [%0.0x]\n", g, g, g, g);
	ft_printf("Mine:   %% [%x]  [%5x]  [%05x]  [%0.0x]\n", g, g, g, g);
	   

	//print_line();  //2
	printf(BLU"       %%0.0x   %%.0x    %%0.x    %%.x\n"HWHT);
	printf("Orig: [%0.0x]   [%.0x]   [%0.x]   [%.x]\n", g, g, g, g);
	ft_printf("Mine: [%0.0x]   [%.0x]   [%0.x]   [%.x]\n", g, g, g, g);
	   
	//print_line();  //3
	printf(BLU"       %%1.1x   %%.1x    %%.1x    %%.x\n"HWHT);
	printf("Orig: [%1.1x]   [%.1x]   [%1.x]   [%.x]\n", g, g, g, g);
	ft_printf("Mine: [%1.1x]   [%.1x]   [%1.x]   [%.x]\n", g, g, g, g);
	   
	//print_line();  //4
	printf(BLU"       %%4.4x   %%.4x    %%4.x   %%4.1x  %%1.4x   %%5.3x\n"HWHT);
	printf("Orig: [%4.4x] [%.4x] [%4.x] [%4.1x] [%1.4x] [%5.3x]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%4.4x] [%.4x] [%4.x] [%4.1x] [%1.4x] [%5.3x]\n", g, g, g, g, g, g);
	
	//print_line();  //5
	printf(BLU"TENS   %%10x          %%10.x         %%.10x         %%10.10x\n"HWHT);
	   printf("Orig: [%10x]  [%10.x]  [%.10x]  [%10.10x]\n", g,g,g,g);
	ft_printf("Mine: [%10x]  [%10.x]  [%.10x]  [%10.10x]\n", g,g,g,g);

	//print_line();  //3
	printf(BLU"SAME LEN  %%2x   \n"HWHT);
	   printf("Orig: [%0.2x] \n", g);
	ft_printf("Mine: [%0.2x] \n", g);

	//print_line();  //5
	printf(BLU"LEFT   %%-.0x  %%-x    %%-6x       %%-6.0x     %%-6.4x     %%-4.6\n"HWHT);
	printf("Orig: [%-.0x]   [%-x]   [%-6x]   [%-6.0x]   [%-6.4x]   [%-4.6x]\n", g,g,g,g,g,g);
	ft_printf("Mine: [%-.0x]   [%-x]   [%-6x]   [%-6.0x]   [%-6.4x]   [%-4.6x]\n", g,g,g,g,g,g);
}
*/


/*
void check_ints_left_neg(int g)
{
	printf(BLU"\n___INTS_LEFT_NEGATIVE__%x__________________________________________", g);
	//print_line();  //1
	printf(BLU"           %%-x    %%-5x      %%-05x     %%-0.0x\n"RESET);
	   printf("Orig:   %% [%-x]  [%-5x]  [%-05x]  [%-0.0x]\n", g, g, g, g);
	ft_printf("Mine:   %% [%-x]  [%-5x]  [%-05x]  [%-0.0x]\n", g, g, g, g);
	   
	//print_line();  // 2 SPACE FLAG
	printf(BLU"SPACE      %%- x    %%-5 x     %%- 05x    %%- 0.0x   %%- 0.4x\n"RESET);
	   printf("Orig:   %% [%- x]  [%- 5x]  [%- 05x]  [%- 0.0x]  [%- 0.4x]\n", g,g,g,g,g);
	ft_printf("Mine:   %% [%- x]  [%- 5x]  [%- 05x]  [%- 0.0x]  [%- 0.4x]\n", g,g,g,g,g);

	//print_line();  //3
	printf(BLU"       %%-0.0x  %%-.0x   %%-0.x   %%-.x\n"HWHT);
	printf("Orig: [%-0.0x]   [%-.0x]   [%-0.x]   [%-.x]\n", g, g, g, g);
	ft_printf("Mine: [%-0.0x]   [%-.0x]   [%-0.x]   [%-.x]\n", g, g, g, g);
	   
	//print_line();  //4
	printf(BLU"       %%-1.1x  %%-.1x   %%-.1x   %%-.x    %%-3.5x\n"HWHT);
	   printf("Orig: [%-1.1x]   [%-.1x]   [%-1.x]   [%-.x]   [%-3.5x]\n", g,g,g,g,g);
	ft_printf("Mine: [%-1.1x]   [%-.1x]   [%-1.x]   [%-.x]   [%-3.5x]\n", g,g,g,g,g);

	//print_line();  //5
	printf(BLU"TENS   %%-10x          %%-10.x         %%-.10x         %%-10.10x\n"HWHT);
	   printf("Orig: [%-10x]  [%-10.x]  [%-.10x]  [%-10.10x]\n", g,g,g,g);
	ft_printf("Mine: [%-10x]  [%-10.x]  [%-.10x]  [%-10.10x]\n", g,g,g,g);

	//print_line();  //6
	printf(BLU"       %%-4.4x  %%-.4x   %%-4.x   %%-4.1x  %%-1.4x  %%-5.3x\n"HWHT);
	printf("Orig: [%-4.4x]  [%-.4x]  [%-4.x]  [%-4.1x]  [%-1.4x]  [%-5.3x]\n", g, g, g, g, g, g);
	ft_printf("Mine: [%-4.4x]  [%-.4x]  [%-4.x]  [%-4.1x]  [%-1.4x]  [%-5.3x]\n", g, g, g, g, g, g);
}
*/



int main(void)
{

	check_hex_all();

	return (0);
}
