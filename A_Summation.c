#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    unsigned long long sum = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }
    printf("%llu\n", llabs(sum));
    return 0;
}