#include<stdio.h>
#include<string.h>
#include<map>

using namespace std;
int a[105];
int main()
{
    int n, m, k, l, s, flag;
    while (~scanf("%d", &n))
    {
        flag = l = s = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] && !flag)
            {
                s = i;
                flag = 1;
            }
            if (a[i])l = i;
        }
        if (flag == 0) { printf("0\n"); continue; }
        long long ans = 1;
        int sum = 0;
        for (int i = s; i <= l; i++)
            if (!a[i])sum++;
            else
            {
                ans *= sum + 1;
                sum = 0;
            }
        printf("%lld\n", ans);
    }
}
