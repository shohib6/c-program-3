#include <stdio.h>
 
 
void nNumbers(int n)
{
    // base condition
    if(n == 0)
        return;
    
    // recursive call
    nNumbers(n-1);
    printf("%d ", n);
}
 
 
int main()
{
    
    INPUT:       
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
 
    if(n <= 0)
    {
        printf("Error, Please enter positive number \n");
        goto INPUT;
    }
 
    
    printf("Numbers are : ");
    nNumbers(n);
 
    printf("\n");
    return 0;
}