#include <stdio.h>
const int n=100, o=100;

int main()
{
    int array[n][o], z, q, x= -1, x1=-1;
    char s= 'y', v= 'y';
    while(s == 'y')
    {
        while(!((x<n&&x>-1)&&(x1<n&&x1>-1)))
        {
            printf("Enter the address of the element you want to edit (row, column): \n");
            scanf("%d , %d", &x, &x1);
        }
        printf("Enter value: \n");
        scanf("%d", &z);
        array[x][x1]= z;
        x= -1, x1=-1;
        printf("Do you want to edit something? y or n\n");
        scanf("%s", &s);       
    }
    while(s == 'n')
    { 
        while(v == 'y')
        {
            printf("Which address do you want to view?: \n");
            scanf("%d, %d", &x, &x1);
            printf("%d \n", array[x][x1]);
            x= -1, x1=-1;
            printf("Do you want to view something else? y or n: ");
            scanf(" %s", &v);
        }
    }
}