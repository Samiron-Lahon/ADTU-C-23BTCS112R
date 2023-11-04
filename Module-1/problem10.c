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