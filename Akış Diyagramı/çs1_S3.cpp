/*
   Klavyeden girilen bir N say�s�n�n fakt�riyelini hesaplayan program�n kodunu yaz�n�z.
*/

#include<stdio.h>
main()
{
	int n;
	int fakt = 1;
	printf("n sayisi atayiniz : ");
	scanf("%d",&n);
	for(int i=1 ; i<=n ; i++)
	{
		fakt = fakt * i;
	}
	printf("fakt : %d",fakt);
	return 0;
}
