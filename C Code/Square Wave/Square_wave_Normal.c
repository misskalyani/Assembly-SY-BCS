#include<reg51.h>
void main(void)
{
	P3=0x00;
	while(1)
	{
		unsigned int i;
		P3=~P3;
		for(i=0;i<100;i++);
	}
}