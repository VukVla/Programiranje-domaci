#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a;
    int brojac=0, i;
    printf("unesite karakter za promenu: ");
    scanf("%c", &a);
    FILE* pPRIMER = fopen("PRIMER.txt","r");
    int n = strlen(pPRIMER);
    char znak;
    for(i=1; i>0; )
    {
        znak = fgetc(pPRIMER);
        if(a==znak)
        {
            brojac++;
        }
        if(znak == EOF)
        {
            break;
        }
    }
    printf("Znak %c se pojavljuje %d put/a", a, brojac);
    fclose("primer.txt");
    return 0;
}
