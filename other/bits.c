#include <unistd.h>

void print(unsigned char octet)
{
	int	i = 7;
	octet = ((octet >> 4) | (octet << 4));
	while(i >= 0)
	{
		if((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}
/*

void print(unsigned char octet)
{
	int i = 0;

	while (i < 8)
	{
		if (octet (128 >> i))
			write(1, "1\n", 1);
		else
			write(1, "0\n", 1);
		i++;
	}
}
*/

#include <stdio.h>
int	main()
{
	print(1);
}
