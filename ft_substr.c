#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dizi;
	size_t	i;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	dizi = (char *)malloc(sizeof(char) * (len + 1));
	if (!dizi)
		return (NULL);
	i = 0;
	while (len--)
		dizi[i++] = s[start++];
	dizi[i] = '\0';
	return (dizi);
}
/*
int main()
{
	char const *s = "yakup";
	char *dizi;

	dizi = ft_substr(s, 1, 3);
	printf("%s", dizi);
}
*/