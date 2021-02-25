#include <stdio.h>

//counter works with character array and returns string int value
int counter(char test[])
{
    int n =0;
    while(!(test[n] == '\0'))
    {
        n= n+1;
    }
    printf("length of string is %d \n", n);
    return n;
}

int findletters(char letter, char array[])
{
    int n = 0;
    while(!(array[n] == '\0'))
    {
        if (array[n]== letter)
        {
            printf("[%c]", array[n]);
        }
        else
        {
            printf("%c", array[n]);
        }
        n = n+1;
    }
}


int main()
{
    char jk[100], letter;
    printf("Enter the word: \n");
    scanf("%s", &jk);
    printf("Now enter the letter you want to highlight: \n");
    scanf(" %c", &letter);
    findletters(letter, jk);
}
