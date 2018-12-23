// Binary Search (İkili Arama) Algoritması - Eren Çar

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int dizi[]={1,20,44,54,68};
int bas,sayac= 0;
int son=sizeof(dizi)/sizeof(dizi[0])-1;
int aranan;

printf(“Dizide Aramak Istediginiz Degeri Girin\n”);
scanf(“%d”,&aranan);

while(bas<=son){
        int orta = (bas + son)/2;

             if (dizi[orta] == aranan){
                  printf(“Aradiginiz Deger %d . dizinde bulunmustur”,orta);
                             sayac++;
                                   break;  }
	     else if (aranan>dizi[orta]){
                             bas=orta+1;   }
	     else {
                            son=orta-1;    }  
}
           if(sayac==0){
               printf(“Aradiginiz Deger Bulunamamistir”);    }
}
