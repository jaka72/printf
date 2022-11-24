
#include "ft_printf.c"
#include <limits.h>
#include <stdio.h>

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


void test_some_stuff(void)
{

	ret_orig =    printf("\t\n\r\v\f\n");
	ret_mine = ft_printf("\t\n\r\v\f\n");

    ret_orig =    printf("%%");
    ret_mine = ft_printf("%%");

	ret_orig =    printf("%5%");
	ret_mine = ft_printf("%5%");

	ret_orig =    printf("%-5%");
	ret_mine = ft_printf("%-5%");

	ret_orig =    printf("%05%");
	ret_mine = ft_printf("%05%");

	ret_orig =    printf("%-05%");
	ret_mine = ft_printf("%-05%");
}




// void test_pft_nocrash(void)
// {
// 	static int ncm_p = 5;
// //	ASSERT_PRINTF("%");
// //	ASSERT_PRINTF("%5");
// //	ASSERT_PRINTF("%05");
// //	ASSERT_PRINTF("%-05");
// //	ASSERT_PRINTF("%-5");

// //	ASSERT_PRINTF("%.4p", &ncm_p);
// 	//ASSERT_PRINTF("%.p", &ncm_p);
// //	ASSERT_PRINTF("%05p", &ncm_p);
// //	ASSERT_PRINTF("%0p", &ncm_p);
// 	ASSERT_PRINTF("%-p", &ncm_p);

// #ifdef FT_PRINTF_TEST_BONUS
// //	ASSERT_PRINTF("%#p", &ncm_p);
// //	ASSERT_PRINTF("%+p", &ncm_p);
// //	ASSERT_PRINTF("%+p", &ncm_p);
// //	ASSERT_PRINTF("% p", &ncm_p);
// //	ASSERT_PRINTF("% p", &ncm_p);
// //	ASSERT_PRINTF("%hhp", &ncm_p);
// //	ASSERT_PRINTF("%hp", &ncm_p);
// //	ASSERT_PRINTF("%lp", &ncm_p);
// //	ASSERT_PRINTF("%llp", &ncm_p);
// //	ASSERT_PRINTF("%Lp", &ncm_p);
// 	ASSERT_PRINTF("%-p", &ncm_p);
// //////	ASSERT_PRINTF("%Ld", 42);
// //	ASSERT_PRINTF("%#d", 42);
// //	ASSERT_PRINTF("%hhhd", 42);
// //	ASSERT_PRINTF("%hhhhd", 42);
// //	ASSERT_PRINTF("%hhld", 42);
// //	ASSERT_PRINTF("%hhlld", 42);
// //	ASSERT_PRINTF("%llhd", 42);
// //	ASSERT_PRINTF("%llld", 42);
// //////	ASSERT_PRINTF("%Li", 42);
// //	ASSERT_PRINTF("%#i", 42);
// //	ASSERT_PRINTF("%hhhi", 42);
// 	ASSERT_PRINTF("%-i", 42);
// //	ASSERT_PRINTF("%+o", 42);
// //	ASSERT_PRINTF("% o", 42);
// //////	ASSERT_PRINTF("%Lo", 42);
// //	ASSERT_PRINTF("%hhho", 42);
// //	ASSERT_PRINTF("%hhhho", 42);
// //	ASSERT_PRINTF("%hhlo", 42);
// //	ASSERT_PRINTF("%hhllo", 42);
// //	ASSERT_PRINTF("%llho", 42);
// //	ASSERT_PRINTF("%lllo", 42);
// //////	ASSERT_PRINTF("%Lu", 42);
// //	ASSERT_PRINTF("%#u", 42);
// //	ASSERT_PRINTF("%+u", 42);
// //	ASSERT_PRINTF("% u", 42);
// //	ASSERT_PRINTF("%hhhu", 42);
// //	ASSERT_PRINTF("%hhhhu", 42);
// //	ASSERT_PRINTF("%hhlu", 42);
// //	ASSERT_PRINTF("%hhllu", 42);
// //	ASSERT_PRINTF("%llhu", 42);
// //	ASSERT_PRINTF("%lllu", 42);
// 	ASSERT_PRINTF("%-u", 42);
// //////	ASSERT_PRINTF("%Lx", 42);
// //	ASSERT_PRINTF("%+x", 42);
// //	ASSERT_PRINTF("% x", 42);
// //	ASSERT_PRINTF("%hhhx", 42);
// //	ASSERT_PRINTF("%hhhhx", 42);
// //	ASSERT_PRINTF("%hhlx", 42);
// //	ASSERT_PRINTF("%hhllx", 42);
// //	ASSERT_PRINTF("%llhx", 42);
// //	ASSERT_PRINTF("%lllx", 42);
// //////	ASSERT_PRINTF("%LX", 42);
// //	ASSERT_PRINTF("%+X", 42);
// //	ASSERT_PRINTF("% X", 42);
// //	ASSERT_PRINTF("%hhhX", 42);
// //	ASSERT_PRINTF("%llhX", 42);
// //	ASSERT_PRINTF("%hhf", 42.5);
// //	ASSERT_PRINTF("%hf", 42.5);
// //	ASSERT_PRINTF("%llf", 42.5);
// //	ASSERT_PRINTF("%lllf", 42.5);
// //	ASSERT_PRINTF("%llllf", 42.5);
// //	ASSERT_PRINTF("%LLf", 42.5);
// //	ASSERT_PRINTF("%Llf", 42.5);
// //	ASSERT_PRINTF("%lLf", 42.5);
// 	ASSERT_PRINTF("%-f", 42.5);
// //	ASSERT_PRINTF("%+u", 5);
// //	ASSERT_PRINTF("%+u", 5);
// ////	ASSERT_PRINTF("%+u", 4294967295);
// //	ASSERT_PRINTF("%+5u", 35);
// //	ASSERT_PRINTF("%+7u", 0);
// ////	ASSERT_PRINTF("%+24u", 4294967295);
// //	ASSERT_PRINTF("%+.7u", 234);
// //	ASSERT_PRINTF("%+.3u", 3723);
// //	ASSERT_PRINTF("%+05u", 432);
// //	ASSERT_PRINTF("%+04u", 0);
// //	ASSERT_PRINTF("%+8.5u", 34);
// //	ASSERT_PRINTF("%+8.5u", 0);
// //	ASSERT_PRINTF("%+8.3u", 8375);
// //	ASSERT_PRINTF("%+3.7u", 3267);
// //	ASSERT_PRINTF("%+3.3u", 6983);
// //	ASSERT_PRINTF("%+-8.5u", 34);
// //	ASSERT_PRINTF("%+-8.5u", 0);
// //	ASSERT_PRINTF("%+-8.3u", 8375);
// //	ASSERT_PRINTF("%+-3.7u", 3267);
// //	ASSERT_PRINTF("%+-3.3u", 6983);
// //	ASSERT_PRINTF("%0+8.5u", 34);
// //	ASSERT_PRINTF("%0+8.5u", 0);
// //	ASSERT_PRINTF("%0+8.3u", 8375);
// //	ASSERT_PRINTF("%0+3.7u", 3267);
// //	ASSERT_PRINTF("%0+3.3u", 6983);
// ////	ASSERT_PRINTF("%0+-8.5u", 34);
// ////	ASSERT_PRINTF("%0+-8.5u", 0);
// ////	ASSERT_PRINTF("%0+-8.3u", 8375);
// ////	ASSERT_PRINTF("%0+-3.7u", 3267);
// ////	ASSERT_PRINTF("%0+-3.3u", 6983);
// //	ASSERT_PRINTF("%+lu", 22337203685477);
// 	ASSERT_PRINTF("%++d", 42);
// 	ASSERT_PRINTF("%  d", 42);
// //	ASSERT_PRINTF("% + d", 42);
// 	ASSERT_PRINTF("%--5d", 42);
// 	ASSERT_PRINTF("%-+-5d", 42);
// 	ASSERT_PRINTF("%##x", 42);
// //	ASSERT_PRINTF("%#++#-5x", 42);
// //	ASSERT_PRINTF("%.4c", 'a');
// //	ASSERT_PRINTF("%#c", 'a');
// //	ASSERT_PRINTF("%+c", 'a');
// //	ASSERT_PRINTF("%+c", -42);
// //	ASSERT_PRINTF("%hhc", 'a');
// //	ASSERT_PRINTF("%hc", 'a');
// 	ASSERT_PRINTF("%lc", L'a');
// //	ASSERT_PRINTF("%llc", L'a');
// //	ASSERT_PRINTF("%Lc", L'a');
// //	ASSERT_PRINTF("%#s", "hello");
// //	ASSERT_PRINTF("%+s", "hello");
// //	ASSERT_PRINTF("% s", "hello");
// //	ASSERT_PRINTF("%hhs", "hello");
// //	ASSERT_PRINTF("%hs", "hello");
// 	ASSERT_PRINTF("%ls", L"hello");
// ////	ASSERT_PRINTF("%lls", L"hello");
// ////	ASSERT_PRINTF("%Ls", L"hello");
// //	ASSERT_PRINTF("%1$");
// //	ASSERT_PRINTF("% ");
// //	ASSERT_PRINTF("%#");
// //	ASSERT_PRINTF("%+");
// //	ASSERT_PRINTF("%hh");
// //	ASSERT_PRINTF("%h");
// //	ASSERT_PRINTF("%ll");
// //	ASSERT_PRINTF("%l");
// //	ASSERT_PRINTF("%L");
// //	ASSERT_PRINTF("%f");
// //	ASSERT_PRINTF("%o");
// 	ASSERT_PRINTF("%1$s", NULL);
// //	ASSERT_PRINTF("% s", NULL);
// //	ASSERT_PRINTF("%#s", NULL);
// //	ASSERT_PRINTF("%+s", NULL);
// //	ASSERT_PRINTF("%hhs", NULL);
// //	ASSERT_PRINTF("%hs", NULL);
// //	ASSERT_PRINTF("%lls", NULL);
// //	ASSERT_PRINTF("%ls", NULL);
// //	ASSERT_PRINTF("%Ls", NULL);
// //	ASSERT_PRINTF("%b", NULL);
// //	ASSERT_PRINTF("%f", NULL);
// //	ASSERT_PRINTF("%o", NULL);
// #endif
// 	ASSERT_PRINTF("%-x", 42);

// ////	ASSERT_PRINTF("%-021s", "abc");
// ////	ASSERT_PRINTF("%-05s", "goes over");
// //	ASSERT_PRINTF("%04.3s%-7.4s", "hello", "world");
// //	ASSERT_PRINTF("%021s", NULL);
// //	ASSERT_PRINTF("%02s", NULL);
// ////	ASSERT_PRINTF("%-021s", NULL);
// ////	ASSERT_PRINTF("%-03s", NULL);
// //	ASSERT_PRINTF("%05c", '\0');
// ////	ASSERT_PRINTF("%-05c", '\0');
// 	ASSERT_PRINTF("%.c", 'a');
// //	ASSERT_PRINTF("%05c", 'a');
// //	ASSERT_PRINTF("%0c", 'a');
// //	ASSERT_PRINTF("% c", 'a');
// //	ASSERT_PRINTF("% c", -42);
// 	ASSERT_PRINTF("%-c", 'a');
// //	ASSERT_PRINTF("%05s", "hello");
// //	ASSERT_PRINTF("%0s", "hello");
// 	ASSERT_PRINTF("%-s", "hello");

// //	ASSERT_PRINTF("%0");
// //	ASSERT_PRINTF("%-");
// //	ASSERT_PRINTF("%23");
// //	ASSERT_PRINTF("%.");
// //	ASSERT_PRINTF("%p");
// //	ASSERT_PRINTF("%d");
// //	ASSERT_PRINTF("%u");
// //	ASSERT_PRINTF("%x");
// //	ASSERT_PRINTF("%X");
// //	ASSERT_PRINTF("%c");
// //	ASSERT_PRINTF("%0s", NULL);
// 	ASSERT_PRINTF("%-s", NULL);
// 	ASSERT_PRINTF("%23s", NULL);
// 	ASSERT_PRINTF("%.s", NULL);
// 	ASSERT_PRINTF("%p", NULL);
// //	ASSERT_PRINTF("%d", NULL);
// //	ASSERT_PRINTF("%u", NULL);
// //	ASSERT_PRINTF("%x", NULL);
// //	ASSERT_PRINTF("%X", NULL);
// 	ASSERT_PRINTF("%s", NULL);
// //	ASSERT_PRINTF("%c", NULL);
// }







// void test_pft_string(void)
// {
// 	ASSERT_PRINTF("hello, %s.", "gavin");
// 	ASSERT_PRINTF("%s", "testing testing");
// 	ASSERT_PRINTF("%s%s", "hello", "world");
// 	ASSERT_PRINTF("..%s stuff %s", "a", "b");
// 	ASSERT_PRINTF("this %s is empty", "");
// 	ASSERT_PRINTF("this %s is %s", "hello", "");
// 	ASSERT_PRINTF("this %s is %s", "", "hello");
// 	ASSERT_PRINTF("%s%s%s", "1", "2", "3's a charm");

// 	ASSERT_PRINTF("%32s", "abc");
// 	ASSERT_PRINTF("%16s", "nark nark");
// 	ASSERT_PRINTF("%5s", "goes over");
// 	ASSERT_PRINTF("%-32s", "abc");
// 	ASSERT_PRINTF("%-16s", "nark nark");
// 	ASSERT_PRINTF("%-5s", "goes over");
// 	ASSERT_PRINTF("%.7s", "hello");
// 	ASSERT_PRINTF("%.3s", "hello");
// 	ASSERT_PRINTF("%.s", "hello");
// 	ASSERT_PRINTF("%.0s", "hello");
// 	ASSERT_PRINTF("%.3s%.2s", "holla", "bitch");
// 	ASSERT_PRINTF("%.2s%.7s", "hello", "world");
// 	ASSERT_PRINTF("%.7s%.2s", "hello", "world");
// 	ASSERT_PRINTF("%.5s%7s", "yo", "boi");
// 	ASSERT_PRINTF("%7.5s", "yolo");
// 	ASSERT_PRINTF("%7.5s", "bombastic");
// 	ASSERT_PRINTF("%-7.5s", "yolo");
// 	ASSERT_PRINTF("%-7.5s", "tubular");
// 	ASSERT_PRINTF("%7.7s%7.7s", "hello", "world");
// 	ASSERT_PRINTF("%3.7s%7.7s", "hello", "world");
// 	ASSERT_PRINTF("%7.7s%3.7s", "hello", "world");
// 	ASSERT_PRINTF("%3.7s%3.7s", "hello", "world");
// 	ASSERT_PRINTF("%7.3s%7.7s", "hello", "world");
// 	ASSERT_PRINTF("%3.3s%7.7s", "hello", "world");
// 	ASSERT_PRINTF("%7.3s%3.7s", "hello", "world");
// 	ASSERT_PRINTF("%3.3s%3.7s", "hello", "world");
// 	ASSERT_PRINTF("%7.7s%7.3s", "hello", "world");
// 	ASSERT_PRINTF("%3.7s%7.3s", "hello", "world");
// 	ASSERT_PRINTF("%7.7s%3.3s", "hello", "world");
// 	ASSERT_PRINTF("%3.7s%3.3s", "hello", "world");
// 	ASSERT_PRINTF("%7.3s%7.3s", "hello", "world");
// 	ASSERT_PRINTF("%3.3s%7.3s", "hello", "world");
// 	ASSERT_PRINTF("%7.3s%3.3s", "hello", "world");
// 	ASSERT_PRINTF("%3.3s%3.3s", "hello", "world");
// 	ASSERT_PRINTF("%3s%3s", "hello", "world");
// 	ASSERT_PRINTF("%-7s%5s", "hello", "world");
// 	ASSERT_PRINTF("%7s%-5s", "hello", "world");
// 	ASSERT_PRINTF("hello, %s.", NULL);
// 	ASSERT_PRINTF("%s", NULL);
// 	ASSERT_PRINTF("%32s", NULL);
// 	ASSERT_PRINTF("%2s", NULL);
// 	ASSERT_PRINTF("%-32s", NULL);
// 	ASSERT_PRINTF("%-16s", NULL);
// 	ASSERT_PRINTF("%-3s", NULL);
// 	ASSERT_PRINTF("%.9s", "NULL");
// 	ASSERT_PRINTF("%.3s", "NULL");
// 	ASSERT_PRINTF("%.s", "NULL");
// 	ASSERT_PRINTF("%.0s", "NULL");

// 	static char *s_hidden = "hi low\0don't print me lol\0";
// 	ASSERT_PRINTF("%s", s_hidden);
// 	ASSERT_PRINTF("%3s", s_hidden);
// 	ASSERT_PRINTF("%9s", s_hidden);
// 	ASSERT_PRINTF("%.s", s_hidden);
// 	ASSERT_PRINTF("%.9s", s_hidden);
// 	ASSERT_PRINTF("%.03s", s_hidden);
// 	ASSERT_PRINTF("%.09s", s_hidden);
// 	ASSERT_PRINTF("%.03s", NULL);
// 	ASSERT_PRINTF("%.09s", NULL);
// 	ASSERT_PRINTF("%.00s", "\0");
// 	ASSERT_PRINTF("%.01s", "\0");
// 	ASSERT_PRINTF("%.03s", "\0");
// 	ASSERT_PRINTF("%.09s", "\0");
// 	ASSERT_PRINTF("%3.s", s_hidden);
// 	ASSERT_PRINTF("%10.s", s_hidden);
// 	ASSERT_PRINTF("%3.s", NULL);
// 	ASSERT_PRINTF("%10.s", NULL);
// 	ASSERT_PRINTF("%1.s", "\0");
// 	ASSERT_PRINTF("%2.s", "\0");
// 	ASSERT_PRINTF("%9.s", "\0");
// 	ASSERT_PRINTF("%-3.s", s_hidden);
// 	ASSERT_PRINTF("%-8.s", s_hidden);
// 	ASSERT_PRINTF("%-3.s", NULL);
// 	ASSERT_PRINTF("%-8.s", NULL);
// 	ASSERT_PRINTF("%-1.s", "\0");
// 	ASSERT_PRINTF("%-2.s", "\0");
// 	ASSERT_PRINTF("%-6.s", "\0");
// 	ASSERT_PRINTF("%3.1s", s_hidden);
// 	ASSERT_PRINTF("%10.1s", s_hidden);
// 	ASSERT_PRINTF("%3.1s", NULL);
// 	ASSERT_PRINTF("%9.1s", NULL);
// 	ASSERT_PRINTF("%-3.1s", s_hidden);
// 	ASSERT_PRINTF("%-10.1s", s_hidden);
// 	ASSERT_PRINTF("%-3.1s", NULL);
// 	ASSERT_PRINTF("%-9.1s", NULL);
// 	ASSERT_PRINTF("%-3.1s", "\0");
// 	ASSERT_PRINTF("%-6.1s", "\0");
// 	ASSERT_PRINTF("%3.6s", s_hidden);
// 	ASSERT_PRINTF("%20.6s", s_hidden);
// 	ASSERT_PRINTF("%3.6s", NULL);
// 	ASSERT_PRINTF("%20.6s", NULL);
// 	ASSERT_PRINTF("%3.6s", "\0");
// 	ASSERT_PRINTF("%6.6s", "\0");
// 	ASSERT_PRINTF("%-3.6s", s_hidden);
// 	ASSERT_PRINTF("%-20.6s", s_hidden);
// 	ASSERT_PRINTF("%-3.8s", s_hidden);
// 	ASSERT_PRINTF("%-10.8s", s_hidden);
// 	ASSERT_PRINTF("%-3.8s", NULL);
// 	ASSERT_PRINTF("%-10.8s", NULL);
// 	ASSERT_PRINTF("%-.00s", s_hidden);
// 	ASSERT_PRINTF("%-.09s", s_hidden);
// #ifdef FT_PRINTF_TEST_BONUS
// //////////	ASSERT_PRINTF("%+- 06.06s", s_hidden);
// //////////	ASSERT_PRINTF("% 0+-6.06s", s_hidden);
// //////////	ASSERT_PRINTF("%0 +-6.06s", s_hidden);
// //////////	ASSERT_PRINTF("%+-0 6.06s", s_hidden);
// //////////	ASSERT_PRINTF("%-+ 06.06s", s_hidden);
// //////////	ASSERT_PRINTF("% -+06.06s", s_hidden);
// //////////	ASSERT_PRINTF("%+- 07.06s", s_hidden);
// //////////	ASSERT_PRINTF("% 0+-8.06s", s_hidden);
// //////////	ASSERT_PRINTF("%0 +-9.06s", s_hidden);
// //////////	ASSERT_PRINTF("%+-0 10.06s", s_hidden);
// //////////	ASSERT_PRINTF("%-+ 011.06s", s_hidden);
// //////////	ASSERT_PRINTF("% -+012.06s", s_hidden);
// //////////	ASSERT_PRINTF("%+- 06.04s", s_hidden);
// //////////	ASSERT_PRINTF("% 0+-6.04s", s_hidden);
// //////////	ASSERT_PRINTF("%0 +-6.04s", s_hidden);
// //////////	ASSERT_PRINTF("%+-0 6.04s", s_hidden);
// //////////	ASSERT_PRINTF("%-+ 06.04s", s_hidden);
// //////////	ASSERT_PRINTF("% 0-+6.04s", s_hidden);
// //////////	ASSERT_PRINTF("%+- 06.09s", s_hidden);
// //////////	ASSERT_PRINTF("% 0+-6.09s", s_hidden);
// //////////	ASSERT_PRINTF("%0 +-6.09s", s_hidden);
// //////////	ASSERT_PRINTF("%+-0 6.09s", s_hidden);
// //////////	ASSERT_PRINTF("%-+ 06.09s", s_hidden);
// //////////	ASSERT_PRINTF("% 0-+6.09s", s_hidden);
// ////	ASSERT_PRINTF("%+03s", s_hidden);
// ////	ASSERT_PRINTF("%+09s", s_hidden);
// //////	ASSERT_PRINTF("%+ 3s", s_hidden);
// //////	ASSERT_PRINTF("%+ 6s", s_hidden);
// #endif
// //	ASSERT_PRINTF("%00s", s_hidden);
// //	ASSERT_PRINTF("%000s", s_hidden);
// //	ASSERT_PRINTF("%0000s", s_hidden);
// ////	ASSERT_PRINTF("%-00s", s_hidden);
// ////	ASSERT_PRINTF("%0-0s", s_hidden);
// ////	ASSERT_PRINTF("%00-s", s_hidden);
// //	ASSERT_PRINTF("%03s", s_hidden);
// //	ASSERT_PRINTF("%09s", s_hidden);
// ////	ASSERT_PRINTF("%-03s", s_hidden);
// ////	ASSERT_PRINTF("%-09s", s_hidden);
// }

