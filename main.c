#include <stdio.h>

int main(void) {
    char nome,sesso;
    printf("Digitare il nome(solo iniziale): ");
    scanf("%c",&nome);
    getchar();
    printf("sesso (Maschio o Femmina) : ");
    scanf("%c",&sesso);
    if(sesso == 'M') {
        printf("Egreggio signor %c\n", nome);
    } else {printf("Gentilissima signora %c\n", nome);}
}
