// 12-09-2022

#include <stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        int t1 = a - 1;
        int t2;
        {
            if(c>b)
            {
                t2 = 2*c - b -1;
            }
            else
            {
                if(c==1)
                {
                    t2 = b - c;
                }
                else
                {
                    t2 = b - 1;
                }

            }
        }
        if(t1>t2)
        {
            printf("2\n");
        }
        else if(t1<t2)
        {
            printf("1\n");
        }
        else
        {
            printf("3\n");
        }



    }
}