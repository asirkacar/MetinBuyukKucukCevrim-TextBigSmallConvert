#include <stdio.h>
//MET�NDEK� B�Y�K HARFLER� K���K K���KLER� B�Y�K YAPAN KOD
int main()
{
	int i=0;
	char dizi[100];
	
	printf("yaz�y� girin: ");
	gets(dizi);
	
	while(dizi[i]!='\0')
	{
		if(dizi[i]>=97)
		{
			dizi[i] -=32;
		}
		else
		{
			dizi[i] +=32;
		}
		i++;
	}
	
	
	printf("Veri: %s", dizi);
	getchar();
}
