#include <stdio.h>
int main()
{
int N, p,t, remainder;
  scanf("%d\n", &N);
  for(int i=0;i<N;i++){
    scanf("%d\n", &p);
    t = p;
    int sum = 0;
    while(t!=0){
      remainder = t%10;
      sum += remainder;
      t = t/10;
    }
    printf("%d\n", sum);
  }
    return 0;
}