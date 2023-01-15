/*
	Girilen vize ve final notu üzerinden vizenin %40’I finalin %60’ýný alarak yýl sonu puanýný hesaplayan programýn kodunu yazýnýz .
*/

#include<stdio.h>
main()
{
	int vize, final;
	int ort;
	printf("Vize :");
	scanf("%d",&vize);
	printf("Final :");
	scanf("%d",&final);
	ort = vize * 0.4 + final * 0.6;
	printf("ortalama : %d",ort);
	return 0;
}
