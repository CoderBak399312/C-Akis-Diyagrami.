/*
	Kullanýcýndan alýnan 2 sayýnýn EBOB deðerini bulan kodu yazýnýz .
	ÖRNEK : (5,6) = 1 .
*/

#include<stdio.h>
main()
{
	int sayi1, sayi2;
	int c ;
	int obeb;
	printf("DEGER_1 : ");
	scanf("%d",&sayi1);
	printf("DEGER_2 : ");
	scanf("%d",&sayi2);
	c = sayi1 % sayi2;
	while(c != 0)
	{
		sayi1 = sayi2;
		sayi2 = c;
		c = sayi1 % sayi2;	
	}
	printf("OBEB : %d",obeb);
	return 0;
}

/*
	SAYÝ1	SAYÝ2	C
	  5       6     5
	  6		  5		1
	  5		  1		0
*/
