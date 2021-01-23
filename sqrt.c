#include <stdio.h>
#include<math.h>
/* Include other headers as needed */
int main()
{
    int T,n;
  scanf("%d\n", &T);
  for(int i=0;i<T;i++){
    scanf("%d\n",&n);
    double c=sqrt(n);
    printf("%.2f\n", c);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}