/*
	Kullan�c�ndan al�nan 2 say�n�n EBOB de�erini bulan kodu yaz�n�z .
	�RNEK : (5,6) = 1 .
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
	SAY�1	SAY�2	C
	  5       6     5
	  6		  5		1
	  5		  1		0
*/
