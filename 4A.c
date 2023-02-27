#include<stdio.h>
int main()
{
char name[20];
float marks1,marks2,marks3;
float total,average;
int grade;
char remark[20];

printf("Enter the Name of the student : ");
scanf("%s",name);

printf("\nEnter the marks in Programming : ");
scanf("%f",&marks1);

printf("\nEnter the marks in Maths : ");
scanf("%f",&marks2);

printf("\nEnter the marks in O/S : ");
scanf("%f",&marks3);

total = marks1 + marks2 + marks3;
average = total/3.0;

if(average>=0 && average<40)
{
    grade = 7;
    sprintf(remark,"Fail");
}
else if(average>=40 && average<60)
{
    grade = 5;
    sprintf(remark,"Pass");
}
else if(average>=60 && average<80)
{
    grade = 3;
    sprintf(remark,"Credit");
}
else if(average>=80 && average<=100)
{
    grade = 1;
    sprintf(remark,"Distinction");
}

printf("\n\nName : %s",name);
printf("\nMarks in Programming : %.2f",marks1);
printf("\nMarks in Maths : %.2f",marks2);
printf("\nMarks in O/S : %.2f",marks3);
printf("\nTotal marks : %.2f",total);
printf("\nAverage marks : %.2f",average);
printf("\nGrade : %d",grade);
printf("\nRemark : %s",remark);

return 0;
}
