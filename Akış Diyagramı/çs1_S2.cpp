/*
	1 ile 1000 aras�ndaki TEK say�lar�n toplam�n� bulan program�n kodunu yaz�n�z.
*/

#include<stdio.h>
main()
{
	int top;
	for(int i=0 ; i<=100 ; i++)
	{
		if(i % 2 == 1)
		{
			top = top + i;
		}
	}
	printf("toplam : %d",top);
	return 0;
}

