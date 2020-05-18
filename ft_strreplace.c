#include "libft.h"

char			*ft_strreplace(char const *s1, unsigned int start, size_t len, char const *sub)
{
	char *new;
	size_t lenbefore;
	size_t lensub;
	size_t lenafter;
	
	lenbefore = start;
	lensub = ft_strlen(sub);
	lenafter = ft_strlen(s1) - (lenbefore + len);
	if (!(new = ft_calloc(1, lenbefore + lensub + lenafter + 1)))
		return (0);
	ft_memcpy(new, s1, lenbefore);
	ft_memcpy(new + lenbefore, sub, lensub);
	ft_memcpy(new + lenbefore + lensub, s1 + lenbefore + len, lenafter);
	return (new);
}
