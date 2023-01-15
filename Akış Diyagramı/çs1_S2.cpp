/*
	1 ile 1000 arasýndaki TEK sayýlarýn toplamýný bulan programýn kodunu yazýnýz.
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

