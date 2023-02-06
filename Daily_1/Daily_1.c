#include <stdio.h>
#include <string.h>

void reverse(char word[]);

int main(int argc, char * argv[])
{
    char word[] = "Happy Birthday!";
    reverse(word);
    printf("%s\n",word);
    return 0;
}

void reverse(char* word)
{
    int i, temp;
    double len;
    
    len = strlen(word);

    for(i = 0; i < len / 2; i++)
    {
        temp = word[i];
        word[i] = word[(int)len - i - 1];
        word[(int)len - i - 1] = temp;
    }
    
}

