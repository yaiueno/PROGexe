
#include <stdio.h>
#include <string.h>

int main()
{
    char moziretu [] = "mozi";
    int i=0;
    printf("The moziretu is %s\t", moziretu);
    printf("%d\n", strlen(moziretu));
    while (i<strlen(moziretu)){
        printf("%d\t",i);
        printf("%c\n",moziretu[i]);
        i++;
    }
    return 0;
}
