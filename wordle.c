#include <stdio.h>
#include <string.h>

#define tahmin_sayisi 6


void kelime_al(char tahmin[5]){
    printf("5 harfli bir kelime tahmin edin: \t");
    scanf("%s", tahmin);
    }

void str_yazdir(char str[]){
    for (int i = 0; str[i] != '\0'; i++) {
    printf("%c ", str[i]);
    }
    printf("\n");
}

void oyun(char hedef[5], char tahmin[], char cikti[], char yanlis[], char olmayan[] ){
    for(int c = 0; c < tahmin_sayisi; c++){
        str_yazdir(cikti);
        kelime_al(tahmin);
        int bulduk = 0;
        int a = 0;
        int b = 0;
        for(int i = 0; i<5; i++){
            for(int j =0; j<5; j++){
                if(tahmin[i] == hedef[j]){
                    bulduk = 1;
                    if(i == j)
                        cikti[i] = tahmin[i];  
                    else{
                        yanlis[a] = tahmin[i];
                        cikti[i] = '_';
                        a++;
                    }
                }
            }
            if(!bulduk){
                cikti[i] = '_';
                olmayan[b] = tahmin[i];
                b++;
            }
        }
        str_yazdir(cikti);
         if(strcmp(tahmin, hedef) == 0 ){
            printf("!!!!!Tebrikler Doğru Tahmin Ettiniz!!!!!");
            break;
        }
        printf("Yeri yanlis olan harfler:  ");
        str_yazdir(yanlis);
        printf("Olmayan harfler:   ");
        str_yazdir(olmayan);
       
    }

}


int main(){
    char tahmin[5];
    char hedef[] = {"roket"};
    char cikti[] = {'_', '_', '_', '_', '_', '\0'};    
    char olmayan[5];
    char yanlis[5];

    oyun(hedef, tahmin, cikti, yanlis, olmayan);
    


    



}