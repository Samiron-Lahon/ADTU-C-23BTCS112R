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
<br>

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

6. C program to find the determinant value of the quadratic equation 
from the given input a, b, c
<br>

      #include<stdio.h>
      #include<math.h>
      int main ()
      {
        double a, b, c, determinant, root1, root2, realPart, imaginaryPart;
        printf("Enter the coeffecients a, b and c:");
        scanf("%f %f %f", &a, &b, &c);
        determinant=b*b-4*a*c;
        if(determinant>0)
        {
          root1=((-b + sqrt(determinant))/(2*a));
          root2=((-b + sqrt(determinant))/(2*a));
          printf("The roots are real and different. root1= %f and root2= %f", root1, root2);
        }
        else if(determinant==0)
        {
          root1=root2=(-b)/(2*a);
          printf("Roots are real and same. root1=root2= %f", root1);
        }
        else
        {
          realPart=((-b)/(2*a));
          imaginaryPart=((sqrt(-determinant))/(2*a));
          printf("Roots are complex. root1= %f + %fi and root2= %f + %fi", realPart, imaginaryPart, realPart, imaginaryPart);
        }
        return 0;
      }

7. C Program to Add Two Integers 
<br>   

      #include<stdio.h>
      #include<math.h>
      int main ()
      {
        int a, b, add;
        printf("Enter the numbers:");
        scanf("%d %d", &a, &b);
        add=a+b;
        printf("The sum of entered numbers is: %d", add);
        return 0;
      }

8. C Program to Multiply Two Floating-Point Numbers
<br>

       #include<stdio.h>
       #include<math.h>
       int main ()
       {
        int num1, num2, mul;
        printf("Enter the numbers:");
        scanf("%d %d", &num1, &num2);
        mul=num1*num2;
        printf("The multiple entered numbers is: %d", mul);
        return 0;
       }

9. C Program to Find ASCII Value of a Character
<br>

       #include<stdio.h>
       int main ()
       {
        char a;
        printf("Enter the character:");
        scanf("%c", &a);
        printf("The ASCII value of entered %c is %d", a, a);
        return 0;
       }

10.  C Program to display the find the volume of a cube
<br>

       #include<stdio.h>
       #include<math.h>
       int main ()
       {
        float side, volume;
        printf("Enter the lenght of the side of the cube:");
        scanf("%f", &side);
        volume=side*side*side;
        printf("The volume of the cude is: %f", volume);
        return 0;
       }

11. C program to find the perimeter of a rectangle
<br>

       #include<stdio.h>
       #include<math.h>
       int main ()
       {
        float lenght, width, perimeter;
        printf("Enter lenght and width of the rectangle:");
        scanf("%f %f", &lenght, &width);
        perimeter=2 (length + width);
        printf("The value of perimeter of the rectangle is: %f", perimeter);
        return 0;
       }

12. C program to find the volume of a sphere
<br>
 
       #include<stdio.h>
       #include<math.h>
       int main ()
       {
        float radius, pie=(22/7), volume;
        printf("Enter the value of radius:");
        scanf("%f", &radius);
        volume=(4.0/3.0)*pie*(radius*radius*radius);
        printf("Volume of the sphere is: %f", volume);
        return 0;
       }

13. C program to find the total marks of 5 subjects and its average
<br>

       #include<stdio.h>
       #include<math.h>
       int main ()
       {
        float sub1, sub2, sub3, sub4, sub5, avg;
        printf("Enter the numbers of the subjects:");
        scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
        avg=(sub1+sub2+sub3+sub4+sub5)/5:
        printf("The avg of the subjects is: %f", avg);
        return 0;
       }

14. C Program to Compute Quotient and Remainder
<br>

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

15.C Program to Find the Size of int, float, double, and char
<br>

      #include<stdio.h>
      int main ()
      {
        printf("Size of int: %d\n bytes", sizeof(int));
        printf("Size of float: %d\n  bytes", sizeof(float));
        printf("Size of double: %d\n bytes", sizeof(double));
        prinntf("Size of char: %d\n bytes", sizeof(char));
        return 0;
      }