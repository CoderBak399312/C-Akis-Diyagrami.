/*
	Klavyeden girilen bir say�n�n b�t�n tam b�lenlerinin toplam�n� bulup ekrana yazan program�n kodunu yaz�n�z.
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

