#include<stdio.h>
int main()
{
    int k,l,i=1,m;
    scanf("%d %d",&k,&l);
    switch(l)
    {
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : m= 31;
                  break;
        case 2 : m= 28;
                 break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : m = 30;
                  break;
    }
    while(i < m)
    {
        i+=7;
    }
    i-=7;
    for(i;i<=m;i++)
    {
        k+=1;
    }
    if(k>7)
        k-=7;
    printf("%d",k);
    return 0;
}
