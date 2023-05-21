/*
    Problem Name: Good or Bad
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        char s[100001];
        scanf("%s", s);
        int rem = 0;
        for(int i=0; i<strlen(s)-2; i++)
        {
            if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
            {
                rem = 1;
                break;
            }
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
            {
                rem = 1;
                break;
            }
        }
        if(rem)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}