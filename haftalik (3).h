#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define HAFTA_UZUNLUGU 7 // define ile "HAFTANIN_UZUNLUGU" ifadesini görünce 7 olarak algılaması gerektiğini bellirttik.//

struct hava{
    char* sehir;
    int sicaklikgunduz;
    int sicaklikgece;
};
int haftalik(){

    struct hava c[HAFTA_UZUNLUGU];
    struct hava x;
    FILE* fptr;
    fptr= fopen ("/Users/dilarameral/Desktop/Hava Durumu/data.txt","a");
    if(fptr==NULL){
        return 1;
    }

    x.sehir="ANKARA";

    c[0].sicaklikgunduz=11;    // pazartesi //
    c[0].sicaklikgece=6;

    c[1].sicaklikgunduz=8;    // salı //
    c[1].sicaklikgece=3;

    c[2].sicaklikgunduz=5;    // çarşamba //
    c[2].sicaklikgece=-4;

    c[3].sicaklikgunduz=4;    // perşembe //
    c[3].sicaklikgece=-3;

    c[4].sicaklikgunduz=3;    // cuma //
    c[4].sicaklikgece=-6;

    c[5].sicaklikgunduz=0;    // cumartesi //
    c[5].sicaklikgece=-9;

    c[6].sicaklikgunduz=0;    // pazar //
    c[6].sicaklikgece=-7;

    fprintf(fptr,"---------------------------------------------------------\n");
    fprintf(fptr,"---------------ANKARA İÇİN HAFTALIK HAVA DURUMU----------\n");
    fprintf(fptr,"               GÜNDÜZ SICAKLIĞI    &    GECE SICAKLIĞI      \n");

    fprintf(fptr,"PAZARTESİ       |     %d                     %d             \n",c[0].sicaklikgunduz,c[0].sicaklikgece);
    fprintf(fptr,"SALI            |     %d                      %d            \n",c[1].sicaklikgunduz,c[1].sicaklikgece);
    fprintf(fptr,"ÇARŞAMBA        |     %d                     %d             \n",c[2].sicaklikgunduz,c[2].sicaklikgece);
    fprintf(fptr,"PERŞEMBE        |     %d                     %d             \n",c[3].sicaklikgunduz,c[3].sicaklikgece);
    fprintf(fptr,"CUMA            |     %d                     %d             \n",c[4].sicaklikgunduz,c[4].sicaklikgece);
    fprintf(fptr,"CUMARTESİ       |     %d                     %d             \n",c[5].sicaklikgunduz,c[5].sicaklikgece);
    fprintf(fptr,"PAZAR           |     %d                     %d             \n",c[6].sicaklikgunduz,c[6].sicaklikgece);

    fclose(fptr);

    return 0;
}