// void test_pft_int_i(void)
// {
// 	ASSERT_PRINTF("this %i number", 17);
// 	ASSERT_PRINTF("this %i number", -267);
// 	ASSERT_PRINTF("this %i number", 0);
// 	ASSERT_PRINTF("%i", 3);
// 	ASSERT_PRINTF("%i", -1);
// 	ASSERT_PRINTF("%i", 0);
// 	ASSERT_PRINTF("this %d number", 17);
// 	ASSERT_PRINTF("this %d number", -267);
// 	ASSERT_PRINTF("this %d number", 0);
// 	ASSERT_PRINTF("%i",  2147483647);
// 	ASSERT_PRINTF("%i", (int)(-2147483678));
// #ifdef FT_PRINTF_TEST_BONUS
// 	static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
// 	static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
// 	static long		lmin	= -9223372036854775807;
// 	static long long llmax = 9223372036854775807;
// 	static long long	llmin = -9223372036854775807ll;
// 	static long		l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
// 	static char 		ch_pos_1 = 100, ch_neg_1 = -87;
// 	static int			i_pos_1 = 878023;
// 	static long		lmax	= 9223372036854775807;
// 	ASSERT_PRINTF("%0+8.5i", 34);
// 	ASSERT_PRINTF("%0+10.5i", -216);
// 	ASSERT_PRINTF("%0+8.5i", 0);
// 	ASSERT_PRINTF("%0+8.3i", 8375);
// 	ASSERT_PRINTF("%0+8.3i", -8473);
// 	ASSERT_PRINTF("%0+3.7i", 3267);
// 	ASSERT_PRINTF("%0+3.7i", -2375);
// 	ASSERT_PRINTF("%0+3.3i", 6983);
// 	ASSERT_PRINTF("%0+3.3i", -8462);
// //	ASSERT_PRINTF("%0+-8.5i", 34);
// //	ASSERT_PRINTF("%0+-10.5i", -216);
// //	ASSERT_PRINTF("%0+-8.5i", 0);
// //	ASSERT_PRINTF("%0+-8.3i", 8375);
// //	ASSERT_PRINTF("%0+-8.3i", -8473);
// //	ASSERT_PRINTF("%0+-3.7i", 3267);
// //	ASSERT_PRINTF("%0+-3.7i", -2375);
// //	ASSERT_PRINTF("%0+-3.3i", 6983);
// //	ASSERT_PRINTF("%0+-3.3i", -8462);
// 	ASSERT_PRINTF("%+i", 5);
// 	ASSERT_PRINTF("%+i", -7);
// 	ASSERT_PRINTF("%+i", 2147483647);
// 	ASSERT_PRINTF("%+5i", 35);
// 	ASSERT_PRINTF("%+7i", 0);
// 	ASSERT_PRINTF("%+24i", 2147483647);
// 	ASSERT_PRINTF("%+.7i", 234);
// 	ASSERT_PRINTF("%+.7i", -446);
// 	ASSERT_PRINTF("%+.3i", 3723);
// 	ASSERT_PRINTF("%+05i", 432);
// 	ASSERT_PRINTF("%+04i", 0);
// 	ASSERT_PRINTF("%+8.5i", 34);
// 	ASSERT_PRINTF("%+10.5i", -216);
// 	ASSERT_PRINTF("%+8.5i", 0);
// 	ASSERT_PRINTF("%+8.3i", 8375);
// 	ASSERT_PRINTF("%+8.3i", -8473);
// 	ASSERT_PRINTF("%+3.7i", 3267);
// 	ASSERT_PRINTF("%+3.7i", -2375);
// 	ASSERT_PRINTF("%+3.3i", 6983);
// 	ASSERT_PRINTF("%+3.3i", -8462);
// 	ASSERT_PRINTF("%+-8.5i", 34);
// 	ASSERT_PRINTF("%+-10.5i", -216);
// 	ASSERT_PRINTF("%+-8.5i", 0);
// 	ASSERT_PRINTF("%+-8.3i", 8375);
// 	ASSERT_PRINTF("%+-8.3i", -8473);
// 	ASSERT_PRINTF("%+-3.7i", 3267);
// 	ASSERT_PRINTF("%+-3.7i", -2375);
// 	ASSERT_PRINTF("%+-3.3i", 6983);
// 	ASSERT_PRINTF("%+-3.3i", -8462);
// 	ASSERT_PRINTF("%hhi", (char)45);
// 	ASSERT_PRINTF("%hhi", (char)-45);
// 	ASSERT_PRINTF("%hi", (short)385);
// 	ASSERT_PRINTF("%hi", (short)-385);
// 	ASSERT_PRINTF("%li", (long)32);
// 	ASSERT_PRINTF("%li", (long)-32);
// 	ASSERT_PRINTF("%lli", (long long)43);
// 	ASSERT_PRINTF("%lli", (long long)-43);
// 	ASSERT_PRINTF("%hhi", ch_pos_1);
// 	ASSERT_PRINTF("%hhi", ch_neg_1);
// 	ASSERT_PRINTF("%hi", sh_pos_1);
// 	ASSERT_PRINTF("%hi", sh_neg_1);
// 	ASSERT_PRINTF("%li", l_pos_1);
// 	ASSERT_PRINTF("%li", lmax);
// 	ASSERT_PRINTF("%lli", llmax);
// 	ASSERT_PRINTF("%li", l_neg_1);
// 	ASSERT_PRINTF("%lli", ll_pos_1);
// 	ASSERT_PRINTF("%lli", ll_neg_1);
// 	ASSERT_PRINTF("%li", 22337203685477);
// 	ASSERT_PRINTF("%li", -22337203685477);
// 	ASSERT_PRINTF("%lli", 522337203685470ll);
// 	ASSERT_PRINTF("%lli", -522337203685470ll);
// 	ASSERT_PRINTF("%lli", 9223372036854775807ll);
// 	ASSERT_PRINTF("%lli", llmin);
// 	ASSERT_PRINTF("%li", 9223372036854775807l);
// 	ASSERT_PRINTF("%li", lmin);
// 	ASSERT_PRINTF("%hi", (short)32767);
// 	ASSERT_PRINTF("%hi", (short)(-32768));
// 	ASSERT_PRINTF("%hhi", (char)127);
// 	ASSERT_PRINTF("%hhi", (char)(-128));
// 	ASSERT_PRINTF("%037li", 22337203685477l);
// 	ASSERT_PRINTF("%.37li", -22337203685477l);
// 	ASSERT_PRINTF("%37lli", 522337203685470ll);
// 	ASSERT_PRINTF("%-37lli", -522337203685470ll);
// 	ASSERT_PRINTF("%+li", 22337203685477l);
// 	ASSERT_PRINTF("[%i] [%i]", i_pos_1, i_pos_1);
// 	ASSERT_PRINTF("[%i] [%li]", i_pos_1, l_pos_1);
// 	ASSERT_PRINTF("[%i] [%lli]", i_pos_1, ll_pos_1);
// 	ASSERT_PRINTF("[%i] [%hi]", i_pos_1, sh_pos_1);
// 	ASSERT_PRINTF("[%i] [%hhi]", i_pos_1, ch_pos_1);
// 	ASSERT_PRINTF("%lli%hhi%lli", ll_pos_1, ch_neg_1, ll_neg_1);
// 	ASSERT_PRINTF("%hi%li%hhi", sh_pos_1, l_neg_1, ch_neg_1);
// 	ASSERT_PRINTF("%li%hhi%hi", l_neg_1, ch_pos_1, sh_pos_1);
// 	ASSERT_PRINTF("%i%lli%hhi", i_pos_1, ll_neg_1, ch_pos_1);
// 	ASSERT_PRINTF("%lli%i%li", ll_neg_1, i_pos_1, l_pos_1);
// 	ASSERT_PRINTF("this % i number", 17);
// 	ASSERT_PRINTF("this % i number", -267);
// 	ASSERT_PRINTF("this % i number", 0);
// 	ASSERT_PRINTF("% i", 3);
// 	ASSERT_PRINTF("% i", -1);
// 	ASSERT_PRINTF("% i", 0);
// 	ASSERT_PRINTF("this % d number", 17);
// 	ASSERT_PRINTF("this % d number", -267);
// 	ASSERT_PRINTF("this % d number", 0);
// 	ASSERT_PRINTF("% i", 2147483647);
// 	ASSERT_PRINTF("% i", (int)(-2147483678));
// //	ASSERT_PRINTF("% +i", 5);
// //	ASSERT_PRINTF("% +i", -7);
// //	ASSERT_PRINTF("% +i", 2147483647);
// 	ASSERT_PRINTF("% 7i", 33);
// 	ASSERT_PRINTF("% 7i", -14);
// 	ASSERT_PRINTF("% 3i", 0);
// 	ASSERT_PRINTF("% 5i", 52625);
// 	ASSERT_PRINTF("% 5i", -2562);
// 	ASSERT_PRINTF("% 4i", 94827);
// 	ASSERT_PRINTF("% 4i", -2464);
// 	ASSERT_PRINTF("% -7i", 33);
// 	ASSERT_PRINTF("% -7i", -14);
// 	ASSERT_PRINTF("% -3i", 0);
// 	ASSERT_PRINTF("% -5i", 52625);
// 	ASSERT_PRINTF("% -5i", -2562);
// 	ASSERT_PRINTF("% -4i", 94827);
// 	ASSERT_PRINTF("% -4i", -2464);
// //	ASSERT_PRINTF("% +5i", 35);
// //	ASSERT_PRINTF("% +7i", 0);
// //	ASSERT_PRINTF("% +24i", 2147483647);
// 	ASSERT_PRINTF("% .5i", 2);
// 	ASSERT_PRINTF("% .6i", -3);
// 	ASSERT_PRINTF("% .3i", 0);
// 	ASSERT_PRINTF("% .4i", 5263);
// 	ASSERT_PRINTF("% .4i", -2372);
// 	ASSERT_PRINTF("% .3i", 13862);
// 	ASSERT_PRINTF("% .3i",-23646);
// //	ASSERT_PRINTF("% +.7i", 234);
// //	ASSERT_PRINTF("% +.7i", -446);
// //	ASSERT_PRINTF("% +.3i", 3723);
// 	ASSERT_PRINTF("% 05i", 43);
// 	ASSERT_PRINTF("% 07i", -54);
// 	ASSERT_PRINTF("% 03i", 0);
// 	ASSERT_PRINTF("% 03i", 634);
// 	ASSERT_PRINTF("% 04i", -532);
// 	ASSERT_PRINTF("% 04i", -4825);
// //	ASSERT_PRINTF("% +05i", 432);
// //	ASSERT_PRINTF("% +04i", 0);
// 	ASSERT_PRINTF("% 8.5i", 34);
// 	ASSERT_PRINTF("% 10.5i", -216);
// 	ASSERT_PRINTF("% 8.5i", 0);
// 	ASSERT_PRINTF("% 8.3i", 8375);
// 	ASSERT_PRINTF("% 8.3i", -8473);
// 	ASSERT_PRINTF("% 3.7i", 3267);
// 	ASSERT_PRINTF("% 3.7i", -2375);
// 	ASSERT_PRINTF("% 3.3i", 6983);
// 	ASSERT_PRINTF("% 3.3i", -8462);
// 	ASSERT_PRINTF("% -8.5i", 34);
// 	ASSERT_PRINTF("% -10.5i", -216);
// 	ASSERT_PRINTF("% -8.5i", 0);
// 	ASSERT_PRINTF("% -8.3i", 8375);
// 	ASSERT_PRINTF("% -8.3i", -8473);
// 	ASSERT_PRINTF("% -3.7i", 3267);
// 	ASSERT_PRINTF("% -3.7i", -2375);
// 	ASSERT_PRINTF("% -3.3i", 6983);
// 	ASSERT_PRINTF("% -3.3i", -8462);
// //	ASSERT_PRINTF("% +8.5i", 34);
// //	ASSERT_PRINTF("% +10.5i", -216);
// //	ASSERT_PRINTF("% +8.5i", 0);
// //	ASSERT_PRINTF("% +8.3i", 8375);
// //	ASSERT_PRINTF("% +8.3i", -8473);
// //	ASSERT_PRINTF("% +3.7i", 3267);
// //	ASSERT_PRINTF("% +3.7i", -2375);
// //	ASSERT_PRINTF("% +3.3i", 6983);
// //	ASSERT_PRINTF("% +3.3i", -8462);
// //	ASSERT_PRINTF("% +-8.5i", 34);
// //	ASSERT_PRINTF("% +-10.5i", -216);
// //	ASSERT_PRINTF("% +-8.5i", 0);
// //	ASSERT_PRINTF("% +-8.3i", 8375);
// //	ASSERT_PRINTF("% +-8.3i", -8473);
// //	ASSERT_PRINTF("% +-3.7i", 3267);
// //	ASSERT_PRINTF("% +-3.7i", -2375);
// //	ASSERT_PRINTF("% +-3.3i", 6983);
// //	ASSERT_PRINTF("% +-3.3i", -8462);
// 	ASSERT_PRINTF("% 08.5i", 34);
// 	ASSERT_PRINTF("% 010.5i", -216);
// 	ASSERT_PRINTF("% 08.5i", 0);
// 	ASSERT_PRINTF("% 08.3i", 8375);
// 	ASSERT_PRINTF("% 08.3i", -8473);
// 	ASSERT_PRINTF("% 03.7i", 3267);
// 	ASSERT_PRINTF("% 03.7i", -2375);
// 	ASSERT_PRINTF("% 03.3i", 6983);
// 	ASSERT_PRINTF("% 03.3i", -8462);
// //	ASSERT_PRINTF("% 0-8.5i", 34);
// //	ASSERT_PRINTF("% 0-10.5i", -216);
// //	ASSERT_PRINTF("% 0-8.5i", 0);
// //	ASSERT_PRINTF("% 0-8.3i", 8375);
// //	ASSERT_PRINTF("% 0-8.3i", -8473);
// //	ASSERT_PRINTF("% 0-3.7i", 3267);
// //	ASSERT_PRINTF("% 0-3.7i", -2375);
// //	ASSERT_PRINTF("% 0-3.3i", 6983);
// //	ASSERT_PRINTF("% 0-3.3i", -8462);
// //	ASSERT_PRINTF("% 0+8.5i", 34);
// //	ASSERT_PRINTF("% 0+10.5i", -216);
// //	ASSERT_PRINTF("% 0+8.5i", 0);
// //	ASSERT_PRINTF("% 0+8.3i", 8375);
// //	ASSERT_PRINTF("% 0+8.3i", -8473);
// //	ASSERT_PRINTF("% 0+3.7i", 3267);
// //	ASSERT_PRINTF("% 0+3.7i", -2375);
// //	ASSERT_PRINTF("% 0+3.3i", 6983);
// //	ASSERT_PRINTF("% 0+3.3i", -8462);
// ////	ASSERT_PRINTF("% 0+-8.5i", 34);
// ////	ASSERT_PRINTF("% 0+-10.5i", -216);
// ////	ASSERT_PRINTF("% 0+-8.5i", 0);
// ////	ASSERT_PRINTF("% 0+-8.3i", 8375);
// ////	ASSERT_PRINTF("% 0+-8.3i", -8473);
// ////	ASSERT_PRINTF("% 0+-3.7i", 3267);
// ////	ASSERT_PRINTF("% 0+-3.7i", -2375);
// ////	ASSERT_PRINTF("% 0+-3.3i", 6983);
// ////	ASSERT_PRINTF("% 0+-3.3i", -8462);
// 	ASSERT_PRINTF("% hhi", (char)45);
// 	ASSERT_PRINTF("% hhi", (char)-45);
// 	ASSERT_PRINTF("% hi", (short)385);
// 	ASSERT_PRINTF("% hi", (short)-385);
// 	ASSERT_PRINTF("% li", (long)32);
// 	ASSERT_PRINTF("% li", (long)-32);
// 	ASSERT_PRINTF("% lli", (long long)43);
// 	ASSERT_PRINTF("% lli", (long long)-43);
// 	ASSERT_PRINTF("% hhi", ch_pos_1);
// 	ASSERT_PRINTF("% hhi", ch_neg_1);
// 	ASSERT_PRINTF("% hi", sh_pos_1);
// 	ASSERT_PRINTF("% hi", sh_neg_1);
// 	ASSERT_PRINTF("% li", l_pos_1);
// 	ASSERT_PRINTF("% li", l_neg_1);
// 	ASSERT_PRINTF("% lli", ll_pos_1);
// 	ASSERT_PRINTF("% lli", ll_neg_1);
// 	ASSERT_PRINTF("% li", 22337203685477l);
// 	ASSERT_PRINTF("% li", -22337203685477l);
// 	ASSERT_PRINTF("% lli", 522337203685470ll);
// 	ASSERT_PRINTF("% lli", -522337203685470ll);
// 	ASSERT_PRINTF("% lli", 9223372036854775807ll);
// 	ASSERT_PRINTF("% lli", llmin);
// 	ASSERT_PRINTF("% li", 9223372036854775807l);
// 	ASSERT_PRINTF("% li", lmin);
// 	ASSERT_PRINTF("% hi", (short)32767);
// 	ASSERT_PRINTF("% hi", (short)(-32768));
// 	ASSERT_PRINTF("% hhi", (char)(127));
// 	ASSERT_PRINTF("% hhi", (char)(-128));
// 	ASSERT_PRINTF("%+.0i", 0);
// 	ASSERT_PRINTF("%+.i", 0);
// 	ASSERT_PRINTF("%+5.0i", 0);
// 	ASSERT_PRINTF("%+5.i", 0);
// 	ASSERT_PRINTF("%+-5.0i", 0);
// 	ASSERT_PRINTF("%+-5.i", 0);
// //	ASSERT_PRINTF("%hhi", -129);
// //	ASSERT_PRINTF("%hhi", 128);
// //	ASSERT_PRINTF("%hi", 32768);
// //	ASSERT_PRINTF("%hi", -32769);
// #endif
// 	ASSERT_PRINTF("%7i", 33);
// 	ASSERT_PRINTF("%7i", -14);
// 	ASSERT_PRINTF("%3i", 0);
// 	ASSERT_PRINTF("%5i", 52625);
// 	ASSERT_PRINTF("%5i", -2562);
// 	ASSERT_PRINTF("%4i", 94827);
// 	ASSERT_PRINTF("%4i", -2464);
// 	ASSERT_PRINTF("%-7i", 33);
// 	ASSERT_PRINTF("%-7i", -14);
// 	ASSERT_PRINTF("%-3i", 0);
// 	ASSERT_PRINTF("%-5i", 52625);
// 	ASSERT_PRINTF("%-5i", -2562);
// 	ASSERT_PRINTF("%-4i", 94827);
// 	ASSERT_PRINTF("%-4i", -2464);
// 	ASSERT_PRINTF("%.5i", 2);
// 	ASSERT_PRINTF("%.6i", -3);
// 	ASSERT_PRINTF("%.3i", 0);
// 	ASSERT_PRINTF("%.4i", 5263);
// 	ASSERT_PRINTF("%.4i", -2372);
// 	ASSERT_PRINTF("%.3i", 13862);
// 	ASSERT_PRINTF("%.3i",-23646);
// 	ASSERT_PRINTF("%05i", 43);
// 	ASSERT_PRINTF("%07i", -54);
// 	ASSERT_PRINTF("%03i", 0);
// 	ASSERT_PRINTF("%03i", 634);
// 	ASSERT_PRINTF("%04i", -532);
// 	ASSERT_PRINTF("%04i", -4825);
// 	ASSERT_PRINTF("%8.5i", 34);
// 	ASSERT_PRINTF("%10.5i", -216);
// 	ASSERT_PRINTF("%8.5i", 0);
// 	ASSERT_PRINTF("%8.3i", 8375);
// 	ASSERT_PRINTF("%8.3i", -8473);
// 	ASSERT_PRINTF("%3.7i", 3267);
// 	ASSERT_PRINTF("%3.7i", -2375);
// 	ASSERT_PRINTF("%3.3i", 6983);
// 	ASSERT_PRINTF("%3.3i", -8462);
// 	ASSERT_PRINTF("%-8.5i", 34);
// 	ASSERT_PRINTF("%-10.5i", -216);
// 	ASSERT_PRINTF("%-8.5i", 0);
// 	ASSERT_PRINTF("%-8.3i", 8375);
// 	ASSERT_PRINTF("%-8.3i", -8473);
// 	ASSERT_PRINTF("%-3.7i", 3267);
// 	ASSERT_PRINTF("%-3.7i", -2375);
// 	ASSERT_PRINTF("%-3.3i", 6983);
// 	ASSERT_PRINTF("%-3.3i", -8462);
// 	ASSERT_PRINTF("%08.5i", 34);
// 	ASSERT_PRINTF("%010.5i", -216);
// 	ASSERT_PRINTF("%08.5i", 0);
// 	ASSERT_PRINTF("%08.3i", 8375);
// 	ASSERT_PRINTF("%08.3i", -8473);
// 	ASSERT_PRINTF("%03.7i", 3267);
// 	ASSERT_PRINTF("%03.7i", -2375);
// 	ASSERT_PRINTF("%03.3i", 6983);
// 	ASSERT_PRINTF("%03.3i", -8462);
// //	ASSERT_PRINTF("%0-8.5i", 34);
// //	ASSERT_PRINTF("%0-10.5i", -216);
// //	ASSERT_PRINTF("%0-8.5i", 0);
// //	ASSERT_PRINTF("%0-8.3i", 8375);
// //	ASSERT_PRINTF("%0-8.3i", -8473);
// //	ASSERT_PRINTF("%0-3.7i", 3267);
// //	ASSERT_PRINTF("%0-3.7i", -2375);
// //	ASSERT_PRINTF("%0-3.3i", 6983);
// //	ASSERT_PRINTF("%0-3.3i", -8462);
// 	ASSERT_PRINTF("%.0i", 0);
// 	ASSERT_PRINTF("%.i", 0);
// 	ASSERT_PRINTF("%5.0i", 0);
// 	ASSERT_PRINTF("%5.i", 0);
// 	ASSERT_PRINTF("%-5.0i", 0);
// 	ASSERT_PRINTF("%-5.i", 0);
// }

