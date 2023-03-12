#include <stdio.h>
struct student
{
	char ogrenci;
    char isim[50];
    char soyisim[50];
    float telNo;
    char adres[1000];
    int dogumYili;
} s[5];


int main()
{
	int i;
	for(i=0;i<5;i++){
	s[i].ogrenci=i+1;
	printf("\n%d.ogrenci \n\n",s[i].ogrenci);
    
    printf("Ogrencinin ismini giriniz:\n ");
    scanf("%s",&s[i].isim);
    printf("Ogrencinin Soyismini giriniz: \n");
    scanf("%s",&s[i].soyisim);
    printf("Ogrencinin telefon numarasini giriniz: \n");
    scanf("%f",&s[i].telNo);
    printf("Ogrencinin adresini giriniz: \n");
    scanf("%s",&s[i].adres);
    fflush(stdin); 
    printf("Ogrencinin dogum yilini giriniz: \n");
    scanf("%d",&s[i].dogumYili);
    
}

    printf(" OGRENCILERIN BILGILERI: \n");
    for(i=0;i<5;i++){
    
	printf("\n %d.ogrencinin bilgileri \n",i+1);
    printf(" Isim: %s \n",s[i].isim);
    printf(" Soyisim: %s \n ",s[i].soyisim);
    printf(" Telefon numarasi: %f \n",s[i].telNo);
    printf(" Adres: %s \n",s[i].adres);
    printf(" Dogum yili: %d",s[i].dogumYili);
}
 return 0;
}

