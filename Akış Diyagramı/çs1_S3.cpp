/*
   Klavyeden girilen bir N sayısının faktöriyelini hesaplayan programın kodunu yazınız.
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
