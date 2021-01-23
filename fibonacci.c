#include <stdio.h>
/* Include other headers as needed */
int main()
{
int i, n,t1=0,t2=1,nextTerm;
  scanf("%d", &n);
 
  for(i=1;i<=n;++i){     
    printf("%d\n", t1);
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;   
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}