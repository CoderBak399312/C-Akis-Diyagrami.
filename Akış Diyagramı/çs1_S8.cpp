/*
	Mükemmel sayýyý bulan kodu yazýnýz.
*/

#include<stdio.h>
main()
{
	int sayi;
	int top = 0;
	printf("DEGER : ");
	scanf("%d",&sayi);
	for(int i=1 ; i<sayi ; i++)
	{
		if(sayi % i == 0)
		{
			top += i;
		}
	}
	if(sayi == top)
	{
		printf("%d Mukemmel sayi'dir.",sayi);
	}
	else
	{
		printf("%d Mukemmel sayi degildir.",sayi);
	}
	return 0;
}
