/*
    Problem Name:
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);

    char ch;
    int cnt[26] = {0};
    for(int i=0; i<n; i++)
    {
        scanf("%c", &ch);
        cnt[ch - 'a']++;
    }

    for (int i=0; i<26; i++)
    {
        if (cnt[i] > 0)
        {
            while(cnt[i]--)
                printf("%c", i+'a');
        }
    }
    printf("\n");
    return 0;
}