// void test_pft_int_d(void)
// {
// 	static int                      i_pos_1 = 878023;
// #ifdef FT_PRINTF_TEST_BONUS
// 	static char             ch_pos_1 = 100, ch_neg_1 = -87;
// 	static short            sh_pos_1 = 3047, sh_neg_1 = -8875;
// 	static long             l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
// 	static long long        ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
// 	static long             lmax    = 9223372036854775807;
// 	static long             lmin    = -9223372036854775807;
// 	static long long llmax = 9223372036854775807;
// 	static long long        llmin = -9223372036854775807ll;
// 	ASSERT_PRINTF("this %d number", 17);
// 	ASSERT_PRINTF("this %d number", -267);
// 	ASSERT_PRINTF("this %d number", 0);
// 	ASSERT_PRINTF("%+d", 5);
// 	ASSERT_PRINTF("%+d", -7);
// 	ASSERT_PRINTF("%+d", 2147483647);
// 	ASSERT_PRINTF("%+5d", 35);
// 	ASSERT_PRINTF("%+7d", 0);
// 	ASSERT_PRINTF("%+24d", 2147483647);
// 	ASSERT_PRINTF("%+.7d", 234);
// 	ASSERT_PRINTF("%+.7d", -446);
// 	ASSERT_PRINTF("%+.3d", 3723);
// 	ASSERT_PRINTF("%+05d", 432);
// 	ASSERT_PRINTF("%+04d", 0);
// 	ASSERT_PRINTF("%+8.5d", 34);
// 	ASSERT_PRINTF("%+10.5d", -216);
// 	ASSERT_PRINTF("%+8.5d", 0);
// 	ASSERT_PRINTF("%+8.3d", 8375);
// 	ASSERT_PRINTF("%+8.3d", -8473);
// 	ASSERT_PRINTF("%+3.7d", 3267);
// 	ASSERT_PRINTF("%+3.7d", -2375);
// 	ASSERT_PRINTF("%+3.3d", 6983);
// 	ASSERT_PRINTF("%+3.3d", -8462);
// 	ASSERT_PRINTF("%+-8.5d", 34);
// 	ASSERT_PRINTF("%+-10.5d", -216);
// 	ASSERT_PRINTF("%+-8.5d", 0);
// 	ASSERT_PRINTF("%+-8.3d", 8375);
// 	ASSERT_PRINTF("%+-8.3d", -8473);
// 	ASSERT_PRINTF("%+-3.7d", 3267);
// 	ASSERT_PRINTF("%+-3.7d", -2375);
// 	ASSERT_PRINTF("%+-3.3d", 6983);
// 	ASSERT_PRINTF("%+-3.3d", -8462);
// 	ASSERT_PRINTF("%0+8.5d", 34);
// 	ASSERT_PRINTF("%0+10.5d", -216);
// 	ASSERT_PRINTF("%0+8.5d", 0);
// 	ASSERT_PRINTF("%0+8.3d", 8375);
// 	ASSERT_PRINTF("%0+8.3d", -8473);
// 	ASSERT_PRINTF("%0+3.7d", 3267);
// 	ASSERT_PRINTF("%0+3.7d", -2375);
// 	ASSERT_PRINTF("%0+3.3d", 6983);
// 	ASSERT_PRINTF("%0+3.3d", -8462);
// //	ASSERT_PRINTF("%0+-8.5d", 34);
// //	ASSERT_PRINTF("%0+-10.5d", -216);
// //	ASSERT_PRINTF("%0+-8.5d", 0);
// //	ASSERT_PRINTF("%0+-8.3d", 8375);
// //	ASSERT_PRINTF("%0+-8.3d", -8473);
// //	ASSERT_PRINTF("%0+-3.7d", 3267);
// //	ASSERT_PRINTF("%0+-3.7d", -2375);
// //	ASSERT_PRINTF("%0+-3.3d", 6983);
// //	ASSERT_PRINTF("%0+-3.3d", -8462);
// 	ASSERT_PRINTF("%hhd", (char)45);
// 	ASSERT_PRINTF("%hhd", (char)-45);
// 	ASSERT_PRINTF("%hd", (short)385);
// 	ASSERT_PRINTF("%hd", (short)-385);
// 	ASSERT_PRINTF("%ld", (long)32);
// 	ASSERT_PRINTF("%ld", (long)-32);
// 	ASSERT_PRINTF("%lld", (long long)43);
// 	ASSERT_PRINTF("%lld", (long long)-43);
// 	ASSERT_PRINTF("%hhd", ch_pos_1);
// 	ASSERT_PRINTF("%hhd", ch_neg_1);
// 	ASSERT_PRINTF("%hd", sh_pos_1);
// 	ASSERT_PRINTF("%hd", sh_neg_1);
// 	ASSERT_PRINTF("%ld", l_pos_1);
// 	ASSERT_PRINTF("%ld", lmax);
// 	ASSERT_PRINTF("%lld", llmax);
// 	ASSERT_PRINTF("%ld", l_neg_1);
// 	ASSERT_PRINTF("%lld", ll_pos_1);
// 	ASSERT_PRINTF("%lld", ll_neg_1);
// 	ASSERT_PRINTF("%ld", 22337203685477);
// 	ASSERT_PRINTF("%ld", -22337203685477);
// 	ASSERT_PRINTF("%lld", 522337203685470ll);
// 	ASSERT_PRINTF("%lld", -522337203685470ll);
// 	ASSERT_PRINTF("%lld", 9223372036854775807ll);
// 	ASSERT_PRINTF("%lld", llmin);
// 	ASSERT_PRINTF("%ld", 9223372036854775807l);
// 	ASSERT_PRINTF("%ld", lmin);
// 	ASSERT_PRINTF("%hd", (short)32767);
// 	ASSERT_PRINTF("%hd", (short)(-32768));
// 	ASSERT_PRINTF("%hhd", (char)127);
// 	ASSERT_PRINTF("%hhd", (char)(-128));
// 	ASSERT_PRINTF("%037ld", 22337203685477l);
// 	ASSERT_PRINTF("%.37ld", -22337203685477l);
// 	ASSERT_PRINTF("%37lld", 522337203685470ll);
// 	ASSERT_PRINTF("%-37lld", -522337203685470ll);
// 	ASSERT_PRINTF("%+ld", 22337203685477l);

// 	ASSERT_PRINTF("[%d] [%ld]", i_pos_1, l_pos_1);
// 	ASSERT_PRINTF("[%d] [%lld]", i_pos_1, ll_pos_1);
// 	ASSERT_PRINTF("[%d] [%hd]", i_pos_1, sh_pos_1);
// 	ASSERT_PRINTF("[%d] [%hhd]", i_pos_1, ch_pos_1);
// 	ASSERT_PRINTF("%lld%hhd%lld", ll_pos_1, ch_neg_1, ll_neg_1);
// 	ASSERT_PRINTF("%hd%ld%hhd", sh_pos_1, l_neg_1, ch_neg_1);
// 	ASSERT_PRINTF("%ld%hhd%hd", l_neg_1, ch_pos_1, sh_pos_1);
// 	ASSERT_PRINTF("%d%lld%hhd", i_pos_1, ll_neg_1, ch_pos_1);
// 	ASSERT_PRINTF("%lli%d%ld", ll_neg_1, i_pos_1, l_pos_1);
// 	ASSERT_PRINTF("this % d number", 17);
// 	ASSERT_PRINTF("this % d number", -267);
// 	ASSERT_PRINTF("this % d number", 0);
// 	ASSERT_PRINTF("% d", 3);
// 	ASSERT_PRINTF("% d", -1);
// 	ASSERT_PRINTF("% d", 0);
// 	ASSERT_PRINTF("this % d number", 17);
// 	ASSERT_PRINTF("this % d number", -267);
// 	ASSERT_PRINTF("this % d number", 0);
// 	ASSERT_PRINTF("% d", 2147483647);
// 	ASSERT_PRINTF("% d", (int)(-2147483678));
// //	ASSERT_PRINTF("% +d", 5);
// //	ASSERT_PRINTF("% +d", -7);
// //	ASSERT_PRINTF("% +d", 2147483647);
// 	ASSERT_PRINTF("% 7d", 33);
// 	ASSERT_PRINTF("% 7d", -14);
// 	ASSERT_PRINTF("% 3d", 0);
// 	ASSERT_PRINTF("% 5d", 52625);
// 	ASSERT_PRINTF("% 5d", -2562);
// 	ASSERT_PRINTF("% 4d", 94827);
// 	ASSERT_PRINTF("% 4d", -2464);
// 	ASSERT_PRINTF("% -7d", 33);
// 	ASSERT_PRINTF("% -7d", -14);
// 	ASSERT_PRINTF("% -3d", 0);
// 	ASSERT_PRINTF("% -5d", 52625);
// 	ASSERT_PRINTF("% -5d", -2562);
// 	ASSERT_PRINTF("% -4d", 94827);
// 	ASSERT_PRINTF("% -4d", -2464);
// //	ASSERT_PRINTF("% +5d", 35);
// //	ASSERT_PRINTF("% +7d", 0);
// //	ASSERT_PRINTF("% +24d", 2147483647);
// 	ASSERT_PRINTF("% .5d", 2);
// 	ASSERT_PRINTF("% .6d", -3);
// 	ASSERT_PRINTF("% .3d", 0);
// 	ASSERT_PRINTF("% .4d", 5263);
// 	ASSERT_PRINTF("% .4d", -2372);
// 	ASSERT_PRINTF("% .3d", 13862);
// 	ASSERT_PRINTF("% .3d",-23646);
// //	ASSERT_PRINTF("% +.7d", 234);
// //	ASSERT_PRINTF("% +.7d", -446);
// //	ASSERT_PRINTF("% +.3d", 3723);
// 	ASSERT_PRINTF("% 05d", 43);
// 	ASSERT_PRINTF("% 07d", -54);
// 	ASSERT_PRINTF("% 03d", 0);
// 	ASSERT_PRINTF("% 03d", 634);
// 	ASSERT_PRINTF("% 04d", -532);
// 	ASSERT_PRINTF("% 04d", -4825);
// //	ASSERT_PRINTF("% +05d", 432);
// //	ASSERT_PRINTF("% +04d", 0);
// 	ASSERT_PRINTF("% 8.5d", 34);
// 	ASSERT_PRINTF("% 10.5d", -216);
// 	ASSERT_PRINTF("% 8.5d", 0);
// 	ASSERT_PRINTF("% 8.3d", 8375);
// 	ASSERT_PRINTF("% 8.3d", -8473);
// 	ASSERT_PRINTF("% 3.7d", 3267);
// 	ASSERT_PRINTF("% 3.7d", -2375);
// 	ASSERT_PRINTF("% 3.3d", 6983);
// 	ASSERT_PRINTF("% 3.3d", -8462);
// 	ASSERT_PRINTF("% -8.5d", 34);
// 	ASSERT_PRINTF("% -10.5d", -216);
// 	ASSERT_PRINTF("% -8.5d", 0);
// 	ASSERT_PRINTF("% -8.3d", 8375);
// 	ASSERT_PRINTF("% -8.3d", -8473);
// 	ASSERT_PRINTF("% -3.7d", 3267);
// 	ASSERT_PRINTF("% -3.7d", -2375);
// 	ASSERT_PRINTF("% -3.3d", 6983);
// 	ASSERT_PRINTF("% -3.3d", -8462);

// //	ASSERT_PRINTF("% +8.5d", 34);
// //	ASSERT_PRINTF("% +10.5d", -216);
// //	ASSERT_PRINTF("% +8.5d", 0);
// //	ASSERT_PRINTF("% +8.3d", 8375);
// //	ASSERT_PRINTF("% +8.3d", -8473);
// //	ASSERT_PRINTF("% +3.7d", 3267);
// //	ASSERT_PRINTF("% +3.7d", -2375);
// //	ASSERT_PRINTF("% +3.3d", 6983);
// //	ASSERT_PRINTF("% +3.3d", -8462);
// //	ASSERT_PRINTF("% +-8.5d", 34);
// //	ASSERT_PRINTF("% +-10.5d", -216);
// //	ASSERT_PRINTF("% +-8.5d", 0);
// //	ASSERT_PRINTF("% +-8.3d", 8375);
// //	ASSERT_PRINTF("% +-8.3d", -8473);
// //	ASSERT_PRINTF("% +-3.7d", 3267);
// //	ASSERT_PRINTF("% +-3.7d", -2375);
// //	ASSERT_PRINTF("% +-3.3d", 6983);
// //	ASSERT_PRINTF("% +-3.3d", -8462);
// 	ASSERT_PRINTF("% 08.5d", 34);
// 	ASSERT_PRINTF("% 010.5d", -216);
// 	ASSERT_PRINTF("% 08.5d", 0);
// 	ASSERT_PRINTF("% 08.3d", 8375);
// 	ASSERT_PRINTF("% 08.3d", -8473);
// 	ASSERT_PRINTF("% 03.7d", 3267);
// 	ASSERT_PRINTF("% 03.7d", -2375);
// 	ASSERT_PRINTF("% 03.3d", 6983);
// 	ASSERT_PRINTF("% 03.3d", -8462);
// //	ASSERT_PRINTF("% 0-8.5d", 34);
// //	ASSERT_PRINTF("% 0-10.5d", -216);
// //	ASSERT_PRINTF("% 0-8.5d", 0);
// //	ASSERT_PRINTF("% 0-8.3d", 8375);
// //	ASSERT_PRINTF("% 0-8.3d", -8473);
// //	ASSERT_PRINTF("% 0-3.7d", 3267);
// //	ASSERT_PRINTF("% 0-3.7d", -2375);
// //	ASSERT_PRINTF("% 0-3.3d", 6983);
// //	ASSERT_PRINTF("% 0-3.3d", -8462);
// //	ASSERT_PRINTF("% 0+8.5d", 34);
// //	ASSERT_PRINTF("% 0+10.5d", -216);
// //	ASSERT_PRINTF("% 0+8.5d", 0);
// //	ASSERT_PRINTF("% 0+8.3d", 8375);
// //	ASSERT_PRINTF("% 0+8.3d", -8473);
// //	ASSERT_PRINTF("% 0+3.7d", 3267);
// //	ASSERT_PRINTF("% 0+3.7d", -2375);
// //	ASSERT_PRINTF("% 0+3.3d", 6983);
// //	ASSERT_PRINTF("% 0+3.3d", -8462);
// ////	ASSERT_PRINTF("% 0+-8.5d", 34);
// ////	ASSERT_PRINTF("% 0+-10.5d", -216);
// ////	ASSERT_PRINTF("% 0+-8.5d", 0);
// ////	ASSERT_PRINTF("% 0+-8.3d", 8375);
// ////	ASSERT_PRINTF("% 0+-8.3d", -8473);
// ////	ASSERT_PRINTF("% 0+-3.7d", 3267);
// ////	ASSERT_PRINTF("% 0+-3.7d", -2375);
// ////	ASSERT_PRINTF("% 0+-3.3d", 6983);
// ////	ASSERT_PRINTF("% 0+-3.3d", -8462);
// 	ASSERT_PRINTF("% hhd", (char)45);
// 	ASSERT_PRINTF("% hhd", (char)-45);
// 	ASSERT_PRINTF("% hd", (short)385);
// 	ASSERT_PRINTF("% hd", (short)-385);
// 	ASSERT_PRINTF("% ld", (long)32);
// 	ASSERT_PRINTF("% ld", (long)-32);
// 	ASSERT_PRINTF("% lld", (long long)43);
// 	ASSERT_PRINTF("% lld", (long long)-43);
// 	ASSERT_PRINTF("% hhd", ch_pos_1);
// 	ASSERT_PRINTF("% hhd", ch_neg_1);
// 	ASSERT_PRINTF("% hd", sh_pos_1);
// 	ASSERT_PRINTF("% hd", sh_neg_1);
// 	ASSERT_PRINTF("% ld", l_pos_1);
// 	ASSERT_PRINTF("% ld", l_neg_1);
// 	ASSERT_PRINTF("% lld", ll_pos_1);
// 	ASSERT_PRINTF("% lld", ll_neg_1);
// 	ASSERT_PRINTF("% ld", 22337203685477l);
// 	ASSERT_PRINTF("% ld", -22337203685477l);
// 	ASSERT_PRINTF("% lld", 522337203685470ll);
// 	ASSERT_PRINTF("% lld", -522337203685470ll);
// 	ASSERT_PRINTF("% lld", 9223372036854775807ll);
// 	ASSERT_PRINTF("% lld", llmin);
// 	ASSERT_PRINTF("% ld", 9223372036854775807l);
// 	ASSERT_PRINTF("% ld", lmin);
// 	ASSERT_PRINTF("% hd", (short)32767);
// 	ASSERT_PRINTF("% hd", (short)(-32768));


