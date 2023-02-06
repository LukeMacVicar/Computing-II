/***********************************************************
 Author: Luke MacVicar
 Date: 2/3/23
 Effort: 30 mins
 Purpose: This program was made to unflip bits in a number that we had already flipped. 
 ***********************************************************/
#include <stdio.h>

void set_flag(unsigned int* flag_holder, int flag_position);
void unset_flag(unsigned int * flag_holder, int flag_position);
int check_flag(unsigned int  flag_holder, int flag_position);
void display_32_flags(unsigned int flag_holder);

int main(int argc, char* argv[])
{
     unsigned int flag_holder = 0;

     set_flag(&flag_holder, 3);
     set_flag(&flag_holder, 16);
     set_flag(&flag_holder, 31);
    
     display_32_flags(flag_holder);
    
     unset_flag(&flag_holder, 31);
     unset_flag(&flag_holder, 3);
     set_flag(&flag_holder, 9);
    
     display_32_flags(flag_holder);
    
     return 0;
 }

int check_flag(unsigned int flag_holder, int flag_position)
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

void set_flag(unsigned int* pFlag_holder, int flag_position)
{
    int x = 1;
    
    x = x << flag_position;

    *pFlag_holder = (x | *pFlag_holder);
    
}

void unset_flag(unsigned int* flag_holder, int flag_position)
{
    int x = 1;
    
    x = x << flag_position;

    *flag_holder = (x ^ *flag_holder);
    
}

void display_32_flags(unsigned int flag_holder)
{
    int i;
    for(i=31; i>=0; i--)
    {
        printf("%d", check_flag(flag_holder, i));
        if(i%4 == 0)
        {
           printf(" ");
        }
    }
    printf("\n");
}
