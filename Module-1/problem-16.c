  #include<stdio.h>
  int main()
  {
    int regularInteger=10000000000;
    long longInteger=10000000000;
    printf("Regularinteger: %d\n", regularInteger);
    printf("Longinteger: %ld\n", longInteger);
    regularInteger=999999999;
    longInteger=99999999999;
    printf("Updated regularInteger: d%\n", regularInteger);
    printf("Updated longInteger: %ld\n", longInteger);
    return 0;
  }