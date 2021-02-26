#include <stdio.h>
//Enter the details of Five student as input: Name Roll No Marks1 Marks2 : Total, avg, grade (if avg => 85 S, b/w 70 85 A, b/w 60 70 B, b/w 50 60 C, lower than 50 F)
int input(char name[], int roll[], int mark1[], int mark2[])
{
    int num= 0, grader =0, avg = 0;
    char grade;
    printf("Name |  Roll No. | Total | Avg | Grade \n");
    while (num<5)
    {
        grader = ((mark1[num]+mark2[num])/2);
        if (grader >= 85)
        {
            grade = 'S';
        }
        else if ((grader < 85) && (grader >= 70))
        {
            grade = 'A';
        }
        else if ((grader < 70) && (grader >= 60))
        {
            grade = 'B';
        }
        else if ((grader < 60) && (grader >= 50))
        {
            grade = 'C';
        }
        else
        {     
            grade = 'F';  
        }
        printf("%s | %d | %d | %d | %s \n", name[num], roll[num], (mark1[num] + mark2[num]), grader, grade);
        num++;
    }
}

int main()
{
    int roll[4], mark1[4], mark2[4];
    char name[4];
    int n = 1, i;
    for(i=0; i<5; i++)
    {
        printf("Please enter the first name of student %d: ", n);
          scanf("%s", &name[i]);
        printf("\n Enter the roll number of student %d: ", n);
          scanf("%d", &roll[i]);
        printf("\n Enter the marks of subject 1 of student %d: ", n);
          scanf("%d", &mark1[i]);
        printf("\n Enter the marks of subject 2 of student %d: ", n);
          scanf("%d", &mark2[i]);
        n++;
    }
    input(name, roll, mark1, mark2);
}