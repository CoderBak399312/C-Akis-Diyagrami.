/*
  Girilen say�n�n ka� basamakl� oldu�unu bulan kodu yaz�n�z .
*/

#include<stdio.h>
main()
{
	int sayi;
	int bsmk = 0;
	printf("DEGER : ");
	scanf("%d",&sayi);
	while(0 < sayi)
	{
		sayi = sayi /10;
		bsmk++;
	}
	printf("%d basamklidir.",bsmk);
	return 0;
}
