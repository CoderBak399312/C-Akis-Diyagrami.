/*
	Kullanýcýndan alýnan 2 sayýnýn EKOK deðerini bulan kodu yazýnýz.
*/

#include<stdio.h>
main()
{
	int sayi1, sayi2;
	int c = 1;
	int ekok;
	printf("DEGER_1 : ");
	scanf("%d",&sayi1);
	printf("DEGER_2 : ");
	scanf("%d",&sayi2);
	while(1)
	{
		c++;
		if((c % sayi1 == 0) && (c % sayi2 == 0))
		{
			ekok = c;
			break;
		}
	}
	printf("EKOK : %d",ekok);
	return 0;
}
