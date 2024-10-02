// Online C compiler to run C program online
#include <stdio.h>

/*

Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.

*/

void remover(char *s, char letra)
{
    int z = 0;
    for(int i = 0;s[i]!='\0';i++)
    {
        if(s[i] != letra)
        {
            s[z] = s[i];
             z++;
        }
    }
    s[z] = '\0';
}


int main() {
    char string[10];
    char letra;
    
    printf("Digite uma palavra\n");
    fgets(string,10,stdin);
    printf("Digite a letra que deseja remover\n");
    scanf("%c", &letra);
    printf("A palavra que você DIGITOU FOI: %s\nA letra que será retirada é: %c\n", string, letra);
    remover(string, letra);
    printf("Palavra Nova: %s", string);
    return 0;
}