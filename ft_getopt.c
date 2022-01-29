#include "libft.h"

char* ft_optarg;
int optind = 1, opterr = 0, optopt;

int ft_getopt_long(int ac, const char* av[], const char* opstring, const t_options *longopts, int* longindex)
{	
	(void) ac;
	(void) av;
	(void) opstring;
	(void) longopts;
	(void) longindex;
		
	return 0;
}
