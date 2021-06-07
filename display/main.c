#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int a[20];
    int i;
    scanf("%d",&a[0]);
    for(i=0;i<=19;i++)
        printf("%d  ",a[i]);
    return 0;
}
