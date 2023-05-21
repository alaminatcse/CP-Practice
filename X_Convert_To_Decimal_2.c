/*
    Problem Name: Convert to Decimal
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        unsigned int n;
        scanf("%i", &n);
        int count = 0;
        while(n) {
            if(n%2) {
                count++;
            }
            n /= 2;
        }
        int sum = 0;
        for(int i = 0; i < count; i++) {
            sum += pow(2, i);
        }
        printf("%d\n", sum);
    }
    return 0;
}