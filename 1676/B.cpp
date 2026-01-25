#include <stdio.h>
int main()
{
    int t,n,k;
    int max,min;
    scanf("%d", &t);
    int sum =0;

    for(int k=0; k<t; k++)
    {
        
        scanf("%d", &n);

        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        min = a[0];

        for(int i=0;i<n;i++)
        {
            if(min>a[i])
            {
                min = a[i];
            }
        }

        for(int i=0;i<n;i++)
        {
            a[i] = a[i] - min;
            sum += a[i];
        }
        printf("%d\n",sum);
        sum = 0;
    }

}