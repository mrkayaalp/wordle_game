#include <stdio.h>
#include <string.h>

#define tahmin_sayisi 6


void kelime_al(char tahmin[5]){
    printf("5 harfli bir kelime tahmin edin: \t");
    scanf("%s", tahmin);
    }

void oyun(char hedef[5], char tahmin[], char cikti[], char yanlis[], char olmayan[] ){
    for(int c = 0; c < tahmin_sayisi; c++){
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
        printf("%s\n", cikti);
        printf("Yeri yanlis olan harfler: %s\n", yanlis);
        printf("Olmayan harfler: %s\n", olmayan);
    }
}
void str_yazdir(char str[5]){
    for (int i = 0; str[i] != '\0'; i++) {
    printf("%c ", str[i]);
    }
}


int main(){
    char tahmin[5];
    char hedef[] = {"roket"};
    char cikti[] = {'_', '_', '_', '_', '_', '\0'};    
    char olmayan[5];
    char yanlis[5];
    
    printf("%s", cikti);
    

    



}