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