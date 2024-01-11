#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int gunluk(){
    int gununsicaklikverileri[7][8]={{5,5,6,9,10,14,7,6},
                                     {4,4,5,5,9,11,5,5},
                                     {2,1,3,3,3,4,3,2},
                                     {1,1,1,1,2,4,3,2},
                                     {0,-1,0,0,2,3,2,1},
                                     {-2,-2,-1,-1,1,2,-1,-2},
                                     {-4,-4,-2,-2,-1,-1,-3,-3}};

    int sec=0;
    int i;
    printf("pazartesi--> 1\n"
           "salı--> 2\n"
           "çarşamba--> 3\n"
           "perşembe--> 4\n"
           "cuma--> 5\n"
           "cumartesi--> 6\n"
           "pazar--> 7\n");

    printf("lütfen bir gün seçiniz:");
    scanf("%d",&sec);

    FILE* fptr;
    fptr= fopen ("/Users/dilarameral/Desktop/Hava Durumu/data.txt","a");
    if(fptr==NULL){
        return 1;
    }

    int tablo[8]={00,3,6,9,12,15,18,21};

    switch (sec) {
        case 1:
            printf("        PAZARTESİ        \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        PAZARTESİ        \n"
                         "Saatlik Sıcaklık Verileri\n");

            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){ // Tabloya saatleri ve verileri yazdırmak için iç içe iki tane for döngüsü tanımlandı.//
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[0][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[0][i]);

                }
            }

            break;
        case 2:
            printf("        SALI             \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        SALI             \n"
                         "Saatlik Sıcaklık Verileri\n");

            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[1][i]);
                    printf("%d:00",tablo[i]);
                    printf("      %d\n",gununsicaklikverileri[1][i]);

                }
            }

            break;
        case 3:
            printf("        ÇARŞAMBA         \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        ÇARŞAMBA         \n"
                         "Saatlik Sıcaklık Verileri\n");


            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[2][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[2][i]);

                }
            }

            break;
        case 4:
            printf("        PERŞEMBE         \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        PERŞEMBE         \n"
                         "Saatlik Sıcaklık Verileri\n");


            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[3][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[3][i]);

                }
            }

            break;
        case 5:
            printf("        CUMA             \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        CUMA             \n"
                         "Saatlik Sıcaklık Verileri\n");


            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[4][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[4][i]);

                }
            }

            break;
        case 6:
            printf("        CUMARTESİ        \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        CUMARTESİ        \n"
                         "Saatlik Sıcaklık Verileri\n");

            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[5][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[5][i]);

                }
            }

            break;
        case 7:
            printf("        PAZAR            \n"
                   "Saatlik Sıcaklık Verileri\n");
            fprintf(fptr,"        PAZAR            \n"
                         "Saatlik Sıcaklık Verileri\n");

            // Tabloyu doldurun.
            for (i = 0; i <8 ; i++){
                for (i = 0; i <8 ; i++){
                    fprintf(fptr,"%d:00",tablo[i]);
                    fprintf(fptr,"    |  %d\n",gununsicaklikverileri[6][i]);
                    printf("%d:00",tablo[i]);
                    printf("    |  %d\n",gununsicaklikverileri[6][i]);

                }
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