// 	ASSERT_PRINTF("% hhd", (char)(127));
// 	ASSERT_PRINTF("% hhd", (char)(-128));
// 	ASSERT_PRINTF("%+.0d", 0);
// 	ASSERT_PRINTF("%+.d", 0);
// 	ASSERT_PRINTF("%+5.0d", 0);
// 	ASSERT_PRINTF("%+5.d", 0);
// 	ASSERT_PRINTF("%+-5.0d", 0);
// 	ASSERT_PRINTF("%+-5.d", 0);
// #endif

// 	ASSERT_PRINTF("%d", 3);
// 	ASSERT_PRINTF("%d", -1);
// 	ASSERT_PRINTF("%d", 0);
// 	ASSERT_PRINTF("%d",  2147483647);
// 	ASSERT_PRINTF("%d", (int)(-2147483678));
// 	ASSERT_PRINTF("%7d", 33);
// 	ASSERT_PRINTF("%7d", -14);
// 	ASSERT_PRINTF("%3d", 0);
// 	ASSERT_PRINTF("%5d", 52625);
// 	ASSERT_PRINTF("%5d", -2562);
// 	ASSERT_PRINTF("%4d", 94827);
// 	ASSERT_PRINTF("%4d", -2464);
// 	ASSERT_PRINTF("%-7d", 33);
// 	ASSERT_PRINTF("%-7d", -14);
// 	ASSERT_PRINTF("%-3d", 0);
// 	ASSERT_PRINTF("%-5d", 52625);
// 	ASSERT_PRINTF("%-5d", -2562);
// 	ASSERT_PRINTF("%-4d", 94827);
// 	ASSERT_PRINTF("%-4d", -2464);
// 	ASSERT_PRINTF("%.5d", 2);
// 	ASSERT_PRINTF("%.6d", -3);
// 	ASSERT_PRINTF("%.3d", 0);
// 	ASSERT_PRINTF("%.4d", 5263);
// 	ASSERT_PRINTF("%.4d", -2372);
// 	ASSERT_PRINTF("%.3d", 13862);
// 	ASSERT_PRINTF("%.3d",-23646);
// 	ASSERT_PRINTF("%05d", 43);
// 	ASSERT_PRINTF("%07d", -54);
// 	ASSERT_PRINTF("%03d", 0);
// 	ASSERT_PRINTF("%03d", 634);
// 	ASSERT_PRINTF("%04d", -532);
// 	ASSERT_PRINTF("%04d", -4825);
// 	ASSERT_PRINTF("%8.5d", 34);
// 	ASSERT_PRINTF("%10.5d", -216);
// 	ASSERT_PRINTF("%8.5d", 0);
// 	ASSERT_PRINTF("%8.3d", 8375);
// 	ASSERT_PRINTF("%8.3d", -8473);
// 	ASSERT_PRINTF("%3.7d", 3267);
// 	ASSERT_PRINTF("%3.7d", -2375);
// 	ASSERT_PRINTF("%3.3d", 6983);
// 	ASSERT_PRINTF("%3.3d", -8462);
// 	ASSERT_PRINTF("%-8.5d", 34);
// 	ASSERT_PRINTF("%-10.5d", -216);
// 	ASSERT_PRINTF("%-8.5d", 0);
// 	ASSERT_PRINTF("%-8.3d", 8375);
// 	ASSERT_PRINTF("%-8.3d", -8473);
// 	ASSERT_PRINTF("%-3.7d", 3267);
// 	ASSERT_PRINTF("%-3.7d", -2375);
// 	ASSERT_PRINTF("%-3.3d", 6983);
// 	ASSERT_PRINTF("%-3.3d", -8462);


// 	ASSERT_PRINTF("%08.5d", 34);
// 	ASSERT_PRINTF("%010.5d", -216);
// 	ASSERT_PRINTF("%08.5d", 0);
// 	ASSERT_PRINTF("%08.3d", 8375);
// 	ASSERT_PRINTF("%08.3d", -8473);
// 	ASSERT_PRINTF("%03.7d", 3267);
// 	ASSERT_PRINTF("%03.7d", -2375);
// 	ASSERT_PRINTF("%03.3d", 6983);
// 	ASSERT_PRINTF("%03.3d", -8462);
// //	ASSERT_PRINTF("%0-8.5d", 34);
// //	ASSERT_PRINTF("%0-10.5d", -216);
// //	ASSERT_PRINTF("%0-8.5d", 0);
// //	ASSERT_PRINTF("%0-8.3d", 8375);
// //	ASSERT_PRINTF("%0-8.3d", -8473);
// //	ASSERT_PRINTF("%0-3.7d", 3267);
// //	ASSERT_PRINTF("%0-3.7d", -2375);
// //	ASSERT_PRINTF("%0-3.3d", 6983);
// //	ASSERT_PRINTF("%0-3.3d", -8462);
// 	ASSERT_PRINTF("[%d] [%d]", i_pos_1, i_pos_1);
// 	ASSERT_PRINTF("%.0d", 0);
// 	ASSERT_PRINTF("%.d", 0);
// 	ASSERT_PRINTF("%5.0d", 0);
// 	ASSERT_PRINTF("%5.d", 0);
// 	ASSERT_PRINTF("%-5.0d", 0);
// 	ASSERT_PRINTF("%-5.d", 0);
// }

// void test_ptf_uint(void)
// {
// 	ASSERT_PRINTF("this %u number", 17);
// 	ASSERT_PRINTF("this %u number", 0);
// 	ASSERT_PRINTF("%u", 3);
// 	ASSERT_PRINTF("%u", 4294967295u);
// 	ASSERT_PRINTF("%7u", 33);
// 	ASSERT_PRINTF("%3u", 0);
// 	ASSERT_PRINTF("%5u", 52625);
// 	ASSERT_PRINTF("%4u", 94827);
// 	ASSERT_PRINTF("%-7u", 33);
// 	ASSERT_PRINTF("%-3u", 0);
// 	ASSERT_PRINTF("%-5u", 52625);
// 	ASSERT_PRINTF("%-4u", 94827);
// 	ASSERT_PRINTF("%.5u", 2);
// 	ASSERT_PRINTF("%.3u", 0);
// 	ASSERT_PRINTF("%.4u", 5263);
// 	ASSERT_PRINTF("%.3u", 13862);
// 	ASSERT_PRINTF("%05u", 43);
// 	ASSERT_PRINTF("%03u", 0);
// 	ASSERT_PRINTF("%03u", 634);
// 	ASSERT_PRINTF("%8.5u", 34);
// 	ASSERT_PRINTF("%8.5u", 0);
// 	ASSERT_PRINTF("%8.3u", 8375);
// 	ASSERT_PRINTF("%3.7u", 3267);
// 	ASSERT_PRINTF("%3.3u", 6983);
// 	ASSERT_PRINTF("%-8.5u", 34);
// 	ASSERT_PRINTF("%-8.5u", 0);
// 	ASSERT_PRINTF("%-8.3u", 8375);
// 	ASSERT_PRINTF("%-3.7u", 3267);
// 	ASSERT_PRINTF("%-3.3u", 6983);
// 	ASSERT_PRINTF("%08.5u", 34);
// 	ASSERT_PRINTF("%08.5u", 0);
// 	ASSERT_PRINTF("%08.3u", 8375);
// 	ASSERT_PRINTF("%03.7u", 3267);
// 	ASSERT_PRINTF("%03.3u", 6983);
// //	ASSERT_PRINTF("%0-8.5u", 34);
// //	ASSERT_PRINTF("%0-8.5u", 0);
// //	ASSERT_PRINTF("%0-8.3u", 8375);
// //	ASSERT_PRINTF("%0-3.7u", 3267);
// //	ASSERT_PRINTF("%0-3.3u", 6983);
// #ifdef FT_PRINTF_TEST_BONUS
// 	static unsigned char            uch_pos_1 = 100;
// 	static unsigned short           ush_pos_1 = 3047;
// 	static unsigned int             ui_pos_1 = 878023;
// 	static unsigned long            ul_pos_1 = 22337203685477;
// 	static unsigned long long  ullmax = 9223372036854775807;
// 	static unsigned long long       ull_pos_1 = 22337203685477;
// 	static unsigned long            ulmax = 9223372036854775807;
// 	ASSERT_PRINTF("%hhu", (unsigned char)45);
// 	ASSERT_PRINTF("%hu", (unsigned short)385);
// 	ASSERT_PRINTF("%lu", (unsigned long)32);
// 	ASSERT_PRINTF("%llu", (unsigned long long)43);
// 	ASSERT_PRINTF("%hhu", uch_pos_1);
// 	ASSERT_PRINTF("%hu", ush_pos_1);
// 	ASSERT_PRINTF("%lu", ul_pos_1);
// 	ASSERT_PRINTF("%llu", ull_pos_1);
// 	ASSERT_PRINTF("%lu", 22337203685477ul);
// 	ASSERT_PRINTF("%llu", 522337203685470ull);
// 	ASSERT_PRINTF("%llu", ullmax);
// 	ASSERT_PRINTF("%lu", ulmax);
// 	ASSERT_PRINTF("%hu", (unsigned short)65535);
// 	ASSERT_PRINTF("%hhu", (unsigned char)255);
// 	ASSERT_PRINTF("%037lu", 22337203685477ul);
// 	ASSERT_PRINTF("%37llu", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%llu", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%lu%hhu", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%hu", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%u%llu%hhu", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%lu", ull_pos_1, ui_pos_1, ul_pos_1);
// #endif
// 	ASSERT_PRINTF("%.0u", 0);
// 	ASSERT_PRINTF("%.u", 0);
// 	ASSERT_PRINTF("%5.0u", 0);
// 	ASSERT_PRINTF("%5.u", 0);
// 	ASSERT_PRINTF("%-5.0u", 0);
// 	ASSERT_PRINTF("%-5.u", 0);
// }

