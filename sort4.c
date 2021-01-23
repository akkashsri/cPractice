#include<stdio.h>
void sort4Integers(int a, int b, int c, int d)
{
  if(a>b)
  {
    a=a+b;
    b=a-b;
    a=a-b;
  }
  if(c>d)
  {
    c=c+d;
    d=c-d;
    c=c-d;
  }
  if(a>c)
    {
    a=a+c;
    c=a-c;
    a=a-c;
  }
  if(b>d)
  { 
    b=b+d;
    d=b-d;
    b=b-d;
  }
  if(b>c)
   {
    b=b+c;
    c=b-c;
    b=b-c;
  }
  printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}

void main(){
    int k,l,m,n;
    scanf("%d %d %d %d", &k, &l, &m, &n);
    sort4Integers(k,l,m,n);
}
