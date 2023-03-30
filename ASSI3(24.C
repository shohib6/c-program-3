#include <stdio.h>
#define ROW     3
#define COL     3
int main(void)
{
    
    int aiData [ROW][COL] = { { 9, 6, 1 }, { 144, 70, 50 }, {10, 12, 78} };
    int *piData = NULL;
    int iRow =0, iCol =0;
    piData = &aiData[0][0]; 
    for (iRow = 0; iRow < ROW; ++iRow) 
    {
        for (iCol = 0; iCol < COL; ++iCol)
        {
            
            printf("aiData[%d][%d] = %d\n",iRow,iCol, *(piData + ( iRow * COL) + iCol));
        }
    }
    return 0;
}