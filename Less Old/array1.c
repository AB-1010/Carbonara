#include <stdio.h>
const int n=100;
int rw()
{
    int x= -1;
    while(!(x<n&&x>-1))
    {
        printf("Enter the address of the element you want to edit: \n");
        scanf("%d", &x);
    }
    return x;
}

int main()
{
    int array[n], y, z, q;
    char s= 'y';
    while(s == 'y')
    {
        y = rw();
        printf("Enter value: \n");
        scanf("%d", &z);
        array[y]= z;
        printf("Do you want to enter something? y or n\n");
        scanf("%s", &s);
    }
    printf("Which address do you want to access?: \n");
    scanf("%d", &q);
    printf("\n %d", array[q]);
}