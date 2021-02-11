#include<stdio.h>
int main()
{
    int n;
    char sum,c;
    scanf("%c",&sum);
    fflush(stdin);
    scanf ("%d",&n);
    if(1<=n&&n<=32)
    {

    if(n%10==5)
    {
        printf("%c",92);
    }
    if(n%2!=0)
    {
        if(sum>=65&&sum<=73)

            printf("(^_^)");

        else if(sum<=82&&sum>73)


            printf("(*o*)");

        else if (sum>82&&sum<=90)


            printf("(T_T)");

    }
    else if(n%2==0)
    {
        if(sum>=65&&sum<=73)


            printf("{@_@}");

        else if(sum<=82&&sum>73)

            printf("{*v*}");

        else if (sum>82&&sum<=90)


            printf("{x_x}");

    }
    if(n%10==5)
    {
        printf("/");
    }
    }
    return 0;

}
