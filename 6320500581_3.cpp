#include<stdio.h>
int main()
{
    int a,b,c,num[3],tmp=0;
    char check[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a>c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if(b>c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    scanf("%s",check);
    for(int i=0;i<3;i++)
    {
        if(check[i]=='A')
        {
            num[i]=a;
        }
        else if(check[i]=='B')
        {
            num[i]=b;
        }
        else if(check[i]=='C')
        {
            num[i]=c;
        }
    }
    printf("%d %d %d",num[0],num[1],num[2]);

    return 0;
}