// void test_ptf_hex_low(void)
// {
// 	ASSERT_PRINTF("this %x number", 17);
// 	ASSERT_PRINTF("this %x number", 0);
// 	ASSERT_PRINTF("%x", 3);
// 	ASSERT_PRINTF("%x", 4294967295u);
// 	ASSERT_PRINTF("%7x", 33);
// 	ASSERT_PRINTF("%3x", 0);
// 	ASSERT_PRINTF("%5x", 52625);
// 	ASSERT_PRINTF("%2x", 94827);
// 	ASSERT_PRINTF("%-7x", 33);
// 	ASSERT_PRINTF("%-3x", 0);
// 	ASSERT_PRINTF("%-5x", 52625);
// 	ASSERT_PRINTF("%-4x", 9648627);
// 	ASSERT_PRINTF("%.5x", 21);
// 	ASSERT_PRINTF("%.3x", 0);
// 	ASSERT_PRINTF("%.4x", 5263);
// 	ASSERT_PRINTF("%.3x", 938862);
// 	ASSERT_PRINTF("%05x", 43);
// 	ASSERT_PRINTF("%03x", 0);
// 	ASSERT_PRINTF("%03x", 698334);
// 	ASSERT_PRINTF("%8.5x", 34);
// 	ASSERT_PRINTF("%8.5x", 0);
// 	ASSERT_PRINTF("%8.3x", 8375);
// 	ASSERT_PRINTF("%2.7x", 3267);
// 	ASSERT_PRINTF("%3.3x", 6983);
// 	ASSERT_PRINTF("%-8.5x", 34);
// 	ASSERT_PRINTF("%-8.5x", 0);
// 	ASSERT_PRINTF("%-8.3x", 8375);
// 	ASSERT_PRINTF("%-2.7x", 3267);
// 	ASSERT_PRINTF("%-3.3x", 6983);
// 	ASSERT_PRINTF("%08.5x", 34);
// 	ASSERT_PRINTF("%08.5x", 0);
// 	ASSERT_PRINTF("%08.3x", 8375);
// 	ASSERT_PRINTF("%02.7x", 3267);
// 	ASSERT_PRINTF("%03.3x", 6983);
// //	ASSERT_PRINTF("%0-8.5x", 34);
// //	ASSERT_PRINTF("%0-8.5x", 0);
// //	ASSERT_PRINTF("%0-8.3x", 8375);
// //	ASSERT_PRINTF("%0-2.7x", 3267);
// //	ASSERT_PRINTF("%0-3.3x", 6983);
// 	ASSERT_PRINTF("%.0x", 0);
// 	ASSERT_PRINTF("%.x", 0);
// 	ASSERT_PRINTF("%5.0x", 0);
// 	ASSERT_PRINTF("%5.x", 0);
// 	ASSERT_PRINTF("%-5.0x", 0);
// 	ASSERT_PRINTF("%-5.x", 0);
// 	ASSERT_PRINTF("this %x number", 17);
// 	ASSERT_PRINTF("this %x number", 0);
// 	ASSERT_PRINTF("%x", 3);
// 	ASSERT_PRINTF("%x", 4294967295u);
// 	ASSERT_PRINTF("%7x", 33);
// 	ASSERT_PRINTF("%3x", 0);
// 	ASSERT_PRINTF("%5x", 52625);
// 	ASSERT_PRINTF("%2x", 94827);
// 	ASSERT_PRINTF("%-7x", 33);
// 	ASSERT_PRINTF("%-3x", 0);
// 	ASSERT_PRINTF("%-5x", 52625);
// 	ASSERT_PRINTF("%-4x", 9648627);
// 	ASSERT_PRINTF("%.5x", 21);
// 	ASSERT_PRINTF("%.3x", 0);
// 	ASSERT_PRINTF("%.4x", 5263);
// 	ASSERT_PRINTF("%.3x", 938862);
// 	ASSERT_PRINTF("%05x", 43);
// 	ASSERT_PRINTF("%03x", 0);
// 	ASSERT_PRINTF("%03x", 698334);
// 	ASSERT_PRINTF("%8.5x", 34);
// 	ASSERT_PRINTF("%8.5x", 0);
// 	ASSERT_PRINTF("%8.3x", 8375);
// 	ASSERT_PRINTF("%2.7x", 3267);
// 	ASSERT_PRINTF("%3.3x", 6983);
// 	ASSERT_PRINTF("%-8.5x", 34);
// 	ASSERT_PRINTF("%-8.5x", 0);
// 	ASSERT_PRINTF("%-8.3x", 8375);
// 	ASSERT_PRINTF("%-2.7x", 3267);
// 	ASSERT_PRINTF("%-3.3x", 6983);
// 	ASSERT_PRINTF("%08.5x", 34);
// 	ASSERT_PRINTF("%08.5x", 0);
// 	ASSERT_PRINTF("%08.3x", 8375);
// 	ASSERT_PRINTF("%02.7x", 3267);
// 	ASSERT_PRINTF("%03.3x", 6983);
// //	ASSERT_PRINTF("%0-8.5x", 34);
// //	ASSERT_PRINTF("%0-8.5x", 0);
// //	ASSERT_PRINTF("%0-8.3x", 8375);
// //	ASSERT_PRINTF("%0-2.7x", 3267);
// //	ASSERT_PRINTF("%0-3.3x", 6983);
// 	ASSERT_PRINTF("%.0x", 0);
// 	ASSERT_PRINTF("%.x", 0);
// 	ASSERT_PRINTF("%5.0x", 0);
// 	ASSERT_PRINTF("%5.x", 0);
// 	ASSERT_PRINTF("%-5.0x", 0);
// 	ASSERT_PRINTF("%-5.x", 0);
// #ifdef FT_PRINTF_TEST_BONUS
// 	static unsigned char            uch_pos_1 = 100;
// 	static unsigned short           ush_pos_1 = 3047;
// 	static unsigned int             ui_pos_1 = 878023;
// 	static unsigned long            ul_pos_1 = 22337203685477;
// 	static unsigned long long       ull_pos_1 = 22337203685477;
// 	static unsigned long long  ullmax = 9223372036854775807;
// 	static unsigned long            ulmax = 9223372036854775807;
// 	ASSERT_PRINTF("%#.0x", 0);
// 	ASSERT_PRINTF("%#.x", 0);
// 	ASSERT_PRINTF("%#5.0x", 0);
// 	ASSERT_PRINTF("%#5.x", 0);
// 	ASSERT_PRINTF("%#-5.0x", 0);
// 	ASSERT_PRINTF("%#-5.x", 0);
// 	ASSERT_PRINTF("%hhx", (unsigned char)45);
// 	ASSERT_PRINTF("%hx", (unsigned short)385);
// 	ASSERT_PRINTF("%lx", (unsigned long)32);
// 	ASSERT_PRINTF("%llx", (long long)43);
// 	ASSERT_PRINTF("%hhx", uch_pos_1);
// 	ASSERT_PRINTF("%hx", ush_pos_1);
// 	ASSERT_PRINTF("%lx", ul_pos_1);
// 	ASSERT_PRINTF("%llx", ull_pos_1);
// 	ASSERT_PRINTF("%lx", 22337203685477ul);
// 	ASSERT_PRINTF("%llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llx", ullmax);
// 	ASSERT_PRINTF("%lx", ulmax);
// 	ASSERT_PRINTF("%hx", (unsigned short)65535);
// 	ASSERT_PRINTF("%hhx", (unsigned char)255);
// 	ASSERT_PRINTF("%037lx", 22337203685477ul);
// 	ASSERT_PRINTF("%37llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%llx", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%lu%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%hx", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%u%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%lx", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("%#x", 4294967295u);
// 	ASSERT_PRINTF("%#7x", 33);
// 	ASSERT_PRINTF("%#3x", 0);
// 	ASSERT_PRINTF("%#5x", 52625);
// 	ASSERT_PRINTF("%#2x", 94827);
// 	ASSERT_PRINTF("%#-7x", 33);
// 	ASSERT_PRINTF("%#-3x", 0);
// 	ASSERT_PRINTF("%#-5x", 52625);
// 	ASSERT_PRINTF("%#-4x", 9648627);
// 	ASSERT_PRINTF("%#.5x", 21);
// 	ASSERT_PRINTF("%#.3x", 0);
// 	ASSERT_PRINTF("%#.4x", 5263);
// 	ASSERT_PRINTF("%#.3x", 938862);
// 	ASSERT_PRINTF("%#05x", 43);
// 	ASSERT_PRINTF("%#03x", 0);
// 	ASSERT_PRINTF("%#03x", 698334);
// 	ASSERT_PRINTF("%#8.5x", 34);
// 	ASSERT_PRINTF("%#8.5x", 0);
// 	ASSERT_PRINTF("%#8.3x", 8375);
// 	ASSERT_PRINTF("%#2.7x", 3267);
// 	ASSERT_PRINTF("%#3.3x", 6983);
// 	ASSERT_PRINTF("%#-8.5x", 34);
// 	ASSERT_PRINTF("%#-8.5x", 0);
// 	ASSERT_PRINTF("%#-8.3x", 8375);
// 	ASSERT_PRINTF("%#-2.7x", 3267);
// 	ASSERT_PRINTF("%#-3.3x", 6983);
// 	ASSERT_PRINTF("%#08.5x", 34);
// 	ASSERT_PRINTF("%#08.5x", 0);
// 	ASSERT_PRINTF("%#08.3x", 8375);
// 	ASSERT_PRINTF("%#02.7x", 3267);
// 	ASSERT_PRINTF("%#03.3x", 6983);
// //	ASSERT_PRINTF("%#0-8.5x", 34);
// //	ASSERT_PRINTF("%#0-8.5x", 0);
// //	ASSERT_PRINTF("%#0-8.3x", 8375);
// //	ASSERT_PRINTF("%#0-2.7x", 3267);
// //	ASSERT_PRINTF("%#0-3.3x", 6983);
// 	ASSERT_PRINTF("%#hhx", (unsigned char)45);
// 	ASSERT_PRINTF("%#hx", (unsigned short)385);
// 	ASSERT_PRINTF("%#lx", (unsigned long)32);
// 	ASSERT_PRINTF("%#llx", (long long)43);
// 	ASSERT_PRINTF("%#hhx", uch_pos_1);
// 	ASSERT_PRINTF("%#hx", ush_pos_1);
// 	ASSERT_PRINTF("%#lx", ul_pos_1);
// 	ASSERT_PRINTF("%#llx", ull_pos_1);
// 	ASSERT_PRINTF("%#lx", 22337203685477lu);
// 	ASSERT_PRINTF("%#llx", 522337203685470llu);
// 	ASSERT_PRINTF("%#llx", ullmax);
// 	ASSERT_PRINTF("%#lx", ulmax);
// 	ASSERT_PRINTF("%#hx", (unsigned short)65535);
// 	ASSERT_PRINTF("%#hhx", (unsigned char)255);
// 	ASSERT_PRINTF("%#037lx", 22337203685477ul);
// 	ASSERT_PRINTF("%#37llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%#llx", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%#lx%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%#hx", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%#x%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%#lx", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("%hhx", (unsigned char)45);
// 	ASSERT_PRINTF("%hx", (unsigned short)385);
// 	ASSERT_PRINTF("%lx", (unsigned long)32);
// 	ASSERT_PRINTF("%llx", (long long)43);
// 	ASSERT_PRINTF("%hhx", uch_pos_1);
// 	ASSERT_PRINTF("%hx", ush_pos_1);
// 	ASSERT_PRINTF("%lx", ul_pos_1);
// 	ASSERT_PRINTF("%llx", ull_pos_1);
// 	ASSERT_PRINTF("%lx", 22337203685477ul);
// 	ASSERT_PRINTF("%llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llx", ullmax);
// 	ASSERT_PRINTF("%lx", ulmax);
// 	ASSERT_PRINTF("%hx", (unsigned short)65535);
// 	ASSERT_PRINTF("%hhx", (unsigned char)255);
// 	ASSERT_PRINTF("%037lx", 22337203685477ul);
// 	ASSERT_PRINTF("%37llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%llx", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%lu%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%hx", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%u%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%lx", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("%#x", 4294967295u);
// 	ASSERT_PRINTF("%#7x", 33);
// 	ASSERT_PRINTF("%#3x", 0);
// 	ASSERT_PRINTF("%#5x", 52625);
// 	ASSERT_PRINTF("%#2x", 94827);
// 	ASSERT_PRINTF("%#-7x", 33);
// 	ASSERT_PRINTF("%#-3x", 0);
// 	ASSERT_PRINTF("%#-5x", 52625);
// 	ASSERT_PRINTF("%#-4x", 9648627);
// 	ASSERT_PRINTF("%#.5x", 21);
// 	ASSERT_PRINTF("%#.3x", 0);
// 	ASSERT_PRINTF("%#.4x", 5263);
// 	ASSERT_PRINTF("%#.3x", 938862);
// 	ASSERT_PRINTF("%#05x", 43);
// 	ASSERT_PRINTF("%#03x", 0);
// 	ASSERT_PRINTF("%#03x", 698334);
// 	ASSERT_PRINTF("%#8.5x", 34);
// 	ASSERT_PRINTF("%#8.5x", 0);
// 	ASSERT_PRINTF("%#8.3x", 8375);
// 	ASSERT_PRINTF("%#2.7x", 3267);
// 	ASSERT_PRINTF("%#3.3x", 6983);
// 	ASSERT_PRINTF("%#-8.5x", 34);
// 	ASSERT_PRINTF("%#-8.5x", 0);
// 	ASSERT_PRINTF("%#-8.3x", 8375);
// 	ASSERT_PRINTF("%#-2.7x", 3267);
// 	ASSERT_PRINTF("%#-3.3x", 6983);
// 	ASSERT_PRINTF("%#08.5x", 34);
// 	ASSERT_PRINTF("%#08.5x", 0);
// 	ASSERT_PRINTF("%#08.3x", 8375);
// 	ASSERT_PRINTF("%#02.7x", 3267);
// 	ASSERT_PRINTF("%#03.3x", 6983);
// //	ASSERT_PRINTF("%#0-8.5x", 34);
// //	ASSERT_PRINTF("%#0-8.5x", 0);
// //	ASSERT_PRINTF("%#0-8.3x", 8375);
// //	ASSERT_PRINTF("%#0-2.7x", 3267);
// //	ASSERT_PRINTF("%#0-3.3x", 6983);
// 	ASSERT_PRINTF("%#hhx", (unsigned char)45);
// 	ASSERT_PRINTF("%#hx", (unsigned short)385);
// 	ASSERT_PRINTF("%#lx", (unsigned long)32);
// 	ASSERT_PRINTF("%#llx", (long long)43);
// 	ASSERT_PRINTF("%#hhx", uch_pos_1);
// 	ASSERT_PRINTF("%#hx", ush_pos_1);
// 	ASSERT_PRINTF("%#lx", ul_pos_1);
// 	ASSERT_PRINTF("%#llx", ull_pos_1);
// 	ASSERT_PRINTF("%#lx", 22337203685477lu);
// 	ASSERT_PRINTF("%#llx", 522337203685470llu);
// 	ASSERT_PRINTF("%#llx", ullmax);
// 	ASSERT_PRINTF("%#lx", ulmax);
// 	ASSERT_PRINTF("%#hx", (unsigned short)65535);
// 	ASSERT_PRINTF("%#hhx", (unsigned char)255);
// 	ASSERT_PRINTF("%#037lx", 22337203685477ul);
// 	ASSERT_PRINTF("%#37llx", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%#llx", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%#lx%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%#hx", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%#x%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%#lx", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("%#.0x", 0);
// 	ASSERT_PRINTF("%#.x", 0);
// 	ASSERT_PRINTF("%#5.0x", 0);
// 	ASSERT_PRINTF("%#5.x", 0);
// 	ASSERT_PRINTF("%#-5.0x", 0);
// 	ASSERT_PRINTF("%#-5.x", 0);
// #endif
// }

// void test_ptf_hex_up(void)
// {
// 	ASSERT_PRINTF("this %X number", 17);
// 	ASSERT_PRINTF("this %X number", 0);
// 	ASSERT_PRINTF("%X", 3);
// 	ASSERT_PRINTF("%X", 4294967295u);
// 	ASSERT_PRINTF("%7X", 33);
// 	ASSERT_PRINTF("%3X", 0);
// 	ASSERT_PRINTF("%5X", 52625);
// 	ASSERT_PRINTF("%2X", 94827);
// 	ASSERT_PRINTF("%-7X", 33);
// 	ASSERT_PRINTF("%-3X", 0);
// 	ASSERT_PRINTF("%-5X", 52625);
// 	ASSERT_PRINTF("%-4X", 9648627);
// 	ASSERT_PRINTF("%.5X", 21);
// 	ASSERT_PRINTF("%.3X", 0);
// 	ASSERT_PRINTF("%.4X", 5263);
// 	ASSERT_PRINTF("%.3X", 938862);
// 	ASSERT_PRINTF("%05X", 43);
// 	ASSERT_PRINTF("%03X", 0);
// 	ASSERT_PRINTF("%03X", 698334);
// 	ASSERT_PRINTF("%8.5X", 34);
// 	ASSERT_PRINTF("%8.5X", 0);
// 	ASSERT_PRINTF("%8.3X", 8375);
// 	ASSERT_PRINTF("%2.7X", 3267);
// 	ASSERT_PRINTF("%3.3X", 6983);
// 	ASSERT_PRINTF("%-8.5X", 34);
// 	ASSERT_PRINTF("%-8.5X", 0);
// 	ASSERT_PRINTF("%-8.3X", 8375);
// 	ASSERT_PRINTF("%-2.7X", 3267);
// 	ASSERT_PRINTF("%-3.3X", 6983);
// 	ASSERT_PRINTF("%08.5X", 34);
// 	ASSERT_PRINTF("%08.5X", 0);
// 	ASSERT_PRINTF("%08.3X", 8375);
// 	ASSERT_PRINTF("%02.7X", 3267);
// 	ASSERT_PRINTF("%03.3X", 6983);
// //	ASSERT_PRINTF("%0-8.5X", 34);
// //	ASSERT_PRINTF("%0-8.5X", 0);
// //	ASSERT_PRINTF("%0-8.3X", 8375);
// //	ASSERT_PRINTF("%0-2.7X", 3267);
// //	ASSERT_PRINTF("%0-3.3X", 6983);
// #ifdef FT_PRINTF_TEST_BONUS
// 	static unsigned char            uch_pos_1 = 100;
// 	static unsigned short           ush_pos_1 = 3047;
// 	static unsigned int             ui_pos_1 = 878023;
// 	static unsigned long            ul_pos_1 = 22337203685477;
// 	static unsigned long long       ull_pos_1 = 22337203685477;
// 	static unsigned long long  ullmax = 9223372036854775807;
// 	static unsigned long            ulmax = 9223372036854775807;
// 	ASSERT_PRINTF("%hhX", (unsigned char)45);
// 	ASSERT_PRINTF("%hX", (unsigned short)385);
// 	ASSERT_PRINTF("%lX", (unsigned long)32);
// 	ASSERT_PRINTF("%llX", (long long)43);
// 	ASSERT_PRINTF("%hhX", uch_pos_1);
// 	ASSERT_PRINTF("%hX", ush_pos_1);
// 	ASSERT_PRINTF("%lX", ul_pos_1);
// 	ASSERT_PRINTF("%llX", ull_pos_1);
// 	ASSERT_PRINTF("%lX", 22337203685477ul);
// 	ASSERT_PRINTF("%llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llX", ullmax);
// 	ASSERT_PRINTF("%lX", ulmax);
// 	ASSERT_PRINTF("%hX", (unsigned short)65535);
// 	ASSERT_PRINTF("%hhX", (unsigned char)255);
// 	ASSERT_PRINTF("%037lX", 22337203685477ul);
// 	ASSERT_PRINTF("%37llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%llX", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%lu%hhX", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%hX", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%u%llu%hhX", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%lX", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("this %#X number", 17);
// 	ASSERT_PRINTF("this %#X number", 0);
// 	ASSERT_PRINTF("%#X", 3);
// 	ASSERT_PRINTF("%#X", 4294967295u);
// 	ASSERT_PRINTF("%#7X", 33);
// 	ASSERT_PRINTF("%#3X", 0);
// 	ASSERT_PRINTF("%#7X", 52625);
// 	ASSERT_PRINTF("%#2X", 94827);
// 	ASSERT_PRINTF("%#-7X", 33);
// 	ASSERT_PRINTF("%#-3X", 0);
// 	ASSERT_PRINTF("%#-7X", 52625);
// 	ASSERT_PRINTF("%#-4X", 9648627);
// 	ASSERT_PRINTF("%#.5X", 21);
// 	ASSERT_PRINTF("%#.3X", 0);
// 	ASSERT_PRINTF("%#.4X", 5263);
// 	ASSERT_PRINTF("%#.3X", 938862);
// 	ASSERT_PRINTF("%#05X", 43);
// 	ASSERT_PRINTF("%#03X", 0);
// 	ASSERT_PRINTF("%#03X", 698334);
// 	ASSERT_PRINTF("%#8.5X", 34);
// 	ASSERT_PRINTF("%#8.5X", 0);
// 	ASSERT_PRINTF("%#8.3X", 8375);
// 	ASSERT_PRINTF("%#2.7X", 3267);
// 	ASSERT_PRINTF("%#3.3X", 6983);
// 	ASSERT_PRINTF("%#-8.5X", 34);
// 	ASSERT_PRINTF("%#-8.5X", 0);
// 	ASSERT_PRINTF("%#-8.3X", 8375);
// 	ASSERT_PRINTF("%#-2.7X", 3267);
// 	ASSERT_PRINTF("%#-3.3X", 6983);
// 	ASSERT_PRINTF("%#08.5X", 34);
// 	ASSERT_PRINTF("%#08.5X", 0);
// 	ASSERT_PRINTF("%#08.3X", 8375);
// 	ASSERT_PRINTF("%#02.7X", 3267);
// 	ASSERT_PRINTF("%#03.3X", 6983);
// //	ASSERT_PRINTF("%#0-8.5X", 34);
// //	ASSERT_PRINTF("%#0-8.5X", 0);
// //	ASSERT_PRINTF("%#0-8.3X", 8375);
// //	ASSERT_PRINTF("%#0-2.7X", 3267);
// //	ASSERT_PRINTF("%#0-3.3X", 6983);
// 	ASSERT_PRINTF("%#hhX", (unsigned char)45);
// 	ASSERT_PRINTF("%#hX", (unsigned short)385);
// 	ASSERT_PRINTF("%#lX", (unsigned long)32);
// 	ASSERT_PRINTF("%#llX", (long long)43);
// 	ASSERT_PRINTF("%#hhX", uch_pos_1);
// 	ASSERT_PRINTF("%#hX", ush_pos_1);
// 	ASSERT_PRINTF("%#lX", ul_pos_1);
// 	ASSERT_PRINTF("%#llX", ull_pos_1);
// 	ASSERT_PRINTF("%#lX", 22337203685477ul);
// 	ASSERT_PRINTF("%#llX", 522337203685470ull);
// 	ASSERT_PRINTF("%#llX", ullmax);
// 	ASSERT_PRINTF("%#lX", ulmax);
// 	ASSERT_PRINTF("%#hX", (unsigned short)65535);
// 	ASSERT_PRINTF("%#hhX", (unsigned char)255);
// 	ASSERT_PRINTF("%#037lX", 22337203685477ul);
// 	ASSERT_PRINTF("%#37llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%#llX", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%#hx%lu%#hhX", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%#hX", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%#x%llu%#hhX", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%#llx%u%#lX", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("%.0X", 0);
// 	ASSERT_PRINTF("%.X", 0);
// 	ASSERT_PRINTF("%5.0X", 0);
// 	ASSERT_PRINTF("%5.X", 0);
// 	ASSERT_PRINTF("%-5.0X", 0);
// 	ASSERT_PRINTF("%-5.X", 0);
// 	ASSERT_PRINTF("%#.0X", 0);
// 	ASSERT_PRINTF("%#.X", 0);
// 	ASSERT_PRINTF("%#5.0X", 0);
// 	ASSERT_PRINTF("%#5.X", 0);
// 	ASSERT_PRINTF("%#-5.0X", 0);
// 	ASSERT_PRINTF("%#-5.X", 0);
// #endif
// 	ASSERT_PRINTF("this %X number", 17);
// 	ASSERT_PRINTF("this %X number", 0);
// 	ASSERT_PRINTF("%X", 3);
// 	ASSERT_PRINTF("%X", 4294967295u);
// 	ASSERT_PRINTF("%7X", 33);
// 	ASSERT_PRINTF("%3X", 0);
// 	ASSERT_PRINTF("%5X", 52625);
// 	ASSERT_PRINTF("%2X", 94827);
// 	ASSERT_PRINTF("%-7X", 33);
// 	ASSERT_PRINTF("%-3X", 0);
// 	ASSERT_PRINTF("%-5X", 52625);
// 	ASSERT_PRINTF("%-4X", 9648627);
// 	ASSERT_PRINTF("%.5X", 21);
// 	ASSERT_PRINTF("%.3X", 0);
// 	ASSERT_PRINTF("%.4X", 5263);
// 	ASSERT_PRINTF("%.3X", 938862);
// 	ASSERT_PRINTF("%05X", 43);
// 	ASSERT_PRINTF("%03X", 0);
// 	ASSERT_PRINTF("%03X", 698334);
// 	ASSERT_PRINTF("%8.5X", 34);
// 	ASSERT_PRINTF("%8.5X", 0);
// 	ASSERT_PRINTF("%8.3X", 8375);
// 	ASSERT_PRINTF("%2.7X", 3267);
// 	ASSERT_PRINTF("%3.3X", 6983);
// 	ASSERT_PRINTF("%-8.5X", 34);
// 	ASSERT_PRINTF("%-8.5X", 0);
// 	ASSERT_PRINTF("%-8.3X", 8375);
// 	ASSERT_PRINTF("%-2.7X", 3267);
// 	ASSERT_PRINTF("%-3.3X", 6983);
// 	ASSERT_PRINTF("%08.5X", 34);
// 	ASSERT_PRINTF("%08.5X", 0);
// 	ASSERT_PRINTF("%08.3X", 8375);
// 	ASSERT_PRINTF("%02.7X", 3267);
// 	ASSERT_PRINTF("%03.3X", 6983);
// //	ASSERT_PRINTF("%0-8.5X", 34);
// //	ASSERT_PRINTF("%0-8.5X", 0);
// //	ASSERT_PRINTF("%0-8.3X", 8375);
// //	ASSERT_PRINTF("%0-2.7X", 3267);
// //	ASSERT_PRINTF("%0-3.3X", 6983);
// #ifdef FT_PRINTF_TEST_BONUS
// 	ASSERT_PRINTF("%hhX", (unsigned char)45);
// 	ASSERT_PRINTF("%hX", (unsigned short)385);
// 	ASSERT_PRINTF("%lX", (unsigned long)32);
// 	ASSERT_PRINTF("%llX", (long long)43);
// 	ASSERT_PRINTF("%hhX", uch_pos_1);
// 	ASSERT_PRINTF("%hX", ush_pos_1);
// 	ASSERT_PRINTF("%lX", ul_pos_1);
// 	ASSERT_PRINTF("%llX", ull_pos_1);
// 	ASSERT_PRINTF("%lX", 22337203685477ul);
// 	ASSERT_PRINTF("%llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llX", ullmax);
// 	ASSERT_PRINTF("%lX", ulmax);
// 	ASSERT_PRINTF("%hX", (unsigned short)65535);
// 	ASSERT_PRINTF("%hhX", (unsigned char)255);
// 	ASSERT_PRINTF("%037lX", 22337203685477ul);
// 	ASSERT_PRINTF("%37llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%llX", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%hu%lu%hhX", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%hX", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%u%llu%hhX", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%llu%u%lX", ull_pos_1, ui_pos_1, ul_pos_1);
// 	ASSERT_PRINTF("this %#X number", 17);
// 	ASSERT_PRINTF("this %#X number", 0);
// 	ASSERT_PRINTF("%#X", 3);
// 	ASSERT_PRINTF("%#X", 4294967295u);
// 	ASSERT_PRINTF("%#7X", 33);
// 	ASSERT_PRINTF("%#3X", 0);
// 	ASSERT_PRINTF("%#7X", 52625);
// 	ASSERT_PRINTF("%#2X", 94827);
// 	ASSERT_PRINTF("%#-7X", 33);
// 	ASSERT_PRINTF("%#-3X", 0);
// 	ASSERT_PRINTF("%#-7X", 52625);
// 	ASSERT_PRINTF("%#-4X", 9648627);
// 	ASSERT_PRINTF("%#.5X", 21);
// 	ASSERT_PRINTF("%#.3X", 0);
// 	ASSERT_PRINTF("%#.4X", 5263);
// 	ASSERT_PRINTF("%#.3X", 938862);
// 	ASSERT_PRINTF("%#05X", 43);
// 	ASSERT_PRINTF("%#03X", 0);
// 	ASSERT_PRINTF("%#03X", 698334);
// 	ASSERT_PRINTF("%#8.5X", 34);
// 	ASSERT_PRINTF("%#8.5X", 0);
// 	ASSERT_PRINTF("%#8.3X", 8375);
// 	ASSERT_PRINTF("%#2.7X", 3267);
// 	ASSERT_PRINTF("%#3.3X", 6983);
// 	ASSERT_PRINTF("%#-8.5X", 34);
// 	ASSERT_PRINTF("%#-8.5X", 0);
// 	ASSERT_PRINTF("%#-8.3X", 8375);
// 	ASSERT_PRINTF("%#-2.7X", 3267);
// 	ASSERT_PRINTF("%#-3.3X", 6983);
// 	ASSERT_PRINTF("%#08.5X", 34);
// 	ASSERT_PRINTF("%#08.5X", 0);
// 	ASSERT_PRINTF("%#08.3X", 8375);
// 	ASSERT_PRINTF("%#02.7X", 3267);
// 	ASSERT_PRINTF("%#03.3X", 6983);
// //	ASSERT_PRINTF("%#0-8.5X", 34);
// //	ASSERT_PRINTF("%#0-8.5X", 0);
// //	ASSERT_PRINTF("%#0-8.3X", 8375);
// //	ASSERT_PRINTF("%#0-2.7X", 3267);
// //	ASSERT_PRINTF("%#0-3.3X", 6983);
// 	ASSERT_PRINTF("%#hhX", (unsigned char)45);
// 	ASSERT_PRINTF("%#hX", (unsigned short)385);
// 	ASSERT_PRINTF("%#lX", (unsigned long)32);
// 	ASSERT_PRINTF("%#llX", (long long)43);
// 	ASSERT_PRINTF("%#hhX", uch_pos_1);
// 	ASSERT_PRINTF("%#hX", ush_pos_1);
// 	ASSERT_PRINTF("%#lX", ul_pos_1);
// 	ASSERT_PRINTF("%#llX", ull_pos_1);
// 	ASSERT_PRINTF("%#lX", 22337203685477ul);
// 	ASSERT_PRINTF("%#llX", 522337203685470ull);
// 	ASSERT_PRINTF("%#llX", ullmax);
// 	ASSERT_PRINTF("%#lX", ulmax);
// 	ASSERT_PRINTF("%#hX", (unsigned short)65535);
// 	ASSERT_PRINTF("%#hhX", (unsigned char)255);
// 	ASSERT_PRINTF("%#037lX", 22337203685477ul);
// 	ASSERT_PRINTF("%#37llX", 522337203685470ull);
// 	ASSERT_PRINTF("%llu%hhu%#llX", ull_pos_1, uch_pos_1, ull_pos_1);
// 	ASSERT_PRINTF("%#hx%lu%#hhX", ush_pos_1, ul_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%lu%hhu%#hX", ul_pos_1, uch_pos_1, ush_pos_1);
// 	ASSERT_PRINTF("%#x%llu%#hhX", ui_pos_1, ull_pos_1, uch_pos_1);
// 	ASSERT_PRINTF("%#llx%u%#lX", ull_pos_1, ui_pos_1, ul_pos_1);
// #endif
// 	ASSERT_PRINTF("%.0X", 0);
// 	ASSERT_PRINTF("%.X", 0);
// 	ASSERT_PRINTF("%5.0X", 0);
// 	ASSERT_PRINTF("%5.X", 0);
// 	ASSERT_PRINTF("%-5.0X", 0);
// 	ASSERT_PRINTF("%-5.X", 0);
// #ifdef FT_PRINTF_TEST_BONUS
// 	ASSERT_PRINTF("%#.0X", 0);
// 	ASSERT_PRINTF("%#.X", 0);
// 	ASSERT_PRINTF("%#5.0X", 0);
// 	ASSERT_PRINTF("%#5.X", 0);
// 	ASSERT_PRINTF("%#-5.0X", 0);
// 	ASSERT_PRINTF("%#-5.X", 0);
// #endif
// }
// void test_pft_ptr(void)
// {
// 	static char     a01;
// 	static unsigned char a02;
// 	static short a03;
// 	static unsigned short a04;
// 	static int a05;
// 	static unsigned int a06;
// 	static long a07;
// 	static unsigned long a08;
// 	static long long a09;
// 	static unsigned long long a10;
// 	static char *a11;
// 	static void *a12;

