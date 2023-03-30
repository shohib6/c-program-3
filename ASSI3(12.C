#include <stdio.h>

void printEven(int, int);
void printOdd(int, int);

void main()
{
    int start, end;

    printf("Enter the number to start: ");
    scanf("%d", &start);
    printf("Enter the number to end: ");
    scanf("%d", &end);

    printf("\nEven numbers are-\n");
    printEven(start, end);
    printf("\nOdd numbers are-\n");
    printOdd(start, end);
}

void printEven(int start, int end)
{
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d\t", start);

    printEven(start+1, end);
}

void printOdd(int start, int end)
{
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d\t", start);

    printOdd(start+1, end);
}