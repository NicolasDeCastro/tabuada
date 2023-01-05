#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pepino[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int x;
    int i;
    printf("digite a tabuada desejada!\n");
    scanf("%d", &i);
    for (x = 0; x < 10; x++) {
        pepino[x] = pepino[x] * i;
    }
    for (x = 0; x < 10; x++) {
        printf("tabuada do [%d] x [%d]=[%d]\n", i, x, pepino[x]);
    }
    return 0;

}
