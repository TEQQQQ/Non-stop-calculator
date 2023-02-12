#include <stdio.h>


int main (){
	int sayi1;
	int sayi2;
	int ana_islem;
	int devamlilik = 0;
	int i = 1;
	for (i = 1; i<4; i--) {
		if (i == 1){
			
			printf("1.sayiyi giriniz : "); 
			scanf("%d", &sayi1);
			
			printf("2.sayiyi giriniz : ");
			scanf("%d", &sayi2);
			
			int islem = 0;
			printf("islem numarasini giriniz(toplama = 1) (cikarma = 2) (carpma = 3) (bolme = 4) : ");
			scanf("%d", &islem);
			if (islem == 1 ){
				int toplam = 0;
				toplam = sayi1+sayi2;
				ana_islem = toplam;
				printf("toplama isleminin sonucu = %d \n", toplam);
			} else if (islem == 2) {
				int cikarma = 0;
				cikarma = sayi1-sayi2;
				ana_islem = cikarma;
				printf("cikarma isleminin sonucu = %d \n", cikarma);
			} else if (islem == 3) {
				int carpma = 0;
				carpma = sayi1*sayi2;
				ana_islem = carpma;
				printf("carpma isleminin sonucu = %d \n", carpma);
			} else if (islem == 4) {
				int bolme = 0;
				bolme = sayi1/sayi2;
				ana_islem = bolme;
				printf("bölme isleminin sonucu = %d \n", bolme);
			} else {
				printf("gecersiz islem giridiniz. kapatiliyor...");
				break;
			}
			
		} else {
			
			printf("isleme devam etmek ister misiniz yoksa sonucu mu gormek istersiniz. Isleme devam etmek icin 1 sonlandirmak icin 2 ye basiniz : ");
			scanf("%d", &devamlilik);
			if (devamlilik == 1){
				sayi1 = ana_islem;
				printf("eklemek istediginiz sayiyi giriniz : ");
				scanf("%d", &sayi2);
				int islem = 0;
				printf("islem numarasini giriniz(toplama = 1) (cikarma = 2) (carpma = 3) (bolme = 4) : ");
				scanf("%d", &islem);
				if (islem == 1 ){
					int toplam = 0;
					toplam = sayi1+sayi2;
					ana_islem = toplam;
					printf("eklenen toplama islemi ile birlikte sonuc = %d \n", toplam);
				} else if (islem == 2) {
					int cikarma = 0;
					cikarma = sayi1-sayi2;
					ana_islem = cikarma;
					printf("eklenen cikarma islemi ile birlikte sonuc  = %d \n", cikarma);	
				} else if (islem == 3) {
					int carpma = 0;
					carpma = sayi1*sayi2;
					ana_islem = carpma;
					printf("eklenen carpma islemi ile birlikte sonuc = %d \n", carpma);
				} else if (islem == 4) {
					int bolme = 0;
					bolme = sayi1/sayi2;
					ana_islem = bolme;
					printf("eklenen bolme islemi ile birlikte sonuc  = %d \n", bolme);
				} else {
					printf("gecersiz islem giridiniz. kapatiliyor...");
					break;
				}
			} else {
				printf("butun istediginiz islemler tamamlandi ve sonuc %d bulundu", ana_islem);
				break;
			}
			
			
		}
		
		
		
	}

}



