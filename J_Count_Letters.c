/*
    Problem Name: Count Letters
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    int ar[26] = {0};
    while(scanf("%c", &ch) != EOF)
        ar[ch-'a']++;

    for(int i=0; i<26; i++)
    {
        if(ar[i])
            printf("%c : %d\n", 'a'+i, ar[i]);
    }
    return 0;
}