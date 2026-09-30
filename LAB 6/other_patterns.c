#include<stdio.h>
int main(void)
{
        {
            int i,j;
            int n;
            printf("Enter the number of rows: ");
            scanf("%d",&n);
            printf("Pattern 2\n");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                    {
                        printf("%d ",j);
                    }
                printf("\n");
            }
            return 0;
        }


        {
            int a,b;
            int c;
            printf("Enter the number of rows: ");
            scanf("%d",&c);
            printf("Pattern 3\n");
            for(a=c;a>=1;a--)
            {
                for(b=1;b<=a;b++)
                    {
                        printf("%d ",a);
                    }
                printf("\n");
            }
            return 0;
        }
}