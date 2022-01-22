#include<stdio.h>
#include<conio.h>

struct semester
{

    char subject[20];
    int cradit;
    int fterm,mterm,final_term,otherMark;

};
int grade;
int totalMark[4];
int num=0,i;
int scradit[4];
float Grade_Value =0;
float Grade_Points[4];
float Grade_Points2=0;
float g_value[4];
float sgpa=0,avareg_credit=0,avareg_point=0;
void userinput();
void gradecheck();
void result();

int main()
{

    printf("Number of Semester: ");
    scanf("%d",&num);
    system("cls");
    userinput();
    gradecheck();

}



void userinput()
{

    printf("\t\t\t\t\t\tSemester %d SGPA Calculation\n",num);
    struct semester student[3];
    student[0].cradit=0;
    for(i=0; i<4; i++)
    {
        printf("Subject Number %d\n",i+1);
        printf("Subject Name: \n");
        fflush(stdin);
        gets(student[i].subject);
        printf("Subject Credit: \n");
        scanf("%d",&student[i].cradit);
        printf("First Term Mark 20% :\n");
        scanf("%d",&student[i].fterm);
        printf("Mid Term Mark 20% :\n");
        scanf("%d",&student[i].mterm);
        printf("Final Term Mark 35% :\n");
        scanf("%d",&student[i].final_term);
        printf("Others Mark 25 %:\n");
        scanf("%d",&student[i].otherMark);
        //system("cls");
        printf("\n\n");
    }
    for(i=0; i<4; i++)
    {
        totalMark[i] = student[i].fterm*.2 + student[i].mterm*.2 + student[i].final_term*.35 + student[i].otherMark;
    }
    for(i=0; i<4; i++)
    {
    scradit[i]=student[i].cradit;

    }
    avareg_credit=scradit[0]+scradit[1]+scradit[2]+scradit[3];
}


//Grading check
void gradecheck()
{
    system("cls");
    struct semester student[3];
    for(i=0; i<4; i++)
    {
        printf("\nSubject %d %s",i+1,student[i].subject);

        grade=totalMark[i];
        if(grade>=90 && grade<=100)
        {
            printf("\n\nLetter Grade: A");
            printf("\n\nGrade Value: 4.0");
            Grade_Value=4.0;
        }
        else if(grade>=87 && grade<=89)
        {
            printf("\n\nLetter Grade: B+");
            printf("\n\nGrade Value: 3.7");
            Grade_Value=3.7;
        }
        else if(grade>=84 && grade<=86)
        {
            printf("\n\nLetter Grade: B");
            printf("\n\nGrade Value: 3.4");
            Grade_Value=3.4;
        }
        else if(grade>=80 && grade<=83)
        {
            printf("\n\nLetter Grade: B-");
            printf("\n\nGrade Value: 3.1");
            Grade_Value=3.1;
        }
        else if(grade>=77 && grade<=79)
        {
            printf("\n\nLetter Grade: C+");
            printf("\n\nGrade Value: 2.8");
            Grade_Value=2.8;
        }
        else if(grade>=74 && grade<=76)
        {
            printf("\n\nLetter Grade: C");
            printf("\n\nGrade Value: 2.5");
            Grade_Value=2.5;
        }
        else if(grade>=70 && grade<=73)
        {
            printf("\n\nLetter Grade: C-");
            printf("\n\nGrade Value: 2.2");
            Grade_Value=2.2;
        }
        else if(grade>=65 && grade<=69)
        {
            printf("\n\nLetter Grade: D+");
            printf("\n\nGrade Value: 1.5");
            Grade_Value=1.5;
        }
        else if(grade>=60 && grade<=64)
        {
            printf("\n\nLetter Grade: D");
            printf("\n\nGrade Value: 1.0");
            Grade_Value=1.0;
        }
        else if(grade>=1 && grade<=59)
        {
            printf("\n\nLetter Grade: F");
            printf("\n\nGrade Value: 0.0");
            Grade_Value=0.0;
        }

        else
        {
            printf("No Grade available");
        }

        printf("\n....................\n");
        g_value[i]=Grade_Value;
    }

//grading check end
    result();
}

void result()
{
    struct semester student[3];

    for(i=0; i<4; i++)
    {
    Grade_Points[i]=scradit[i]*g_value[i];

    }
    avareg_point=Grade_Points[0]+Grade_Points[1]+Grade_Points[2]+Grade_Points[3];

    sgpa=avareg_point/avareg_credit;
    //printf("s1 = %.1f\n",Grade_Points[0]);
    //printf("s2 = %.1f\n",Grade_Points[1]);
    //printf("s3 = %.1f\n",Grade_Points[2]);
    //printf("s4 = %.1f\n",Grade_Points[3]);
    printf("\n|\t\t\t...................|\n");
    printf("|\t\t\tSGPA = %.2f\n|",sgpa);
    printf("|\t\t\t...................|\n");
}
