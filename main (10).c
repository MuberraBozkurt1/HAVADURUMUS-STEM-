#include <stdio.h>
#include "haftalik.h"
#include "gunluk.h"
#include "analiz.h"  // Tanımladığımız fonksiyonlar//

int haftalik();
int gunluk();
int analiz();

int main() {
    int secim=0;

    // Kullandığımız dosyanın açılıp açılmadığını kontrol ettiriyoruz.//
    FILE* fptr;
    fptr= fopen ("/Users/dilarameral/Desktop/Hava Durumu/data.txt","w");
    if(fptr==NULL){
        return 1;
    }
    fprintf(fptr,"   ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
                 "* |  PAZARTESİ  |  &  |     SALI     |  &  |   ÇARŞAMBA  |  &  |  PERŞMEBE   |  & |    CUMA     |  &  |  CUMARTESİ  |  &  |    PAZAR    |  *\n"
                 "* |    11°C     |     |     8°C      |     |     5°C     |     |    4°C      |    |    3°C      |     |     0°C     |     |     0°C     |  *\n"
                 "* |  NEM=65,5   |     |   NEM=91,5   |     |  NEM=89,12  |     |  NEM=73,37  |    |  NEM=75,37  |     |   NEM=70    |     |  NEM=63,25  |  *\n"
                 "* |   13km/h    |     |    15km/h    |     |    10km/h   |     |    8km/h    |    |   14km/h    |     |    8km/h    |     |    8km/h    |  *\n"
                 "   ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n");
    fprintf(fptr,"* | 00:00   5°C |     | 00:00   4°C  |     | 00:00  2°C  |     | 00:00   1°C |    | 00:00   0°C |     | 00:00  -2°C |     | 00:00  -4°C |  *\n"
                 "* | 03:00   5°C |     | 03:00   4°C  |     | 03:00  1°C  |     | 03:00   1°C |    | 03:00  -1°C |     | 03:00  -2°C |     | 03:00  -4°C |  *\n"
                 "* | 06:00   6°C |     | 06:00   5°C  |     | 06:00  3°C  |     | 06:00   1°C |    | 06:00   0°C |     | 06:00  -1°C |     | 06:00  -2°C |  *\n"
                 "* | 09:00   9°C |     | 09:00   5°C  |     | 09:00  3°C  |     | 09:00   1°C |    | 09:00   0°C |     | 09:00  -1°C |     | 09:00  -2°C |  *\n"
                 "* | 12:00  10°C |     | 12:00   9°C  |     | 12:00  3°C  |     | 12:00   2°C |    | 12:00   2°C |     | 12:00   1°C |     | 12:00  -1°C |  *\n"
                 "* | 15:00  14°C |     | 15:00  11°C  |     | 15:00  4°C  |     | 15:00   4°C |    | 15:00   3°C |     | 15:00   2°C |     | 15:00  -1°C |  *\n"
                 "* | 18:00   7°C |     | 18:00   5°C  |     | 18:00  3°C  |     | 18:00   3°C |    | 18:00   2°C |     | 18:00  -1°C |     | 18:00  -3°C |  *\n"
                 "* | 21:00   6°C |     | 21:00   5°C  |     | 21:00  2°C  |     | 21:00   2°C |    | 21:00   1°C |     | 21:00  -2°C |     | 21:00  -3°C |  *\n"
                 "   ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n");

    fprintf(fptr,"---------------------------------------------------------\n");
    fprintf(fptr,"*                                                       *\n");
    fprintf(fptr,"*       HAVA DURUMU MENÜSÜ                              *\n");
    fprintf(fptr,"*                                                       *\n");
    fprintf(fptr,"*      1.Haftalık Hava Durumu Verilerini Göster         *\n");
    fprintf(fptr,"*      2.Saatlik Hava Verilerini Göster                 *\n");
    fprintf(fptr,"*      3.Saatlik Nem Yüzdesi ve Rüzgar Hızını Göster    *\n");
    fprintf(fptr,"*      4.Çıkış                                          *\n");
    fprintf(fptr,"*                                                       *\n");
    fprintf(fptr,"---------------------------------------------------------\n");

    fclose(fptr);

    fptr= fopen("/Users/dilarameral/Desktop/Hava Durumu/data.txt", "r");

    char satir[10000];    // Dosyaya kaydettiğimiz menu ve tabloyu buradaki while döngüsüyle terminale yazdırıldı.//
    while (fgets(satir, sizeof(satir), fptr) != NULL) {
        printf("%s", satir);
    }

    fclose(fptr);

    //Kullanıcından yapmak istediği işlemi seçmesi için switch case yapısı ve fonksiyonların doğru çalıştığını anlaması için koşul ifadeleri kullanıldı.//
    do{
        printf("\n\nSeçmek istediğiniz işlemi giriniz.\n");
        scanf("%d",&secim);
        switch (secim) {

            case 1: if(haftalik()==0){
                    printf("Haftalık hava durumu başarılı bir şekilde kullanıcıya gösterildi.\n");
                }else{
                    printf("Haftalık hava durumu kullanıcıya gösterilemedi.\n");
                }

                FILE *fptr;
                char satir[6000];

                fptr= fopen("/Users/dilarameral/Desktop/Hava Durumu/data.txt", "r");

                if (fptr == NULL) {
                    printf("Dosya açılamadı.\n");
                    return 1;
                }

                while (fgets(satir, sizeof(satir), fptr) != NULL) {
                    printf("%s", satir);
                }

                fclose(fptr);
                break;
            case 2: if(gunluk()==0){
                    printf("Saatlik hava durumu başarılı bir şekilde kullanıcıya gösterildi.\n");
                }else{
                    printf("Saatlik hava durumu kullanıcıya gösterilemedi.\n");
                }
                break;
            case 3: if(analiz()==0){
                    printf("Hava durumu analizi başarılı bir şekilde kullanıcıya gösterildi.\n");
                }else{
                    printf("Hava durumu analizi kullanıcıya gösterilemedi.\n");
                }
                break;
            case 4:printf("\nHava Durumu Menüsünden Çıkış Yaptınız , Hoşça kalın :) \n");
                return 0;
            default:
                printf("\nLütfen 1-4 arasında seçim yapınız.\n");
        }

    } while (secim!=4); // Döngüyü 4 basıncaya kadar devam ettirir.//

    return 0;
}
