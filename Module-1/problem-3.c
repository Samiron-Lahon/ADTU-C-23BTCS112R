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


