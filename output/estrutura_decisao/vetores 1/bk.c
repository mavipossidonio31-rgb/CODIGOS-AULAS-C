#include <stdio.h>

int main()
{
    char lanche[4][20] = {
        "rodeio",
        "whopper",
        "cheddar duplo",
        "big king"};

    printf("---meus lanches favoritos---");
    
    for (int i = 0; i < 4; i++) {
        printf("\n%s", lanche[i]);
    }

    return 0;
}