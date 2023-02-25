#include <stdio.h>
#include <string.h>



void kelime_al(char tahmin[5]){
    printf("5 harfli bir kelime tahmin edin: \t");
    scanf("%s", tahmin);
    }
void oyun(char hedef[5], char tahmin[], char cikti[], char yanlis[], char olmayan[] ){
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
}

int main(){
    char tahmin[5];
    char hedef[5];
    char cikti[] = {'_', '_', '_', '_', '_', '\0'};    
    char olmayan[5];
    char yanlis[5];
    kelime_al(tahmin);
    printf("%s\n", tahmin);
    printf("%s\n", hedef);

    



}