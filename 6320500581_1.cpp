#include <stdio.h>
int main ()
{
  int a,b,c,d;
  scanf ("%d",&a);
  scanf ("%d",&b);
  scanf ("%d",&c);
  d=a+b+c;
  if (d>=80)
  {
      printf ("A");
  }
  else if (d>=75&&d<=79)
  {
     printf ("B+");
  }
  else if (d>=70&&d<=74)
  {
     printf ("B");
  }
  else if (d>=65&&d<=69)
  {
     printf ("C+");
  }
  else if (d>=60&&d<=64)
  {
     printf ("C");
  }
  else if (d>=55&&d<=59)
  {
     printf ("D+");
  }
  else if (d>=50&&d<=54)
  {
     printf ("D");
  }
  else
  {
      printf ("F");
  }
  return 0;
}
