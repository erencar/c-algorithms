// Bubble Sort (Kabarcık Sıralama) Algoritması - Eren Çar

#include <stdio.h>
#include <stdlib.h>

     int main(int argc, char *argv[]) {

     int n=sizeof(dizi)/sizeof(dizi[0])-1;;
     int dizi[]={4,5,8,6,2,1,0,8,6};
     int deger,i,j;

     for(i=1 ; i < n; i++) {

          for(j = 0; j <n-i; j++){  

                  if (dizi[j] > dizi[j+1]){
		      deger=dizi[j+1];
                      dizi[j+1] = dizi[j];
                      dizi[j] = deger;  } 
   }
 }
   for(i = 0; i < n; i++) { 
       printf(“\n %d”,dizi[i]);  
 }
}
