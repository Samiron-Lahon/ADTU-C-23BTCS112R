   #include<stdio.h>
   #include<math.h>
   int main ()
   {
    float basic, DA, HRA, CCA, IT, PT, PF, GS, NS;

    printf("Enter Basic salary:");
    scanf("%f", &basic);

    printf("Enter DA:\n");
    scanf("%f", &DA);

    printf("Enter HRA:\n");
    scanf("%f", &HRA);

    printf("Enter CCA:\n");
    scanf("%f", &CCA);

    printf("Enter IT:\n");
    scanf("%f", &IT);

    printf("Enter PT:\n");
    scanf("%f", &PT);

    printf("Enter PF:\n");
    scanf("%f", &PF);

    GS= basic + DA + HRA + CCA;
    NS= GS - (IT + PT + PF);

    printf("Gross Salary is: %f\n", GS);
    printf("Net Salary is: %f\n", NS);
         
    return 0;
   }