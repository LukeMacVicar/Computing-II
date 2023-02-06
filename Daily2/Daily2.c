/***********************************************************
 Author: Luke MacVicar
 Date: 1/24/23
 Effort: 20 mins
 Purpose: Use the left shift operator to iterate from 1 to 0. 
 ***********************************************************/
#include <stdio.h>

int main(int argc, char * argv[])
{
    int x, i;
    x = 1;
    for(i = 0;x > 0; i++)
    {
        printf("%d: %u\n",i,x);
        x = x << 1;
    }
    return 0;
}

