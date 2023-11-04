  #include<stdio.h>
  int main ()
  {
    int dividend, divisor, quotient, remainder;
    printf("Enter the dividend and divisor:");
    scanf("%d %d", &dividend, &divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("%d %d", quotient, remainder); 
    return 0;
  }