#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
    int segundos=0, minutos=0, horas=0, contagem;
    int b=1000;

    printf("Digite a horas, minutos e segundos atuais: ");
    scanf("%d", &segundos);
    scanf("%d", &minutos);
    scanf("%d", &horas);

    while(1){
        segundos++;
        if(segundos > 59){
            minutos++;
            segundos=0;
        }
            if(minutos > 59){
                horas++;
                minutos=0;
            }
                if(horas > 12){
                    horas=1;
                }
        printf("\nHorario= %02d:%02d:%02d", horas, minutos, segundos);

    _sleep(b);
    system("cls");
    }

    return 0;
}