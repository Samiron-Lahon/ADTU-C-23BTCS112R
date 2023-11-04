  #include<stdio.h>
  int main()
  {
    int rows, columns;
    printf("Enter the numbers of rows and columns: %d", rows, columns);
    scanf("%d %d", &rows, &columns);
    printf("Multiplication table:\n");

    for(int i=1; i<=rows; i++)
    {
      for(int j=1; j<=columns; j++)
      {
        int product=i*j;
        printf("%d", product);
      }
      printf("\n");
    }
    return 0;
  }