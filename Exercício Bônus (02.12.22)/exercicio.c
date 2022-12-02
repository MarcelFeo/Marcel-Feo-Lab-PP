#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_MAX 100

int main()
{

    char frase[TAM_MAX];

    printf("Digite uma frase: ");
    fgets(frase, TAM_MAX, stdin);

    for(int i=0; i < strlen(frase); i++) {

        if(frase[i] == 'r' && frase[i + 1] == 'r') {
            frase[i] = 'l';

            for(int j= i + 1; j < frase[j] != '\0'; j++) {
                frase[j] = frase[j + 1];
            }
        } else if(frase[i] == 'r' && frase[i + 1] != ' ') {
            frase[i] = 'l';
        }

        if(frase[i] == 'R' && frase[i + 1] == 'R') {
            frase[i] = 'L';

            for(int j= i + 1; j < frase[j] != '\0'; j++) {
                frase[j] = frase[j + 1];
            }
        } else if(frase[i] == 'R' && frase[i + 1] != ' ') {
            frase[i] = 'L';
        }
    }

    printf("A frase eh: %s", frase);

    return 0;
}
