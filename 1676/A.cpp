#include <stdio.h>
int main()
{
    char a[6];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s", a);
        if((a[0]+a[1]+a[2]) == (a[3]+a[4]+a[5]))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


}