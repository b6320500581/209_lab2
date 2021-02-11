#include<stdio.h>
int main()
{
    int i,j;
    float n,sum=0;
    char a;
    scanf("%c",&a);
    scanf("%f",&n);
    i=n;
    j=n*100;
    j%=100;
    if(a == 'A')
    {
        sum+=199;
        if(n > 200)
        {
            i-=200;
            sum+=i*3;
            sum+=j*3/60.0;
        }
    }
    else if(a == 'B')
    {
        sum+=299;
        if(n > 400)
        {
            i-=400;
            sum+=i*2;
            sum+=j*2/60.0;
        }
    }
    printf("%.2f",sum);
    return 0;
}

