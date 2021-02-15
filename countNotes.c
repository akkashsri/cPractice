#include <stdio.h>
int main()
{
  	int amt;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
	scanf("%d",&amt);
  	
  	if(amt>=2000)
    {
      a = amt / 2000;
      amt = amt - (2000 * a);
    }
  	if(amt>=500)
    {
      b = amt / 500;
      amt = amt - (500*b);
    }
  	if(amt>=100)
    {
      c = amt / 100;
      amt = amt - (100*c);
    }
  	if(amt>=50)
    {
      d = amt / 50;
      amt = amt - (50*d);
    }
  	if(amt>=20)
    {
      e = amt / 20;
      amt = amt - (20*e);
    }
  	if(amt>=10)
    {
      f = amt / 10;
      amt = amt - (10*f);
    }
  	if(amt>=5)
    {
      g = amt / 5;
      amt = amt - (5*g);
    }
  	if(amt>=2)
    {
      h = amt / 2;
      amt = amt - (2*h);
    }
  	if(amt>=1)
    {
      i = amt / 1;
      amt = amt / (1*i);
    }
  printf("2000 Rupees = %d\n",a);
  printf(" 500 Rupees = %d\n",b);
  printf(" 100 Rupees = %d\n",c);
  printf("  50 Rupees = %d\n",d);
  printf("  20 Rupees = %d\n",e);
  printf("  10 Rupees = %d\n",f);
  printf("   5 Rupees = %d\n",g);
  printf("   2 Rupees = %d\n",h);
  printf("   1 Rupees = %d\n",i);
    return 0;
}