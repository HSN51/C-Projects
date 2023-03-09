#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hosgeldinizFonksiyonu() {
	printf("Bilgi yarismasina hosgeldiniz asagidaki kurallari okuyunuz\n"
		"*Yarismamiz puan sistemlidir\n*Lutfen kullanici adinizi dogru giriniz kayitli degilseniz uye olunuz");

}

int secimFonksiyonu() {
	int secim;
	printf(" Lutfen asagidaki seceneklerden birini seciniz\n[1]-Giris yap\n[2]-Kayit ol :");
	scanf("%d", &secim);
	return secim;
}
int girisYapFonksiyonu(char isim[200], char sifre[200]) {
	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol = false;

	while (kontrol == false) {
		printf("Lutfen adinizi giriniz: ");
		scanf("%s", isimVeri);
		printf("Lutfen sifrenizi giriniz: ");
		scanf("%s", sifreVeri);
		if (strcmp(isim, isimVeri) == 0 && strcmp(sifre, sifreVeri) == 0) {
			printf("Sisteme hosgeldiniz\n");
			kontrol = true;
		}
		else {
			printf("Hatali giris,Lutfen tekrar deneyin!\n");
		}
	}
}

int kayitolFonksiyonu() {
	char isim[200];
	char sifre[200];
	printf("Lutfen bir isim belirleyiniz :");
	scanf("%s", &isim);
	printf("Lutfen bir sifre belirleyiniz :");
	scanf("%s", &sifre);
	printf("Basarili bir sekilde kayit oldunuz!\nGiris ekranina y�nlendiriliyorsunuz****\n");
	girisYapFonksiyonu(isim, sifre);
}
int bilgiYarismasi() {
	char cevap[2];
	int puan = 0;
	int can = 3;
	printf("Yarisma basladi\n");

	while (can != 0) {


		if (puan == 0) {

			printf("[Soru 1] : Cumhurbaskani kac yilda bir secilir?\na-)2\nb-)3\nc-)4\nd-)5\n");
			scanf("%s", &cevap);
			if (strcmp(cevap, "d") == 0) {
				printf("\nDogru Cevap!\n");
				puan += 10;
				printf("Puaniniz:%d", puan);
			}
			else {
				printf("Hatali cevap dogru cevap d sikkidir\n");
				printf("Puan:%d", puan);
				can = can - 1;
				printf("\nCaniniz:%d", can);
			}
		}
		if (puan == 10) {

			printf("\n[Soru 2] : Vucuttaki en guclu kas hangisidir?\na-)Bacak Kasi\nb-)Kol Kasi\nc-)Dil Kasi\n4-)Karin Kasi\n");
			scanf("%s", &cevap);
			if (strcmp(cevap, "c") == 0) {
				printf("Dogru Cevap!\n");
				puan += 10;
				printf("Puaniniz:%d", puan);
			}
			else {
				printf("Hatali cevap dogru cevap c sikkidir\n");
				printf("\nPuan:%d", puan);
				can = can - 1;
				printf("\nCaniniz:%d", can);
			}
		}

		if (puan == 20) {

			printf("\n[Soru 3] : Nobel odolleri hangi ulkede verilmektedir?\na-)Isvicre\nb-)Isvec\nc-)Amerika\n4-)�ngiltere\n");
			scanf("%s", &cevap);
			if (strcmp(cevap, "b") == 0) {
				printf("\nDogru Cevap!\n");
				puan += 10;
				printf("Puaniniz:%d", puan);
				can = 0;
			}
			else {
				printf("Hatali cevap dogru cevap b sikkidir\n");
				printf("Puan:%d", puan);
				can = can - 1;
				printf("\nCaniniz:%d", can);
			}
		}
	}
	return puan;

}
int yarismaSon(int puan) {
	printf("\nYarismaniz sona ermistir\nGuncel skorunuz: %d", puan);

}
int main(int argc, char* argv[]) {
	char isim[200] = "Hasan";
	char sifre[200] = "12345";

	hosgeldinizFonksiyonu();
	int secim = secimFonksiyonu();

	if (secim == 1) {
		girisYapFonksiyonu(isim, sifre);
	}
	else if (secim == 2) {
		kayitolFonksiyonu();
	}
	int skor = bilgiYarismasi();
	yarismaSon(skor);


	return 0;
}