#include <stdio.h>
#include <string.h>

#define tahmin_sayisi 10
#define kelime_uzulugu 5


void kelime_al(char tahmin[kelime_uzulugu]){
    printf("%d harfli bir kelime tahmin edin: \t", kelime_uzulugu);
    scanf("%s", tahmin);
    }

void str_yazdir(char str[]){
    for (int i = 0; i<kelime_uzulugu; i++) {
    printf("%c ", str[i]);
    }
    printf("\n");
}

void oyun(char hedef[kelime_uzulugu], char tahmin[], char cikti[], char yanlis[], char olmayan[] ){
    str_yazdir(cikti);
    int flag = 1;
    for(int c = 0; c < tahmin_sayisi; c++){
        kelime_al(tahmin);
        int b = 0;
        int a = 0;
        yanlis[1] = '\0';
        for(int i = 0; i<kelime_uzulugu; i++){
            int bulduk = 0;
            for(int j =0; j<kelime_uzulugu; j++){
                if(tahmin[i] == hedef[j]){
                    bulduk = 1;
                    if(i == j){
                        cikti[i] = tahmin[i];
                        break;
                    }
                    else{
                        if(i < j){ //aynı harften iki tane olunca oluşan hatayı engelliyo
                        yanlis[a] = tahmin[i];
                        cikti[i] = '_';
                        a++;
                        }
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
            printf("!!!!!Tebrikler Doğru Tahmin Ettiniz!!!!!\n");
            flag = 0;
            break;
        }
        printf("Yeri yanlis olan harfler:  ");
        str_yazdir(yanlis);        
        printf("Olmayan harfler:   ");
        str_yazdir(olmayan);
       
    }
    if(flag)
        printf("Tahmin Hakkiniz Bitti (-_-;)\n");
}


int main(){
    char tahmin[kelime_uzulugu];
    char hedef[] = {"leyla"}; //değiştirdiğiniz hedef kelimenin uzunluğunu yukarda "kelime_uzunlugu"'undan değiştiriniz
    char cikti[] = {"_______________"};    
    char olmayan[kelime_uzulugu] = {'\0'};
    char yanlis[kelime_uzulugu] = {'\0'};

    oyun(hedef, tahmin, cikti, yanlis, olmayan);
    
}