// 	ASSERT_PRINTF("%p", NULL);
// ////	ASSERT_PRINTF("%9.2p\n", 1234);
// ////	ASSERT_PRINTF("%2.9p\n", 1234);
// ////	ASSERT_PRINTF("%.5p", 0);
// ////	ASSERT_PRINTF("%.0p", 0);
// //	ASSERT_PRINTF("%5p", 0);
// 	ASSERT_PRINTF("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// 	ASSERT_PRINTF("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
// }

// void test_pft_char(void)
// {
// 	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
// %c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',',
// '-','.','/','0','1','2','3','4','5','6','7','8','9',':',';', '<','=','>','?','@','A','B',
// 'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
// 'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h', 'i','j','k','l','m','n','o',
// 'p','q','r','s','t','u','v','w','x','y','z','{','|','~');

// 	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
// 			(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char) 9,
// 			(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,
// 			(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,
// 			(char)26,(char)27,(char)28,(char)29 ,(char)30,(char)31);

// 	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
// %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
// (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,
// (char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,
// (char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,
// (char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
// (char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,
// (char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,
// (char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,
// (char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,
// (char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,
// (char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,
// (char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
// (char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,
// (char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,
// (char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);

// 	ASSERT_PRINTF("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
// %2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
// //%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c",
// ' ','!','"','#','$', '%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',
// ';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U',
// 'V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
// 'q','r','s','t','u','v','w','x','y','z','{','|','~');

// 	ASSERT_PRINTF("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
// 			(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,
// 			(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
// 			(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);

// 	ASSERT_PRINTF("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
// %4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
// %1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
// %1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
// (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,
// (char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,
// (char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,
// (char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,
// (char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,
// (char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,
// (char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,
// (char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,
// (char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
// (char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,
// (char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,
// (char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);

// 	ASSERT_PRINTF("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
// %-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
// %-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
// //%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c",
// ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<',
// '=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
// 'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
// 'v','w','x','y','z','{','|','~');

// 	ASSERT_PRINTF("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
// %-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,
// (char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
// (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);

// 	ASSERT_PRINTF("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
// %-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
// %-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
// %-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
// %-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,
// (char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,
// (char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,
// (char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
// (char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,
// (char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,
// (char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,
// (char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,
// (char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,
// (char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,
// (char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,
// (char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,
// (char)252,(char)253,(char)254,(char)255);

// 	ASSERT_PRINTF("%c", '\0');
// 	ASSERT_PRINTF("%5c", '\0');
// 	ASSERT_PRINTF("%-5c", '\0');
// }


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////



void test_moulitest_00(void)
{
	ASSERT_PRINTF("This is a simple test.");
	ASSERT_PRINTF("This is a simple test.\nSecond sentence.\n");
	ASSERT_PRINTF("");
	ASSERT_PRINTF("\n");
}

void test_moulitest_01(void)
{
	ASSERT_PRINTF("%s", "abc");
	ASSERT_PRINTF("111%s333", "222");
	ASSERT_PRINTF("%s333", "222");
	ASSERT_PRINTF("111%s", "222");
//	ASSERT_PRINTF("{%s}", 0);
	ASSERT_PRINTF("{%s}", "");
}

void test_moulitest_02(void)
{
	ASSERT_PRINTF("111%s333%s555", "222", "444");
	ASSERT_PRINTF("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb");
	ASSERT_PRINTF("%s%s%s%s%s", "1", "2", "3", "4", "5");
}

void test_moulitest_03(void)
{
	ASSERT_PRINTF("%d", 42);
	ASSERT_PRINTF("%d", -42);
	ASSERT_PRINTF("before %d after", 42);
	ASSERT_PRINTF("%d%d%d%d%d", 1, -2, 3, -4, 5);
	ASSERT_PRINTF("a%db%dc%dd", 1, -2, 3);
	ASSERT_PRINTF("%d", INT_MAX);
	ASSERT_PRINTF("%d", INT_MIN);
}

void test_moulitest_04(void)
{
	int i;
	unsigned long l;
	char *str;

	ASSERT_PRINTF("%p", &i);
	ASSERT_PRINTF("%p", &l);
	ASSERT_PRINTF("%p", &str);
	ASSERT_PRINTF("%p", &strlen);
//	ASSERT_PRINTF("%p", 0);
}

void test_moulitest_05(void)
{
	ASSERT_PRINTF("%%");
	ASSERT_PRINTF("aa%%bb");
	ASSERT_PRINTF("%%%%%%%%%%");
	ASSERT_PRINTF(".%%.%%.%%.%%.%%.%%.%%.%%.");
//	ASSERT_PRINTF("%");
#ifdef FT_PRINTF_TEST_BONUS
	ASSERT_PRINTF("{% %}");
#endif
}

void test_moulitest_06(void)
{
	ASSERT_PRINTF("s: %s, p: %p, d:%d", "a string", &test_moulitest_06, 42);
	ASSERT_PRINTF("%s%p%d%d%p%s%p%p%s", "a", &free, 1, 2, &malloc, "b", &free, &malloc, "c");
}

void test_moulitest_09(void)
{
	ASSERT_PRINTF("%i", 42);
	ASSERT_PRINTF("%i", -42);
	ASSERT_PRINTF("before %i after", 42);
	ASSERT_PRINTF("%i%i%i%i%i", 1, -2, 3, -4, 5);
	ASSERT_PRINTF("a%ib%ic%id", 1, -2, 3);
}

void test_moulitest_12(void)
{
	ASSERT_PRINTF("%u", 42);
	ASSERT_PRINTF("before %u after", 42);
	ASSERT_PRINTF("%u%u%u%u%u", 1, 100, 999, 42, 999988888);
	ASSERT_PRINTF("a%ub%uc%ud", 0, 55555, 100000);
	ASSERT_PRINTF("%u", UINT_MAX);
}

void test_moulitest_14(void)
{
	ASSERT_PRINTF("%x", 42);
	ASSERT_PRINTF("before %x after", 42);
	ASSERT_PRINTF("%x%x%x%x%x", 1, 100, 999, 42, 999988888);
	ASSERT_PRINTF("a%xb%xc%xd", 0, 55555, 100000);
	ASSERT_PRINTF("%x, %x", 0, UINT_MAX);
}

void test_moulitest_15(void)
{
	ASSERT_PRINTF("%X", 42);
	ASSERT_PRINTF("before %X after", 42);
	ASSERT_PRINTF("%X%X%X%X%X", 1, 100, 999, 42, 999988888);
	ASSERT_PRINTF("a%Xb%Xc%Xd", 0, 55555, 100000);
	ASSERT_PRINTF("%X, %X", 0, UINT_MAX);
}

void test_moulitest_16(void)
{
	ASSERT_PRINTF("%c", 'c');
	ASSERT_PRINTF("%c%c", '4', '2');
	/* ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \ */
	/* 	   	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\ */
	/* 	   	%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", */
	/* 	   	' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', */
	/* 	   	'/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', */
	/* 	   	'>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', */
	/* 	   	'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', */
	/* 	   	']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', */
//			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}');
	ASSERT_PRINTF("%c", 0);
}

void test_moulitest_18(void)
{
	/* char c; */
	ASSERT_PRINTF("%s %d %p %% %x", "bonjour ", 42, &free, 42);
	/* ASSERT_PRINTF("%s%d%p%%%i%o%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 42, 'c'); */
}

void test_moulitest_40(void)
{
	ASSERT_PRINTF("%ld%ld", 0l, 42l);
	ASSERT_PRINTF("%ld", (long)INT_MAX + 1);
	ASSERT_PRINTF("%ld", (long)INT_MIN - 1);
	ASSERT_PRINTF("%ld", LONG_MAX);
	ASSERT_PRINTF("%ld", LONG_MIN);
	ASSERT_PRINTF("%li%li", 0l, 42l);
	ASSERT_PRINTF("%li", (long)INT_MAX + 1);
	ASSERT_PRINTF("%li", (long)INT_MIN - 1);
	ASSERT_PRINTF("%li", LONG_MAX);
	ASSERT_PRINTF("%li", LONG_MIN);
	ASSERT_PRINTF("%lu, %lu", 0ul, ULONG_MAX);
	ASSERT_PRINTF("%lx, %lx", 0ul, ULONG_MAX);
	ASSERT_PRINTF("%lX, %lX", 0ul, ULONG_MAX);
	/* ASSERT_PRINTF("%lc, %lc", L'暖', L'ح'); */
}

void test_moulitest_41(void)
{
	ASSERT_PRINTF("%lld%lld", 0ll, 42ll);
	ASSERT_PRINTF("%lld", LLONG_MAX);
	ASSERT_PRINTF("%lld", LLONG_MIN);
	ASSERT_PRINTF("%lli%lli", 0ll, 42ll);
	ASSERT_PRINTF("%lli", LLONG_MAX);
	ASSERT_PRINTF("%lli", LLONG_MIN);
	ASSERT_PRINTF("%llu, %llu", 0llu, ULLONG_MAX);
	ASSERT_PRINTF("%llx, %llx", 0llu, ULLONG_MAX);
	ASSERT_PRINTF("%llX, %llX", 0llu, ULLONG_MAX);
}

void test_moulitest_42(void)
{
	ASSERT_PRINTF("%hd%hd", (short int)0, (short int)42);
//	ASSERT_PRINTF("%hd", SHRT_MAX);
//	ASSERT_PRINTF("%hd", SHRT_MIN);
////	ASSERT_PRINTF("%hi%hi", 0, 42);
//	ASSERT_PRINTF("%hi", SHRT_MAX);
//	ASSERT_PRINTF("%hi", SHRT_MIN);
////	ASSERT_PRINTF("%hu, %hu", 0, USHRT_MAX);
////	ASSERT_PRINTF("%hx, %hx", 0, USHRT_MAX);
////	ASSERT_PRINTF("%hX, %hX", 0, USHRT_MAX);
}

void test_moulitest_43(void)
{
////	ASSERT_PRINTF("%hhd%hhd", 1, 42);
//	ASSERT_PRINTF("%hhd", CHAR_MAX);
//	ASSERT_PRINTF("%hhd", CHAR_MAX + 42);
//	ASSERT_PRINTF("%hhd", CHAR_MIN);
//	ASSERT_PRINTF("%hhd", CHAR_MIN - 42);
////	ASSERT_PRINTF("%hhi%hhi", 0, 42);
//	ASSERT_PRINTF("%hhd", CHAR_MAX);
//	ASSERT_PRINTF("%hhd", CHAR_MAX + 42);
//	ASSERT_PRINTF("%hhi", CHAR_MIN);
//	ASSERT_PRINTF("%hhi", CHAR_MIN - 42);
////	ASSERT_PRINTF("%hhu, %hhu", 0, UCHAR_MAX);
////	ASSERT_PRINTF("%hhx, %hhx", 0, UCHAR_MAX);
////	ASSERT_PRINTF("%hhX, %hhX", 0, UCHAR_MAX);
////	ASSERT_PRINTF("%hhu, %hhu", 0, UCHAR_MAX + 42);
////	ASSERT_PRINTF("%hhx, %hhx", 0, UCHAR_MAX + 42);
////	ASSERT_PRINTF("%hhX, %hhX", 0, UCHAR_MAX + 42);
}

void test_moulitest_45(void)
{
////	ASSERT_PRINTF("%lp", 42);
}

void test_moulitest_50(void)
{
	ASSERT_PRINTF("{%10d}", 42);
	ASSERT_PRINTF("{%4d}", 10000);
	ASSERT_PRINTF("{%30d}", 10000);
	ASSERT_PRINTF("{%10d}", -42);
	ASSERT_PRINTF("{%3c}", 0);
//	ASSERT_PRINTF("{%5p}", 0);
//	ASSERT_PRINTF("{%-15p}", 0);
	ASSERT_PRINTF("{%-13p}", &strlen);
	ASSERT_PRINTF("{%-12p}", &strlen);
}

void test_moulitest_51(void)
{
	ASSERT_PRINTF("{%-10d}", 42);
	ASSERT_PRINTF("{%-4d}", 10000);
	ASSERT_PRINTF("{%-30d}", 10000);
}

void test_moulitest_52(void)
{
	ASSERT_PRINTF("{%010d}", -42);
	ASSERT_PRINTF("{%04d}", 10000);
	ASSERT_PRINTF("{%030d}", 10000);
	ASSERT_PRINTF("{%030x}", 0xFFFF);
	ASSERT_PRINTF("{%030X}", 0xFFFF);
}

void test_moulitest_60(void)
{
	ASSERT_PRINTF("%#x", 42);
	ASSERT_PRINTF("%#x", 0);
	ASSERT_PRINTF("%#x", INT_MAX);
	ASSERT_PRINTF("%#X", 42);
	ASSERT_PRINTF("%#X", 0);
	ASSERT_PRINTF("%#X", INT_MAX);
//	ASSERT_PRINTF("%#c", 0);
}

void test_moulitest_61(void)
{
	ASSERT_PRINTF("%+d", 42);
	ASSERT_PRINTF("%+d", -42);
	ASSERT_PRINTF("%+i", 42);
	ASSERT_PRINTF("%+i", -42);
	ASSERT_PRINTF("% d", 9999);
	ASSERT_PRINTF("% d", -9999);
	ASSERT_PRINTF("% i", 9999);
	ASSERT_PRINTF("% i", -9999);
}

