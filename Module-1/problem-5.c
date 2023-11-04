  #include<stdio.h>
  #include<math.h>
  int main ()
  {
    float celsius, fahrenheit;

    printf("Enter the temperature in fahrenheit:\n");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit-32)*(5/9);
    printf("The value of temperature in celsius is: %f\n", celsius);

    return 0;
  }