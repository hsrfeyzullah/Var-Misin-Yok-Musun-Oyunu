#include <iostream>
#include <stdio.h>
#include <stdlib.h> //STANDART  KÜTÜPHANE RASTGELE SAYI OLUÞTURMADA YARDIMCI BÝR KÜTÜPHANE
#include <time.h>  //RASTGELE ÝÞLEMÝNÝ YAPMAMIZ ÝÇÝN  GEREKLÝDÝR KUTULARI RASTGELE OLARAK BÝLGÝSAYARIN SAATÝNE GORE RASTGELE OLARAK ATMAMIZI SAÐLAR
int main() {
	printf ("******************** VAR MISIN? YOK MUSUN? OYUNUNA HOSGELINIZ ********************\n");
	printf ("PARALAR: \n");
	int paralark[24]={500,5000000,40000,200000,100,300,250000,10,200,50000,150000,2,400,20000,500000,25,750,100000,500000,5,10000,30000,50,1};
	int paralar[24]={ 1,2,5,10,25,50,100,200,300,400,500,750,10000,20000,30000,40000,50000,100000,150000,200000,250000,500000,500000,500000};
	for (int j=0; j<24; j++)
	{
		printf ("%d\n ", paralar[j]);
	}
	
	printf ("KUTULAR KARISTIRILYOR LUTFEN BEKLEYINIZ...");
	srand (time(0));
	int kutular[24];
	int temp=1+ (rand()%24); //1+ RANDOM SAYI ALIRKE BÝR DEN BAÞLAMASINI SAÐLAR 
	kutular[0]=temp;
	
	for (int i=1; i<24; i++)
	{
		int a;
		int k;
		
		do
		{
			k=0;
			a=0;
			srand (time(0));
			temp=1+ (rand()% 24);
			
			for (k=0; k<i; k++)
			{
				if (temp==kutular[k])
				{
					a=a+1;
				}
			}
			
		}while (a>0);
		
		kutular[i]=temp;
	}
	
	int s;
	printf ("KUTULAR:\n");
	for (s=0; s<24; s++)
	{
		printf ("%d ", kutular[s]);
	}
	
	printf ("\nLUTFEN KUTULARI 0 ILE 24 ARASINDA SECINIZ\n");
    printf ("HANGI KUTUYU SECMEK ISTERSINIZ?\n");
    int sectigimizkutu;
    int i;
	
	for (i=1;i>0; i++){
	scanf ("%d", &sectigimizkutu);
	if (sectigimizkutu>=0 && sectigimizkutu<=24) 
	{
	printf ("SIZIN KUTUNUZ:%d \n", sectigimizkutu);
	break;
	}
	else printf ("LUTFEN BELIRTILEN ARALIKTA KUTU NUMARASI GIRINIZ: ");
	//SECTÝÐÝM KUTU ÝSE BOÞLUK DEÐÝLSE KUTULARI YAZMAYA DEVAM EDÝYOR
}
	for(int i=0;i<24;i++)
	{
    	if (kutular[i]==sectigimizkutu)
    	printf ("0");
		else
			{
			 printf("%d ",kutular[i]);	
			}
	}
	
	 
	int hamdibey=1;	
	int acilankutu;
	for (int j=0; j<hamdibey; j++)
	{
	printf ("\n ACMAK ICIN BIR KUTU SECINIZ: ");
	for (i=1;i>0; i++){
	scanf ("%d", &acilankutu);
	if (acilankutu>=0 && acilankutu<=24) 
	{
	printf ("SECTIGINIZ KUTUNUN ICINDEN CIKAN PARA:%d TL\n", paralark[acilankutu]);	
	break;
	}
	else printf ("LUTFEN BELIRTILEN ARALIKTA KUTU NUMARASI GIRINIZ: \n");
}
	for(int i=0;i<24;i++)
	{
    	if (kutular[i]==acilankutu || kutular[i]==0 )
    		printf (" XX ");
		else
			{
			 printf("%d ",kutular[i]);	
			}
	}
	int hamdibeyteklifi;
	hamdibeyteklifi=hamdibeyteklifi+paralar[acilankutu];
	if (hamdibey==4)
	{
		printf ("\nHAMDI BEYIN TEKLIFI: ");
		printf ("%d",hamdibeyteklifi/4 );
		hamdibey=1;
	}
	hamdibey++;
	
	
}
	

	return 0;
}