void test_moulitest_69(void)
{
#ifdef FT_PRINTF_TEST_BONUS
//	ASSERT_PRINTF("{% +d}", 42);
//	ASSERT_PRINTF("{%+ d}", 42);
	ASSERT_PRINTF("{%+03d}", 0);
	ASSERT_PRINTF("{% 03d}", 0);
	ASSERT_PRINTF("{%+03d}", 12);
	ASSERT_PRINTF("{%+03d}", 123456);
#endif
//	ASSERT_PRINTF("{%0-3d}", 0);
	ASSERT_PRINTF("{%03.2d}", 0);
}

void test_moulitest_70(void)
{
	ASSERT_PRINTF("%.4d", 42);
	ASSERT_PRINTF("%.4d", 424242);
	ASSERT_PRINTF("%.4d", -424242);
	ASSERT_PRINTF("%15.4d", 42);
	ASSERT_PRINTF("%15.4d", 424242);
	ASSERT_PRINTF("%8.4d", 424242424);
	ASSERT_PRINTF("%15.4d", -42);
	ASSERT_PRINTF("%15.4d", -424242);
	ASSERT_PRINTF("%8.4d", -424242424);
	ASSERT_PRINTF("%4.15d", 42);
	ASSERT_PRINTF("%4.15d", 424242);
	ASSERT_PRINTF("%4.8d", 424242424);
	ASSERT_PRINTF("%4.15d", -42);
	ASSERT_PRINTF("%4.15d", -424242);
	ASSERT_PRINTF("%4.8d", -424242424);
	ASSERT_PRINTF("%.d, %.0d", 0, 0);
	ASSERT_PRINTF("%.10d", -42);
	ASSERT_PRINTF("%.4i", 42);
	ASSERT_PRINTF("%15.4i", 42);
	ASSERT_PRINTF("%4.15i", 42);
	ASSERT_PRINTF("%.i, %.0i", 0, 0);
	ASSERT_PRINTF("%.4u", 42);
	ASSERT_PRINTF("%.4u", 424242);
	ASSERT_PRINTF("%15.4u", 42);
	ASSERT_PRINTF("%15.4u", 424242);
	ASSERT_PRINTF("%8.4u", 424242424);
	ASSERT_PRINTF("%4.15u", 42);
	ASSERT_PRINTF("%4.15u", 424242);
	ASSERT_PRINTF("%4.8u", 424242424);
	ASSERT_PRINTF("%.u, %.0u", 0, 0);
}

void test_moulitest_71(void)
{
	ASSERT_PRINTF("%.4x", 42);
	ASSERT_PRINTF("%.4x", 424242);
	ASSERT_PRINTF("%15.4x", 42);
	ASSERT_PRINTF("%15.4x", 424242);
	ASSERT_PRINTF("%8.4x", 424242424);
	ASSERT_PRINTF("%4.15x", 42);
	ASSERT_PRINTF("%4.15x", 42424242);
	ASSERT_PRINTF("%4.8x", 424242424);
	ASSERT_PRINTF("%.x, %.0x", 0, 0);
	ASSERT_PRINTF("%.4X", 42);
	ASSERT_PRINTF("%.4X", 424242);
	ASSERT_PRINTF("%15.4X", 42);
	ASSERT_PRINTF("%15.4X", 424242);
	ASSERT_PRINTF("%8.4X", 424242424);
	ASSERT_PRINTF("%4.15X", 42);
	ASSERT_PRINTF("%4.15X", 424242);
	ASSERT_PRINTF("%4.8X", 424242424);
	ASSERT_PRINTF("%.X, %.0X", 0, 0);
}

void test_moulitest_72(void)
{
	ASSERT_PRINTF("%.4s", "42");
	ASSERT_PRINTF("%.4s", "42 is the answer");
	ASSERT_PRINTF("%15.4s", "42");
	ASSERT_PRINTF("%15.4s", "I am 42");
	ASSERT_PRINTF("%15.4s", "42 is the answer");
	ASSERT_PRINTF("%4.15s", "42");
	ASSERT_PRINTF("%4.15s", "I am 42");
	ASSERT_PRINTF("%4.15s", "42 is the answer");
	ASSERT_PRINTF("%4.s", "42");
}

void test_moulitest_73(void)
{
	ASSERT_PRINTF("%.c", 0);
//	ASSERT_PRINTF("%.5c", 0);
//	ASSERT_PRINTF("%.5c", 42);
}

void test_moulitest_74(void)
{
//////	ASSERT_PRINTF("%.0p, %.p", 0, 0);
////	ASSERT_PRINTF("%.5p", 0);
////	ASSERT_PRINTF("%9.2p", 1234);
////	ASSERT_PRINTF("%9.2p", 1234567);
////	ASSERT_PRINTF("%2.9p", 1234);
////	ASSERT_PRINTF("%2.9p", 1234567);
}

void test_moulitest_79(void)
{
#ifdef FT_PRINTF_TEST_BONUS
	ASSERT_PRINTF("%#.x, %#.0x", 0, 0);
	ASSERT_PRINTF("{%#.5x}", 1);
#endif
//////	ASSERT_PRINTF("%.p, %.0p", 0, 0);
}

void test_moulitest_90(void)
{
#ifdef FT_PRINTF_TEST_BONUS
////	ASSERT_PRINTF("%hhd - %hhd", SHRT_MAX - 42,  SHRT_MAX - 4200);
#endif
}

void test_moulitest_91(void)
{
	ASSERT_PRINTF("%u", -42);
	ASSERT_PRINTF("%u", UINT_MAX + 1);
	ASSERT_PRINTF("%c", 200);
//	ASSERT_PRINTF("%hhu / %hhu", SHRT_MAX - 42,  SHRT_MAX - 4200);
}

void test_moulitest_wildcard_01(void)
{
//	ASSERT_PRINTF("%*d", 5, 42);
//	ASSERT_PRINTF("{%*d}", -5, 42);
//	ASSERT_PRINTF("{%*d}", 0, 42);
//	ASSERT_PRINTF("{%*c}", 0, 0);
//	ASSERT_PRINTF("{%*c}", -15, 0);
//	ASSERT_PRINTF("{%.*d}", 5, 42);
//	ASSERT_PRINTF("{%.*d}", -5, 42);
//	ASSERT_PRINTF("{%.*d}", 0, 42);
//	ASSERT_PRINTF("{%.*s}", 5, "42");
//	ASSERT_PRINTF("{%.*s}", -5, "42");
//	ASSERT_PRINTF("{%.*s}", 0, "42");
//	ASSERT_PRINTF("{%*s}", 5, 0);
//	ASSERT_PRINTF("{%*p}", 10, 0);
}

void test_moulitest_wildcard_02(void)
{
//	ASSERT_PRINTF("%*.*d", 0, 3, 0);
}

void test_moulitest_wildcard_03(void)
{
////	ASSERT_PRINTF("{%*3d}", 5, 0);
//	ASSERT_PRINTF("{%05.*d}", -15, 42);
}




/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////







void test_printf_tester(void)
{
	int t = 50;
//	char c = 'a';

#ifdef FT_PRINTF_TEST_BONUS
//	ASSERT_PRINTF("p0 % .3s\n", "cccc");
#endif
	ASSERT_PRINTF("pp %.50d\n", 10000);
	ASSERT_PRINTF("p1 %.4s\n", "cccc");
	ASSERT_PRINTF("p2 %.10s\n", "cccc");
	ASSERT_PRINTF("p3 %.4s\n", NULL);
	ASSERT_PRINTF("p4 %.5s\n", "aaaaa");
	ASSERT_PRINTF("p5 %.3d\n", 100);
	ASSERT_PRINTF("p6 %.0d\n", 100);
	ASSERT_PRINTF("p7 %.4d\n", 100);
	ASSERT_PRINTF("p8 %.10d\n", 100);
	ASSERT_PRINTF("p9 %.50d\n", 100);
	ASSERT_PRINTF("p10 %.1d\n", 100);
	ASSERT_PRINTF("p11 %.3d\n", 100);
	ASSERT_PRINTF("p12 %.0d\n", 0);
	ASSERT_PRINTF("p13 %.3i\n", 100);
	ASSERT_PRINTF("p14 %.0i\n", 100);
	ASSERT_PRINTF("p15 %.4i\n", 100);
	ASSERT_PRINTF("p16 %.10i\n", 100);
	ASSERT_PRINTF("p17 %.50i\n", 100);
	ASSERT_PRINTF("p18 %.1i\n", 100);
	ASSERT_PRINTF("p19 %.3x\n", 100);
	ASSERT_PRINTF("p20 %.0x\n", 0);
	ASSERT_PRINTF("p21 %.3x\n", 100);
	ASSERT_PRINTF("p22 %.0x\n", 100);
	ASSERT_PRINTF("p23 %.4x\n", 100);
	ASSERT_PRINTF("p24 %.10x\n", 100);
	ASSERT_PRINTF("p25 %.50x\n", 100);
	ASSERT_PRINTF("p26 %.1x\n", 100);
	ASSERT_PRINTF("p27 %.3x\n", 100);
	ASSERT_PRINTF("p28 %.0x\n", 0);
	ASSERT_PRINTF("p29 %.3u\n", 100);
	ASSERT_PRINTF("p30 %.0u\n", 100);
	ASSERT_PRINTF("p31 %.4u\n", 100);
	ASSERT_PRINTF("p32 %.10u\n", 100);
	ASSERT_PRINTF("p33 %.50u\n", 100);
	ASSERT_PRINTF("p34 %.1u\n", 100);
	ASSERT_PRINTF("p35 %.3u\n", 100);
	ASSERT_PRINTF("p36 %.0u\n", 0);
	ASSERT_PRINTF("%%\n");
	ASSERT_PRINTF("Hello 42 school! %s", NULL);
	//ASSERT_PRINTF("%010%");
//	ASSERT_PRINTF("%u", 4294967295);
	ASSERT_PRINTF("%d\n", 2147483647);
//	ASSERT_PRINTF("%d\n", -2147483648);
	ASSERT_PRINTF("%x\n", 2147483647);
//	ASSERT_PRINTF("%x\n", -2147483648);
	ASSERT_PRINTF("%X\n", 2147483647);
//	ASSERT_PRINTF("%X\n", -2147483648);
	ASSERT_PRINTF("%x\n", 0);
	ASSERT_PRINTF("%010x\n", 0);
	ASSERT_PRINTF("%010x\n", 20);
	ASSERT_PRINTF("%010x\n", -20);
	ASSERT_PRINTF("%10x\n", 20);
	ASSERT_PRINTF("%10.2x\n", -20);
	ASSERT_PRINTF("%-10x\n", 50);
	ASSERT_PRINTF("%-15x\n", 0);
	ASSERT_PRINTF("%.1x\n", 500);
//	ASSERT_PRINTF("%*.*x\n", 50, 10, 2);
	ASSERT_PRINTF("%x\n", -1);
//	ASSERT_PRINTF("%");
	ASSERT_PRINTF("%40.50d\n", 50);
	ASSERT_PRINTF("%d\n", -589);
	ASSERT_PRINTF("%-4d\n", -2464);
	ASSERT_PRINTF("%.5d\n", -2372);
	ASSERT_PRINTF("%p\n", NULL);
//	ASSERT_PRINTF("%015p\n", NULL);
	ASSERT_PRINTF("%15p\n", NULL);
	ASSERT_PRINTF("%-15p\n", NULL);
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%010d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%10d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%.5d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%01.1d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%010.1d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%01.50d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%1.50d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%0100.50d]\n", -8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%010d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%10d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%.5d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%01.1d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%010.1d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%01.50d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%1.50d]\n", 8473)); */
	/* ASSERT_PRINTF("ret = %d\n", printf("%%p::[%0100.50d]\n", 8473)); */
	ASSERT_PRINTF("%c", 'a');
	ASSERT_PRINTF("%10c", 't');
	ASSERT_PRINTF("%1c", 'y');
//	ASSERT_PRINTF("%010c", 't');
	ASSERT_PRINTF("%50.2s", "Coucou");
	ASSERT_PRINTF("%50.2s", NULL);
	ASSERT_PRINTF("%5.0s", "Hello");
	ASSERT_PRINTF("%.1s", "Test");
	ASSERT_PRINTF("%10s", NULL);
	ASSERT_PRINTF("%10s", "Ok");
	/* ASSERT_PRINTF("%d\n", printf("Les bornes :  %d, %d\n", -2147483648, 2147483647)); */
	/* ASSERT_PRINTF("%d\n", printf("Les bornes :  %u, %u\n", 0, 4294967295)); */
	/* ASSERT_PRINTF("%d\n", printf("Les bornes :  %x, %x\n", 0, 4294967295)); */
	/* ASSERT_PRINTF("%d\n", printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n", printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42)); */
#ifdef FT_PRINTF_TEST_BONUS
	ASSERT_PRINTF("%    i\n", -60);
	ASSERT_PRINTF("%   i\n", -60);
