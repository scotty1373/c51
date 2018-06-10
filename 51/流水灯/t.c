#include<reg52.h>
typedef	unsigned int uint;
typedef unsigned char uchar;
void delay(a);
void main()
{
	while(1)
	{
		uint i=4;
		while(i>0)	
		{	
			P0=0x01;
			delay(500);
			P0=0x04;
			delay(500);
			P0=0x10;
			delay(500);
			P0=0x40;
			delay(500);
			i--;
		}
		while(i<3)
		{
			P0=0x20;
			delay(500);
			P0=0x08;
			delay(500);
			P0=0x02;
			delay(500);
			i++;	
		}
	}

}

void delay(a)
{
	uint i,j;
	for(i=a;i>0;i--)
		for(j=110;j>0;j--);
}
