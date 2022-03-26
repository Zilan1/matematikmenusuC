#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1,sayi2,sonuc,secim,pi,r;
	pi=3;
 
	printf("Birinci Sayiyi GIriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	 
	printf("Matematik Menusu\n");
	printf("********************\n\n");
	printf("1-Karede Alan ve Cevre Hesabi\n");
	printf("2-Girilen Sayinin Kupu\n");
	printf("3-Cemberde Alan ve Cevre Hesabi\n");
	printf("4- 5x2+7x+9 x e gore islemin sonucu: \n");
	printf("5-Dikdortgende Alan ve Cevre Hesabi\n");
	printf("Isleminizi Seciniz: \n");
	scanf("%d",&secim);
	
	switch(secim)
	{
       case 1:
	       printf("Karenin Alani: %d\n",(sayi1*sayi1));
		   printf("Karenin Cevresi: %d\n",(sayi1*4));
		   printf("Karenin Alani: %d\n",(sayi2*sayi2));
		   printf("Karenin Cevresi: %d",(sayi2*4));
		   break;			
			
		case 2:
		   printf("Sayinin Kupu: %d\n",(sayi1*sayi1*sayi1));
		   printf("Sayinin Kupu: %d",(sayi2*sayi2*sayi2));
		   break;
		  
		  printf("Yaricap Giriniz: %d\n");
		  scanf("%d",&r); 
		case 3:        		 
		   printf("Cemberin Alani: %d\n",(pi*r*r));
		   printf("Cemberin Cevresi: %d\n",(2*pi*r));
		   break;
		   
		case 4:    
			printf("Denklemin Sonucu: %d\n",(5*sayi1*sayi1+7*sayi1+9));
			printf("Denklemin Sonucu: %d",(5*sayi2*sayi2+7*sayi2+9));
			break;
		
		case 5: 
		    printf("Dikdortgenin Alani: %d\n",(sayi1*sayi2));
		    printf("Dikdortgen Cevresi: %d\n",(sayi1+sayi2)*2);
			default:
		       printf("Hatali Sonuc Girdiniz");	
			break;
	}
	
	return 0;
}
