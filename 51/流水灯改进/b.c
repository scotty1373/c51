#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char

void delay(a);
void liushui1();
void shanshuo1();
void liushui2();
void shanshuo2();
uint a;
void main()
{
	while(1)
	{
		liushui1();
		shanshuo1();
		liushui2();
		shanshuo2();	
	}	
}
void delay(a)
{
	uint i,j;
	for(i=a;i>0;i--)
		for(j=110;j>0;j--);
}

void liushui1()
{	
	uint i;
	P0=0x01;
	for(i=0;i<8;i++)
	{
		delay(500);
		P0=P0<<1;
	}
}

void shanshuo1()
{
	uint i,j;
	P0=0x01;
	for(j=0;j<3;j++)
	{
		P0=0x01;
		for(i=0;i<4;i++)
		{
			delay(500);
			P0=P0<<2;
		}
	}	
}

void liushui2()
{
	uint i=0;
	P0=0x80;
	while(i>7)
	{
		delay(500);
		P0=P0>>1;
		i--;

	}
}

void shanshuo2()
{
	uint i,j;
	P0=0x20;
	for(j=0;j<4;j++)
	{
		P0=0x20;
		for(i=0;i<4;i++)
		{
			delay(500);
			P0=P0>>2;
		}
	}	
}