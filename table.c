#include<stdio.h>
int main()
{

    int i, N;
    printf("enter the number: ");
    scanf("%d", &N);
    for(i=1; i<11; i++)
    {
        int R = N*i;
        printf("%d * %d = %d\n", N, i, R);
    }
}
