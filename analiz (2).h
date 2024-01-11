#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int analiz(){

    // Verileri almak için iki boyutlu iki tane ayrı oluşturuldu.//

    int nemyuz [7][8]={{76,80,81,67,59,71,48,42},
                       {96,96,100,100,82,72,92,94},
                       {85,84,96,96,93,82,91,86},
                       {77,80,80,79,68,61,68,74},
                       {77,73,83,83,73,62,74,78},
                       {78,76,73,71,63,62,62,75},
                       {67,69,76,66,51,49,62,66}};

    int ruzgarhizi [7][8]={{5,5,6,9,10,14,7,6},
                           {8,9,2,2,11,19,16,10},
                           {11,8,5,8,10,13,11,13},
                           {3,4,7,6,2,6,6,4},
                           {7,6,5,4,10,11,8,6},
                           {11,13,5,5,7,13,12,11},
                           {5,3,15,19,21,26,19,10}};
    int sec=0;
    int i;
    int toplam = 0;
    float ortnemyuz;

    printf("pazartesi--> 1\n"
           "salı--> 2\n"
           "çarşamba--> 3\n"
           "perşembe--> 4\n"
           "cuma--> 5\n"
           "cumartesi--> 6\n"
           "pazar--> 7\n");

    printf("lütfen bir gün seçiniz:"); // Kullanıcıdan hangi günü görmek istediğinin verisi alındı.//
    scanf("%d",&sec);

    FILE* fptr;
    fptr= fopen ("/Users/dilarameral/Desktop/Hava Durumu/data.txt","a");
    if(fptr==NULL){
        return 1;
    }

    int tablo[8]={00,3,6,9,12,15,18,21};

    switch (sec) {
        case 1:
            fprintf(fptr,"Pazartesi Saatlik Nem Yüzdesi\n");
            printf("Pazartesi Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                        fprintf(fptr," %d:00",tablo[i]);
                        fprintf(fptr,"   %% %d\n",nemyuz[0][i]);
                        printf(" %d:00",tablo[i]);
                        printf("   %% %d\n",nemyuz[0][i]);
                toplam += nemyuz[0][i];   // Saatlik nem miktarlarının analiz için ortalaması alındı ve diğer case'ler içinde aynı işlem yapıldı.//
                }
                ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);

            // Nem yüzdesinin analizi için koşul ifadesi olan if-else bloğu kullanıldı ve diğer case'ler içinde aynı işlem yapıldı.////
                if(ortnemyuz<40)
                    fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
                else if(ortnemyuz>=40 && ortnemyuz<=60)
                    fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
                else
                    fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Pazartesi Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[0][i]);
                printf("  %d km/h\n",ruzgarhizi[0][i]);
            }
            break;
        case 2:
            fprintf(fptr,"Salı Saatlik Nem Yüzdesi\n");
            printf("Salı Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[1][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[1][i]);
                toplam += nemyuz[1][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Salı Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[1][i]);
                printf("  %d km/h\n",ruzgarhizi[1][i]);
            }
            break;
        case 3:
            fprintf(fptr,"Çarşamba Saatlik Nem Yüzdesi\n");
            printf("Çarşamba Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[2][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[2][i]);
                toplam += nemyuz[2][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Çarşamba Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[2][i]);
                printf("  %d km/h\n",ruzgarhizi[2][i]);
            }
            break;
        case 4:
            fprintf(fptr,"Perşembe Saatlik Nem Yüzdesi\n");
            printf("Perşembe Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[3][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[3][i]);
                toplam += nemyuz[3][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Perşembe Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[3][i]);
                printf("  %d km/h\n",ruzgarhizi[3][i]);
            }
            break;
        case 5:
            fprintf(fptr,"Cuma Saatlik Nem Yüzdesi\n");
            printf("Cuma Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[4][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[4][i]);
                toplam += nemyuz[4][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Cuma Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[4][i]);
                printf("  %d km/h\n",ruzgarhizi[4][i]);
            }
            break;
        case 6:
            fprintf(fptr,"Cumartesi Saatlik Nem Yüzdesi\n");
            printf("Cumartesi Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[5][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[5][i]);
                toplam += nemyuz[5][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Cumartesi Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[5][i]);
                printf("  %d km/h\n",ruzgarhizi[5][i]);
            }
            break;
        case 7:
            fprintf(fptr,"Pazar Saatlik Nem Yüzdesi\n");
            printf("Pazar Saatlik Nem Yüzdesi\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                fprintf(fptr,"   %% %d\n",nemyuz[6][i]);
                printf(" %d:00",tablo[i]);
                printf("   %% %d\n",nemyuz[6][i]);
                toplam += nemyuz[6][i];
            }
            ortnemyuz=toplam/8;
            fprintf(fptr,"ortalama nem yüzdesi: %.2f\n",ortnemyuz);
            if(ortnemyuz<40)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan düşüktür.\n\n");
            else if(ortnemyuz>=40 && ortnemyuz<=60)
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum düzeydedir.\n\n");
            else
                fprintf(fptr,"Bugün ki havanın nem oranı sağlığınız için optimum değer aralığıdan yüksektir.\n\n");

            fprintf(fptr,"Pazar Saatlik Rüzgar Hızı\n");
            for (i = 0; i <8 ; i++) {
                fprintf(fptr," %d:00",tablo[i]);
                printf(" %d:00",tablo[i]);
                fprintf(fptr,"  %d km/h\n",ruzgarhizi[6][i]);
                printf("  %d km/h\n",ruzgarhizi[6][i]);
            }
            break;
    }
    fclose(fptr);

    char satir[20000];

    fptr= fopen("/Users/dilarameral/Desktop/Hava Durumu/data.txt", "r");

    if (fptr == NULL) {
        printf("Dosya açılamadı.\n");
        return 1;
    }

    while (fgets(satir, sizeof(satir), fptr) != NULL) {
        printf("%s", satir);
    }

    fclose(fptr);
    return 0;
}