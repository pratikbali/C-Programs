//
//  PaternABCD.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

void PrintPattern(int iRow, int iCol)
{
    int i = 0, j= 0;
    char ch;
    
    for(i = 0; i < iRow; i++)
    {
        ch = 'a';
        for(j = 0; j < iCol; j++,ch++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }
    
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("\nEnter row and column Respectively : ");
    scanf("%d%d",&iNo1,&iNo2);
    
    PrintPattern(iNo1,iNo2);
    return 0;
}
