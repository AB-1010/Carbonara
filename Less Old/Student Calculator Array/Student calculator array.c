#include <stdio.h>
//Enter the details of Five student as input: Name Roll No Marks1 Marks2 : Total, avg, grade (if avg => 85 S, b/w 70 85 A, b/w 60 70 B, b/w 50 60 C, lower than 50 F)
int input(int roll[], int mark1[], int mark2[])
{
    int num= 0, grader =0, avg = 0, total;
    char grade;
    printf("\nRoll No. | Total | Avg | Grade \n");
    while (num<5)
    {
        grader = ((mark1[num]+mark2[num])/2);
        total= (mark1[num] + mark2[num]);
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
        printf("%8.0d | %5.0d | %3.0d | %5.0c\n", roll[num], total, grader, grade);
        num++;
    }
}

int main()
{
    int roll[10], mark1[10], mark2[10];
    int n = 1, i;
    for(i=0; i<5; i++)
    {
        printf("\n Enter the roll number of student %d: ", n);
          scanf("%d", &roll[i]);
        printf("\n Enter the marks of subject 1 of student %d: ", n);
          scanf("%d", &mark1[i]);
        printf("\n Enter the marks of subject 2 of student %d: ", n);
          scanf("%d", &mark2[i]);
        n++;
    }
    input(roll, mark1, mark2);
}

// TEST INPUT: 1 90 80  2 75 65  3 80 60  4 40 30  5 95 45