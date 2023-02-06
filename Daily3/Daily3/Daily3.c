/***********************************************************
 Author: Luke MacVicar
 Date: 1/29/23
 Effort: 3 hours
 Purpose: Flip a specific bit from the binary representation of a number.
 ***********************************************************/
 
#include <stdio.h>

void set_flag(int* pFlag_holder, int flag_position);
int check_flag(int flag_holder, int flag_position);

int main(int argc, char* argv[])
{
    int flag_holder = 0;
    int i;
    set_flag(&flag_holder, 3);
    set_flag(&flag_holder, 16);
    set_flag(&flag_holder, 31);
    for(i=31; i>=0; i--)
    {
        printf("%d", check_flag(flag_holder, i));
        if(i%4 == 0)
        {
           printf(" ");
        }
    }
    printf("\n");
    return 0;
 }

void set_flag(int* pFlag_holder, int flag_position)
{
    int x = 1;
    
    x = x << flag_position;

    *pFlag_holder = (x | *pFlag_holder);
    
}

int check_flag(int flag_holder, int flag_position)
{
    int x = 1;

    if (flag_holder & x << flag_position)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

