/*
	Klavyeden girilen bir sayýnýn bütün tam bölenlerinin toplamýný bulup ekrana yazan programýn kodunu yazýnýz.
*/

#include<stdio.h>
main()
{
	int sayi;
	int top;
	printf("DEGER :");
	scanf("%d",&sayi);
	for(int i=1 ; i<=sayi ;  i++)
	{
		if(sayi % i == 0)
		{
			printf("%d\n",i);
			top = top + i;
		}
	}
	printf("TOPLAM : %d",top);
	return 0;
}

