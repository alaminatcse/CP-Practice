/*
    Problem Name: Last 2 Digits
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int res = (a % 100) * (b % 100) * (c % 100) * (d % 100);
    if (res % 100 > 9)
        printf("%d\n", res % 100);
    else
        printf("0%d\n", res % 100);
    return 0;
}

/*
    // Multiplication way like to paper we did in our childhood
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Compute the Karatsuba product of two large integers
char *karatsuba(char *x, char *y) {
    int m = strlen(x);
    int n = strlen(y);

    // If one of the operands is 0, return 0
    if (m == 0 || n == 0) {
        char *result = malloc(sizeof(char));
        result[0] = '0';
        return result;
    }

    // If the operands are small enough, compute the product directly
    if (m == 1 || n == 1) {
        long long a = atoi(x);
        long long b = atoi(y);
        long long c = a * b;

        char *result = malloc(sizeof(char) * 20);
        snprintf(result, 20, "%lld", c);
        return result;
    }

    // Split the operands into two halves
    int k = (m + 1) / 2;
    char *xh = x + k;
    char *xl = x;
    char *yh = y + k;
    char *yl = y;

    // Compute the Karatsuba product of the halves
    char *p1 = karatsuba(xh, yh);
    char *p2 = karatsuba(xl, yl);

    char *s1 = malloc(sizeof(char) * (m + n + 1));
    char *s2 = malloc(sizeof(char) * (m + n + 1));
    char *s3 = malloc(sizeof(char) * (m + n + 1));

    // Compute the sum and difference of the halves
    sprintf(s1, "%lld", atoi(xh) + atoi(xl));
    sprintf(s2, "%lld", atoi(yh) + atoi(yl));
    sprintf(s3, "%lld", atoi(s1) * atoi(s2) - atoi(p1) - atoi(p2));

    // Compute the final product
    char *result = malloc(sizeof(char) * (2 * m + 1));
    snprintf(result, 2 * m + 1, "%s%0*d%s", p1, m - k, 0, s3, p2);

    // Free dynamically allocated memory
    free(p1);
    free(p2);
    free(s1);
    free(s2);
    free(s3);

    return result;
}

int main() {
    char *x = "123456789";
    char *y = "987654321";

    char *result = karatsuba(x, y);

    printf("%s\n", result);

    free(result);

    return 0;
}

*/