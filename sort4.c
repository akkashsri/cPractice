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
