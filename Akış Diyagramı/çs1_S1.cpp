/*
	Girilen vize ve final notu �zerinden vizenin %40�I finalin %60��n� alarak y�l sonu puan�n� hesaplayan program�n kodunu yaz�n�z .
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