#endif
	ASSERT_PRINTF("%1p\n", &t);
	ASSERT_PRINTF("%1p\n", &t);
	ASSERT_PRINTF("t1 %050d\n", 10);
	ASSERT_PRINTF("t2 %-50d\n", 10);
	ASSERT_PRINTF("t3 %50.0d\n", 10);
	ASSERT_PRINTF("t4 %50.50d\n", 10);
	ASSERT_PRINTF("t5 %50.10d\n", 10);
	//ASSERT_PRINTF("t6 %*.*d\n", 50,  5, 10);
	ASSERT_PRINTF("t7 %1.50d\n", -10);
	ASSERT_PRINTF("t8 %1.50d\n", 10);
	ASSERT_PRINTF("t9 %2.2d\n", 10);
	ASSERT_PRINTF("t10 %2.2d\n", -10);
	ASSERT_PRINTF("t12 %.0d\n", 0);
	ASSERT_PRINTF("t13 %01d\n", -20);
	ASSERT_PRINTF("t14 %10d\n", 1000);
	/* ASSERT_PRINTF("%d\n\n", printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6)); */
	/* ASSERT_PRINTF("%d\n\n", printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c')); */
	ASSERT_PRINTF("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
#ifdef FT_PRINTF_TEST_BONUS
////	ASSERT_PRINTF("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c');
#endif
	/* ASSERT_PRINTF("%d\n\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n\n", 42, 6, 6, 6)); */
	/* ASSERT_PRINTF("%d\n\n", printf("1pointeur 1 %p pointeur 2 %p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("3pointeur 1 %   p pointeur 2 % p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4pointeur 1 %12p pointeur 2 %12p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4pointeur 1 %-12p pointeur 2 %-12p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c)); */
	/* ASSERT_PRINTF("%d\n\n", printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6)); */
	/* ASSERT_PRINTF("%d\n\n", printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42)); */
	/* ASSERT_PRINTF("%d\n\n", printf("%s", 0)); */
	/* ASSERT_PRINTF("%d\n\n", printf("%%\n"));  */
	/* ASSERT_PRINTF("%d\n\n", printf("%-.12u\n", -20000000)); */
	/* ASSERT_PRINTF("%d\n\n", printf("%-.12i\n", -20000000)); */
	/* ASSERT_PRINTF("%d\n", printf("truc")); */
	/* ASSERT_PRINTF("%d\n", printf("bonjour !\n", 42, -42)); */
	ASSERT_PRINTF("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	/* ASSERT_PRINTF("%d\n", printf("03 This is a float : %f\n\n", 45.236)); */
	/* ASSERT_PRINTF("%d\n", printf("02 This is a float : %.3f\n\n", 45.236)); */
	/* ASSERT_PRINTF("%d\n", printf("01 This is a float : %3f\n\n", 45.236)); */
	/* ASSERT_PRINTF("%d\n", printf("000 This is a float : %f\n\n", -45.236)); */
	/* ASSERT_PRINTF("%d\n", printf("0 This is a float : %.3f\n\n", -45.236)); */
	/* ASSERT_PRINTF("%d\n", printf("00 This is a float : %3f\n\n", -45.236)); */
	/* ASSERT_PRINTF("1 This is a float : %f\n\n", 0.00025); */
	/* ASSERT_PRINTF("2 This is a float : %.3f\n\n", 0.00025); */
	/* ASSERT_PRINTF("3 This is a float : %3f\n\n", 0.00025); */
	/* ASSERT_PRINTF("4 This is a float : %f\n\n", -0.00025); */
	/* ASSERT_PRINTF("5 This is a float : %f\n\n", -0.00025); */
	/* ASSERT_PRINTF("6 This is a float : %.3f\n\n", -0.00025); */
	/* ASSERT_PRINTF("7 This is a float : %3f\n\n", -0.00025); */
	/* ASSERT_PRINTF("8 This is a float : %3f\n\n", 1.0 / 0.0); */
	/* ASSERT_PRINTF("9 This is a float : %3f\n\n", -1.0 / 0.0); */
	/* ASSERT_PRINTF("10 This is a float : %3f\n\n", 0.0 / 0.0); */
	/* ASSERT_PRINTF("11 This is a float : %3f\n\n", -0.0 / 0.0); */
	/* ASSERT_PRINTF("12 This is a float : %.0f\n\n", 2.5); */
	/* ASSERT_PRINTF("13 This is a float : %.0f\n\n", 3.5); */
	/* ASSERT_PRINTF("14 This is a float : %.0f\n\n", -2.5); */
	/* ASSERT_PRINTF("15 This is a float : %.0f\n\n", -3.5); */
	/* ASSERT_PRINTF("16 This is a float : %.0f\n\n", 2.51); */
	/* ASSERT_PRINTF("17 This is a float : %.0f\n\n", 3.51); */
	/* ASSERT_PRINTF("18 This is a float : %10.0f\n\n", -2.51); */
	/* ASSERT_PRINTF("19 This is a float : %10.0f\n\n", -3.51); */
	/* ASSERT_PRINTF("20 This is a float : %10.5f\n\n", -2.51); */
	/* ASSERT_PRINTF("21 This is a float : %10.5f\n\n", -3.51); */
	/* ASSERT_PRINTF("22 This is a float : %10.5f\n\n", 2.51); */
	/* ASSERT_PRINTF("23 This is a float : %10.5f\n\n", 3.51); */
	/* ASSERT_PRINTF("24 This is a float : %10.0f\n\n", 2.51); */
	/* ASSERT_PRINTF("25 This is a float : %10.0f\n\n", 3.51); */
	/* ASSERT_PRINTF("26 This is a float : %010f\n\n", 2.51); */
	/* ASSERT_PRINTF("27 This is a float : %-10f\n\n", 3.51); */
	/* ASSERT_PRINTF("28 This is a float : %015f\n\n", 2.51); */
	/* ASSERT_PRINTF("29 This is a float : %15f\n\n", 3.51); */
	/* ASSERT_PRINTF("30 This is a float : %.0f\n\n", 0.0); */
	ASSERT_PRINTF("31 This is an int : %.0d\n\n", 0);
	ASSERT_PRINTF("32 This is an int : %0d\n\n", 0);
	//ASSERT_PRINTF("percent 1 %012%");
	ASSERT_PRINTF("percent 2 %12%");
	ASSERT_PRINTF("percent 3 %-12%");
	ASSERT_PRINTF("percent 4 %0%");
#ifdef FT_PRINTF_TEST_BONUS
	ASSERT_PRINTF("percent 5 % %");
	ASSERT_PRINTF("percent 6 % 15%");
	ASSERT_PRINTF("percent 7 % 12%");
	//ASSERT_PRINTF("percent 8 %  *%", 13);
	ASSERT_PRINTF("%n", &t);
	ASSERT_PRINTF("test %n", &t);
	ASSERT_PRINTF("%s %n", "hello world", &t);
#endif
	ASSERT_PRINTF("%d\n", t);
//	ASSERT_PRINTF("%n", NULL);
	ASSERT_PRINTF("%d\n", t);
	ASSERT_PRINTF("%d\n", t);
	ASSERT_PRINTF("%d\n", t);
#ifdef FT_PRINTF_TEST_BONUS
//	ASSERT_PRINTF("% .1s %n", "hey", &t);
	ASSERT_PRINTF("%40s %n", "co", &t);
	ASSERT_PRINTF("%050d%n", 500, &t);
#endif
	ASSERT_PRINTF("%d\n", t);
	ASSERT_PRINTF("%d\n", t);
	ASSERT_PRINTF("%d\n", t);
	/* ASSERT_PRINTF("%d\n\n", printf("1string 1 %s string 2 %s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("3string 1 %   s string 2 % s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour")); */
	/* ASSERT_PRINTF("%d\n\n", printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour")); */
//	ASSERT_PRINTF("st1 %*.*d\n", 10, 10, 50);
//	ASSERT_PRINTF("st2 %*.*d\n", 1, 50, 50);
//	ASSERT_PRINTF("st3 %*.*d\n", 0, 0, 50);
//	ASSERT_PRINTF("st4 %*.*d\n", 0, 50, 50);
//	ASSERT_PRINTF("st5 %*.*d\n", 10, 0, 50);
//	ASSERT_PRINTF("st6 %*.*d\n", 10, 10, 50);
//	ASSERT_PRINTF("st12 %*d\n", 10, 50);
//	ASSERT_PRINTF("st13 %*d\n", 0, 0);
//	ASSERT_PRINTF("st14 %.*d\n", 0, 0);
//	ASSERT_PRINTF("st15 %*d\n", 50, 5);
//	ASSERT_PRINTF("st16 %0.*d\n", 50, 5);
//	ASSERT_PRINTF("st17 %0.*d\n", 0, 0);
//	ASSERT_PRINTF("st7 %*.*s\n", 1, 50, "hey");
//	ASSERT_PRINTF("st8 %*.*s\n", 0, 0, "coucou");
//	ASSERT_PRINTF("st9 %*.*s\n", 0, 50, "hey");
//	ASSERT_PRINTF("st10 %*.*s\n", 10, 0, "dsa");
//	ASSERT_PRINTF("st11 %*.*s\n", 10, 10, "hello");
//	ASSERT_PRINTF("st7 %0.*s\n", 50, "hey");
//	ASSERT_PRINTF("st8 %.*s\n", 0, "coucou");
//	ASSERT_PRINTF("st9 %*s\n", 0, "hey");
//	ASSERT_PRINTF("st10 %*s\n", 10, "dsa");
//	ASSERT_PRINTF("st118 %*s\n", 100, "hello");
//	ASSERT_PRINTF("st119 %*s\n", 1000, "hello");
//	ASSERT_PRINTF("st120 %*s\n", 10000, "hello");
	/* ASSERT_PRINTF("st121 %*s\n", 100000, "hello"); */ // can't read so much for now
//	ASSERT_PRINTF("st118 %*d\n", 100, 0);
//	ASSERT_PRINTF("st119 %*d\n", 1000, 10);
//	ASSERT_PRINTF("st120 %*d\n", 10000, 467);
	/* ASSERT_PRINTF("st121 %*d\n", 100000, -589); */
//	ASSERT_PRINTF("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
//	ASSERT_PRINTF("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
//	ASSERT_PRINTF("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
//	ASSERT_PRINTF("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
//	ASSERT_PRINTF("ultimate5 %*.*u\n", 1, 50, 5000);
//	ASSERT_PRINTF("neg1 %*s\n", -9, "coucou");
//	ASSERT_PRINTF("neg2 %*.*s\n", -9, 4, "coucou");
//	ASSERT_PRINTF("neg3 %*s\n", -9, NULL);
//	ASSERT_PRINTF("neg4 %*.*s\n", 0, 0, "coucou");
//	ASSERT_PRINTF("neg5 %*s\n", -100, "coucou");
//	ASSERT_PRINTF("neg6 %*s\n", -156, "coucou");
//	ASSERT_PRINTF("neg7 %*.*s\n", -1586, 15, "coucou");
	ASSERT_PRINTF("taaa %100s\n", "hello");
}



/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


void test_printf_tests_test(void)
{

	ASSERT_PRINTF("Hallo heimur");

	ASSERT_PRINTF("%s",       "Hallo heimur");
	ASSERT_PRINTF("%d",       1024);
	ASSERT_PRINTF("%d",       -1024);
	ASSERT_PRINTF("%i",       1024);
	ASSERT_PRINTF("%i",       -1024);
	ASSERT_PRINTF("%u",       1024u);
	ASSERT_PRINTF("%u",       -1024u);
	/* TEST("777",             3, "%o",       0777u) */
	/* TEST("37777777001",    11, "%o",       -0777u) */
	ASSERT_PRINTF("%x",       0x1234abcdu);
	ASSERT_PRINTF("%x",       -0x1234abcdu);
	ASSERT_PRINTF("%X",       0x1234abcdu);
	ASSERT_PRINTF("%X",       -0x1234abcdu);
	ASSERT_PRINTF("%c",       'x');
	ASSERT_PRINTF("%%");

	ASSERT_PRINTF("%c",       '\0');

#ifdef FT_PRINTF_TEST_BONUS
//	ASSERT_PRINTF("%+s",      "Hallo heimur");
	ASSERT_PRINTF("%+d",      1024);
	ASSERT_PRINTF("%+d",      -1024);
	ASSERT_PRINTF("%+i",      1024);
	ASSERT_PRINTF("%+i",      -1024);
//	ASSERT_PRINTF("%+u",      1024u);
//	ASSERT_PRINTF("%+u",      -1024u);
//	ASSERT_PRINTF("%+x",      0x1234abcdu);
//	ASSERT_PRINTF("%+x",      -0x1234abcdu);
//	ASSERT_PRINTF("%+X",      0x1234abcdu);
//	ASSERT_PRINTF("%+X",      -0x1234abcdu);
//	ASSERT_PRINTF("%+c",      'x');

//	ASSERT_PRINTF("% s",      "Hallo heimur");
	ASSERT_PRINTF("% d",      1024);
	ASSERT_PRINTF("% d",      -1024);
	ASSERT_PRINTF("% i",      1024);
	ASSERT_PRINTF("% i",      -1024);
//	ASSERT_PRINTF("% u",      1024u);
//	ASSERT_PRINTF("% u",      -1024u);
	/* TEST("777",             3, "% o",      0777u) */
	/* TEST("37777777001",    11, "% o",      -0777u) */
//	ASSERT_PRINTF("% x",      0x1234abcdu);
//	ASSERT_PRINTF("% x",      -0x1234abcdu);
//	ASSERT_PRINTF("% X",      0x1234abcdu);
//	ASSERT_PRINTF("% X",      -0x1234abcdu);
//	ASSERT_PRINTF("% c",      'x');

//////	ASSERT_PRINTF("%+ s",      "Hallo heimur");
//	ASSERT_PRINTF("%+ d",      1024);
//	ASSERT_PRINTF("%+ d",      -1024);
//	ASSERT_PRINTF("%+ i",      1024);
//	ASSERT_PRINTF("%+ i",      -1024);
//////	ASSERT_PRINTF("%+ u",      1024u);
//////	ASSERT_PRINTF("%+ u",      -1024u);
	/* TEST("777",             3, "%+ o",      0777u) */
	/* TEST("37777777001",    11, "%+ o",      -0777u) */
//////	ASSERT_PRINTF("%+ x",      0x1234abcdu);
//////	ASSERT_PRINTF("%+ x",      -0x1234abcdu);
//////	ASSERT_PRINTF("%+ X",      0x1234abcdu);
//////	ASSERT_PRINTF("%+ X",      -0x1234abcdu);
//////	ASSERT_PRINTF("%+ c",      'x');

	/* TEST("0777",            4, "%#o",      0777u) */
	/* TEST("037777777001",   12, "%#o",      -0777u) */
	ASSERT_PRINTF("%#x",      0x1234abcdu);
	ASSERT_PRINTF("%#x",      -0x1234abcdu);
	ASSERT_PRINTF("%#X",      0x1234abcdu);
	ASSERT_PRINTF("%#X",      -0x1234abcdu);
	/* TEST("0",               1, "%#o",      0u) */
	ASSERT_PRINTF("%#x",      0u);
	ASSERT_PRINTF("%#X",      0u);
	ASSERT_PRINTF("%#20x",      0x1234abcdu);
	ASSERT_PRINTF("%#20x",      -0x1234abcdu);
	ASSERT_PRINTF("%#20X",      0x1234abcdu);
	ASSERT_PRINTF("%#20X",      -0x1234abcdu);
	ASSERT_PRINTF("%#020x",     0x1234abcdu);
	ASSERT_PRINTF("%#020x",     -0x1234abcdu);
	ASSERT_PRINTF("%#020X",     0x1234abcdu);
	ASSERT_PRINTF("%#020X",     -0x1234abcdu);


//////////	ASSERT_PRINTF("% -0+*.*s",    20,  5, "Hallo heimur");
////	ASSERT_PRINTF("% -0+*.*d",    20,  5,  1024);
////	ASSERT_PRINTF("% -0+*.*d",    20,  5,  -1024);
////	ASSERT_PRINTF("% -0+*.*i",    20,  5,  1024);
////	ASSERT_PRINTF("% 0-+*.*i",    20,  5,  -1024);
////////	ASSERT_PRINTF("% 0-+*.*u",    20,  5,  1024u);
////////	ASSERT_PRINTF("% 0-+*.*u",    20,  5,  -1024u);
////////	ASSERT_PRINTF("%+ -0*.*x",    20,  5,  0x1234abcdu);
////////	ASSERT_PRINTF("%+ -0*.*x",    20, 10,  -0x1234abcdu);
////////	ASSERT_PRINTF("% -+0*.*X",    20,  5,  0x1234abcdu);
////////	ASSERT_PRINTF("% -+0*.*X",    20, 10,  -0x1234abcdu);
#endif
	/* TEST("777",             3, "%+o",      0777u) */
	/* TEST("37777777001",    11, "%+o",      -0777u) */

	ASSERT_PRINTF("%1s",      "Hallo heimur");
	ASSERT_PRINTF("%1d",      1024);
	ASSERT_PRINTF("%1d",      -1024);
	ASSERT_PRINTF("%1i",      1024);
	ASSERT_PRINTF("%1i",      -1024);
	ASSERT_PRINTF("%1u",      1024u);
	ASSERT_PRINTF("%1u",      -1024u);
	/* TEST("777",             3, "%1o",      0777u) */
	/* TEST("37777777001",    11, "%1o",      -0777u) */
	ASSERT_PRINTF("%1x",      0x1234abcdu);
	ASSERT_PRINTF("%1x",      -0x1234abcdu);
	ASSERT_PRINTF("%1X",      0x1234abcdu);
	ASSERT_PRINTF("%1X",      -0x1234abcdu);
	ASSERT_PRINTF("%1c",      'x');

	ASSERT_PRINTF("%20s",      "Hallo");
	ASSERT_PRINTF("%20d",      1024);
	ASSERT_PRINTF("%20d",      -1024);
	ASSERT_PRINTF("%20i",      1024);
	ASSERT_PRINTF("%20i",      -1024);
	ASSERT_PRINTF("%20u",      1024u);
	ASSERT_PRINTF("%20u",      -1024u);
	/* TEST("                 777",  20, "%20o",      0777u) */
	/* TEST("         37777777001",  20, "%20o",      -0777u) */
	ASSERT_PRINTF("%20x",      0x1234abcdu);
	ASSERT_PRINTF("%20x",      -0x1234abcdu);
	ASSERT_PRINTF("%20X",      0x1234abcdu);
	ASSERT_PRINTF("%20X",      -0x1234abcdu);
	ASSERT_PRINTF("%20c",      'x');

	ASSERT_PRINTF("%-20d",      1024);
	ASSERT_PRINTF("%-20d",      -1024);
	ASSERT_PRINTF("%-20i",      1024);
	ASSERT_PRINTF("%-20i",      -1024);
	ASSERT_PRINTF("%-20u",      1024u);
	ASSERT_PRINTF("%-20u",      -1024u);
	/* TEST("777                 ",  20, "%-20o",      0777u) */
	/* TEST("37777777001         ",  20, "%-20o",      -0777u) */
	ASSERT_PRINTF("%-20x",      0x1234abcdu);
	ASSERT_PRINTF("%-20x",      -0x1234abcdu);
	ASSERT_PRINTF("%-20X",      0x1234abcdu);
	ASSERT_PRINTF("%-20X",      -0x1234abcdu);
	ASSERT_PRINTF("%-20c",      'x');

	ASSERT_PRINTF("%020d",      1024);
	ASSERT_PRINTF("%020d",      -1024);
	ASSERT_PRINTF("%020i",      1024);
	ASSERT_PRINTF("%020i",      -1024);
	ASSERT_PRINTF("%020u",      1024u);
	ASSERT_PRINTF("%020u",      -1024u);
	/* TEST("00000000000000000777",  20, "%020o",      0777u) */
	/* TEST("00000000037777777001",  20, "%020o",      -0777u) */
	ASSERT_PRINTF("%020x",      0x1234abcdu);
	ASSERT_PRINTF("%020x",      -0x1234abcdu);
	ASSERT_PRINTF("%020X",      0x1234abcdu);
	ASSERT_PRINTF("%020X",      -0x1234abcdu);

	/* TEST("                0777",  20, "%#20o",      0777u) */
	/* TEST("        037777777001",  20, "%#20o",      -0777u) */

	/* TEST("00000000000000000777",  20, "%#020o",     0777u) */
	/* TEST("00000000037777777001",  20, "%#020o",     -0777u) */
////	ASSERT_PRINTF("%0-20s",      "Hallo");
//	ASSERT_PRINTF("%0-20d",      1024);
//	ASSERT_PRINTF("%0-20d",      -1024);
//	ASSERT_PRINTF("%0-20i",      1024);
//	ASSERT_PRINTF("%0-20i",      -1024);
//	ASSERT_PRINTF("%0-20u",      1024u);
//	ASSERT_PRINTF("%0-20u",      -1024u);
	/* TEST("777                 ",  20, "%-020o",      0777u) */
	/* TEST("37777777001         ",  20, "%-020o",      -0777u) */
//	ASSERT_PRINTF("%-020x",      0x1234abcdu);
//	ASSERT_PRINTF("%-020x",      -0x1234abcdu);
//	ASSERT_PRINTF("%-020X",      0x1234abcdu);
//	ASSERT_PRINTF("%-020X",      -0x1234abcdu);
////	ASSERT_PRINTF("%-020c",      'x');

	/*ASSERT_PRINTF("%*s",      20, "Hallo");
	ASSERT_PRINTF("%*d",      20, 1024);
	ASSERT_PRINTF("%*d",      20, -1024);
	ASSERT_PRINTF("%*i",      20, 1024);
	ASSERT_PRINTF("%*i",      20, -1024);
	ASSERT_PRINTF("%*u",      20, 1024u);
	ASSERT_PRINTF("%*u",      20, -1024u); */
	/* TEST("                 777",  20, "%*o",      20, 0777u) */
	/* TEST("         37777777001",  20, "%*o",      20, -0777u) */
	/*ASSERT_PRINTF("%*x",      20, 0x1234abcdu);
	ASSERT_PRINTF("%*x",      20, -0x1234abcdu);
	ASSERT_PRINTF("%*X",      20, 0x1234abcdu);
	ASSERT_PRINTF("%*X",      20, -0x1234abcdu);
	ASSERT_PRINTF("%*c",      20, 'x');*/

	ASSERT_PRINTF("%.20s",      "Hallo heimur");
	ASSERT_PRINTF("%.20d",      1024);
	ASSERT_PRINTF("%.20d",      -1024);
	ASSERT_PRINTF("%.20i",      1024);
	ASSERT_PRINTF("%.20i",      -1024);
	ASSERT_PRINTF("%.20u",      1024u);
	ASSERT_PRINTF("%.20u",      -1024u);
	/* TEST("00000000000000000777",   20, "%.20o",      0777u) */
	/* TEST("00000000037777777001",   20, "%.20o",      -0777u) */
	ASSERT_PRINTF("%.20x",      0x1234abcdu);
	ASSERT_PRINTF("%.20x",      -0x1234abcdu);
	ASSERT_PRINTF("%.20X",      0x1234abcdu);
	ASSERT_PRINTF("%.20X",      -0x1234abcdu);

	ASSERT_PRINTF("%20.5s",     "Hallo heimur");
	ASSERT_PRINTF("%20.5d",      1024);
	ASSERT_PRINTF("%20.5d",      -1024);
	ASSERT_PRINTF("%20.5i",      1024);
	ASSERT_PRINTF("%20.5i",      -1024);
	ASSERT_PRINTF("%20.5u",      1024u);
	ASSERT_PRINTF("%20.5u",      -1024u);
	/* TEST("               00777",   20, "%20.5o",      0777u) */
	/* TEST("         37777777001",   20, "%20.5o",      -0777u) */
	ASSERT_PRINTF("%20.5x",      0x1234abcdu);
	ASSERT_PRINTF("%20.10x",     -0x1234abcdu);
	ASSERT_PRINTF("%20.5X",      0x1234abcdu);
	ASSERT_PRINTF("%20.10X",     -0x1234abcdu);

//	ASSERT_PRINTF("%020.5s",    "Hallo heimur");
	ASSERT_PRINTF("%020.5d",     1024);
	ASSERT_PRINTF("%020.5d",     -1024);
	ASSERT_PRINTF("%020.5i",     1024);
	ASSERT_PRINTF("%020.5i",     -1024);
	ASSERT_PRINTF("%020.5u",     1024u);
	ASSERT_PRINTF("%020.5u",     -1024u);
	/* TEST("               00777",   20, "%020.5o",     0777u) */
	/* TEST("         37777777001",   20, "%020.5o",     -0777u) */
	ASSERT_PRINTF("%020.5x",     0x1234abcdu);
	ASSERT_PRINTF("%020.10x",    -0x1234abcdu);
	ASSERT_PRINTF("%020.5X",     0x1234abcdu);
	ASSERT_PRINTF("%020.10X",    -0x1234abcdu);

	ASSERT_PRINTF("%.0s",        "Hallo heimur");
	ASSERT_PRINTF("%20.0s",      "Hallo heimur");
	ASSERT_PRINTF("%.s",         "Hallo heimur");
	ASSERT_PRINTF("%20.s",       "Hallo heimur");
	ASSERT_PRINTF("%20.0d",      1024);
	ASSERT_PRINTF("%20.d",       -1024);
	ASSERT_PRINTF("%20.d",       0);
	ASSERT_PRINTF("%20.0i",      1024);
	ASSERT_PRINTF("%20.i",       -1024);
	ASSERT_PRINTF("%20.i",       0);
	ASSERT_PRINTF("%20.u",       1024u);
	ASSERT_PRINTF("%20.0u",      -1024u);
	ASSERT_PRINTF("%20.u",       0u);
	/* TEST("                 777",   20, "%20.o",       0777u) */
	/* TEST("         37777777001",   20, "%20.0o",      -0777u) */
	/* TEST("                    ",   20, "%20.o",       0u) */
	ASSERT_PRINTF("%20.x",       0x1234abcdu);
	ASSERT_PRINTF("%20.0x",      -0x1234abcdu);
	ASSERT_PRINTF("%20.x",       0u);
	ASSERT_PRINTF("%20.X",       0x1234abcdu);
	ASSERT_PRINTF("%20.0X",      -0x1234abcdu);
	ASSERT_PRINTF("%20.X",       0u);
}


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
