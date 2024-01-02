#include<reg51.h>
void main(void)
{
	unsigned int i,j;
 	while(1)
	{
		for(P3=0;P3<=255;P3++)
		{
			for(i=0;i<10;i++);
		}
		for(P3=255;P3>=0;P3--)
		{
			for(j=0;j<10;j++);
		}
	}
}