#include<stdio.h>
 

    Description: 'min' function finds min of 'num1' and 'num2'
    arguments_list: (int, int)
    return_type: (int)

int min(int num1, int num2)
{
    
    return (num1 > num2) ? num2 : num1;
}
 
int main()
{
    int num1, num2, minimum;
 
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
 
    
    minimum =  min(num1, num2);
 
  printf("The minimum of %d and %d is : %d\n", num1, num2, minimum);
 
    return 0;
}