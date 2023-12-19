  /*with temporary variable*/
  #include<stdio.h>
  int main ()
  {
    int num1, num2, tem;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    tem=num1
    num1=num2
    num2=tem
    printf("Value after swapping: num1= %d and num2= %d\n", num1, num2);
  return 0;
  }