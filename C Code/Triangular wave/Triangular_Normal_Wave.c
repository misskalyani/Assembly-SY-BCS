#include<reg51.h>
void main(void)
{
 	while(1)
	{	
                for(P3=0;P3<255;P3++);
                for(P3=254;P3>0;P3--);
        }
}