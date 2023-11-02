# ProblemSolving-C
Problem Solvinng Using C ( Module-1 )

1. C Program Basics to print "Welcoming Message"

       #include<stdio.h>
       int main ()
       {
        printf("Welcome to Assam down town University");
        return 0;
       }

2. C Program to Print an Integer (Entered by the User)

       #include<stdio.h>
       int main ()
       {
        int num;
        printf("Enter an Integer:");
        scanf("%d", &num);
        printf("You entered Integer is:");
        return 0;
       }
3. C Program to Print a String (Entered by the User)
<br>
(Using fgets allows us to read a line of text, including spaces, from the standard input)
<br>

      #include<stdio.h>
      #include<string.h>
      int main ()
      {
        char str[100];
        printf("Enter a string:");
        fgets(str, sizeof(str), stdin);
        printf("Your entered String is: %s", str);
        return 0;
      }

4.  C Program to Print a Float (Entered by the User)
<br>

      #include<stdio.h>
      int main ()
      {
        float pointNum;
        printf("Enter a point number:");
        scanf("%f", &pointNum);
        printf("Your entered point number is:");
        return 0;
      }

5. C program to find the Celsius from the given Fahrenheit

      #include<stdio.h>
      #include<math.h>
      int main ()
      {
        float celsius, fahrenheit;

        printf("Enter the temperature in celsius:");
        scanf("%f", &celsius);
        fahrenheit=(celsius*(9/5))+32;
        printf("The value of temperature in fahrenheit is: %f\n", fahrenheit);

        printf("Enter the temperature in fahrenheit:\n");
        scanf("%f", &fahrenheit);
        celsius=(fahrenheit-32)*(5/9);
        printf("The value of temperature in celsius is: %f\n", celsius);

        return 0;
      }