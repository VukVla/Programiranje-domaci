#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];
    FILE* PokNaDat = fopen("tekstualni_dokument.txt","w+");
    printf("unesite ime, prezime i broj u dnevniku:");
    char string1[100], string2[100];
    int broj;
    gets(string1);
    gets(string2);
    scanf("%d", &broj);
    fputs(string1, PokNaDat);
    fputs(string2, PokNaDat);
    fprintf(PokNaDat, "%d", broj);
    fclose(PokNaDat);
    return 0;
}
