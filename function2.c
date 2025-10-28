#include<stdio.h>
void Mult(int n)
{
    for(int i = 1; i<11; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
}
int main()
{
    Mult(5);
     Mult(6);
    return 0;
}
