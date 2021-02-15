 #include<stdio.h>
 
 int binaryToDecimal( int n)
{
    int decimal_val = 0, base = 1, rem;

    while (n>0)
    {
        rem = n % 10;
        decimal_val = decimal_val + rem * base;
        n = n / 10;
        base = base * 2;
    }
    printf("%d",decimal_val);
    
}

void main(){
    int k;
    scanf("%d", &k);
    binaryToDecimal(k);
}