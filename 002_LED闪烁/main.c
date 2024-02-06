#include <REGX52.H>
#include <INTRINS.H>

/*
0000 0		0100 4		1000 8		1100 C
0001 1		0101 5		1001 9		1101 D
0010 2		0110 6		1010 A		1110 E
0011 3		0111 7		1011 B		1111 F
*/

void Delay500ms()	//@12.000MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1)
	{
		P0=0xFE;
		Delay500ms();
		P0=0xFF;
		Delay500ms();
	}
}