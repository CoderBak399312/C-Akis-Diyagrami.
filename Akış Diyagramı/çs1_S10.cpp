/*
	Girilen say�n�n basamak de�erlerinin toplam�n� bulankodu yaz�n�z .
*/

#include<stdio.h>
main()
{
	int sayi;
	int top = 0;
	printf("DEGER : ");
	scanf("%d",&sayi);
	while(0 < sayi)
	{
		sayi = sayi /10;
		top = top + (sayi % 10);
	}
	printf("\n Basamak degeri toplami : %d", top);
	return 0;
}
