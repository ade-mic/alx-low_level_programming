/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count = 0;

	i = n ^ m;
	while (i != 0)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
