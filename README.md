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
