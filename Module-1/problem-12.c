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