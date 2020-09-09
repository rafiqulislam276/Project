#include <stdio.h>
#include <string.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>

void strat();
void hight_score();
void help();
void writescore();

void level1();
void level2();
void level3();

int l1, l2, total=0;
char playername[20];

int a;

int main()
{
mainhome:
    system("cls");
    printf("\n\t\t\t*************************\n");
    printf("\t\t\t* WELCOME TO MATH  GAME *\n");
    printf("\t\t\t*************************\n");
    printf("\n\t\t\t\tMAIN MENU\n");

    printf("\n\t\t\tStart Game\t[1]");
    printf("\n\t\t\tHigh Score\t[2]");
    printf("\n\t\t\tHelp\t\t[3]");
    printf("\n\t\t\tQuit \t\t[4]");

    printf("\n\n\t\t\tEnter Your Choice: ");

    char choice;
    scanf(" %s", &choice);
    switch(choice)
    {
    case '1':
        strat();
        break;
    case '2':
        hight_score();
        break;
    case '3':
        help();
        break;
    case '4':
        system("cls");
        printf("\n\n\t\t  Thank You for Using this Software\n");
        printf("\n\t\t\tMd. Jiban Rahman\n");
        printf("\t\t\t    ID: 172311037\n");
        Sleep(1300);
        break;

    default:
        system("cls");
        printf("\n\n\n\n\n\t\t   *******************\n");
        printf("\t\t   * Wrong Selection *\n");
        printf("\t\t   *******************");
        Sleep(1000);

        goto mainhome;
        break;
    }
    return 0;
}
void strat()
{

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter Your Name: ");
    scanf(" %[^\n]", playername);

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t %s Welcome to the Game.......", playername);
    printf("\n\n\t\t Press Any Key to Start the Game.......");
    getch();
    level1();
}

void level1() ///level 1
{
    int i, r1, count=0;

    for(i=1; i<=6; i++)
    {
        system("cls");
        r1=i;
        srand(time(NULL));   // should only be called once
        a = rand() % 6+1;
        printf("\n\t\t\t   ***********\n");
        printf("\t\t\t   * Level 1 *\n");
        printf("\t\t\t   ***********");

        switch(a)
        {
        case 1:
            printf("\n\n  [10-(6-4)+{8-5}] = ?");
            printf("\n\n  A.11\t\tB.3 \n\n  C. 5\t\tD. 0\n");
            if (toupper(getch())=='A')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 2:
            printf("\n\n\n  Simplify : 3 + 6 x (5 + 4) / 3 - 7 .");
            printf("\n\n  A.11\t\tB.16\n\n  C.14\t\tD.15\n");
            if (toupper(getch())=='C')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 3:
            printf("\n\n\n  Simplify :150 / (6 + 3 x 8) - 5 ");
            printf("\n\n  A.2\t\tB.5\n\n  C.0\t\tD.None of these\n");
            if (toupper(getch())=='C')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 4:
            printf("\n\n\n  2 is a _____number. ");
            printf("\n\n  A.Odd\t\t B.Prime\n\n  C. composite\t D.None of these.\n");
            if (toupper(getch())=='B')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 5:
            printf("\n\n\n  How many digits answer we will get when we add 99 and 1? ");
            printf("\n\n  A.1\t\tB.3\n\n  C.99\t\tD.100\n");
            if (toupper(getch())=='B')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 6:
            printf("\n\n\n  How many times 1000 is bigger than 1? ");
            printf("\n\n  A.1 time\t\tB.10 times\n\n  C.100 times\t\tD.1000 times\n");
            if (toupper(getch())=='D' )
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }
        }

    }

    if(count>=3)
    {
        system("cls");
        l1=count;
        printf("\n\n\n\n\n\t\t\t    ******************\n");
        printf("\t\t\t    * CONGRATULATION *\n");
        printf("\t\t\t    ******************");
        printf("\n\n\t\t\t%s Your Score is %d",playername, count);
        printf("\n\t\t\tPress Any Key for Next Level........" );
        getch();
        level2();
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\t\t\t*************\n");
        printf("\t\t\t* GAME OVER *\n");
        printf("\t\t\t*************");
        printf("\n\n\t\t%s Your Score is %d", playername, count);
        printf("\n\t\tSorry You are not Eligible for Next Level.....");
        printf("\nPress any Key for Back to Main Menu......");
        getch();
        main();
        //{

        //strand(time(NULL));
        //int i=rand()%10+1;
        // switch(i)
        // }
    }
}

void level2()
{

    int i, r1, count=0;
    for(i=1; i<=6; i++)
    {
        system("cls");
        r1=i;
        srand(time(NULL));   // should only be called once
        a = rand() % 6+1;
        printf("\n\t\t\t   ***********\n");
        printf("\t\t\t   * Level 2 *\n");
        printf("\t\t\t   ***********");



        switch(a)
        {

        case 1:
            printf("\n\n  How many surfaces are there in a cube? ");
            printf("\n\n  A.3\t\tB.4\n\n  C.5\t\tD.None of these\n");
            if (toupper(getch())=='D')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 2:
            printf("\n\n\n  What is -10 - (-6) equals to? ");
            printf("\n\n  A.16\t\tB.-16\n\n  C.-4\t\tD.4\n");
            if (toupper(getch())=='C')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 3:
            printf("\n\n\n  Find the sum: -1.54 + 5.093. ");
            printf("\n\n  A.3.553\t\tB.6.63\n\n  C.-3.553\t\tD.-6.63\n");
            if (toupper(getch())=='A')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 4:
            printf("\n\n\n  Which value of x makes the equation true? x - 7 = -13 ");
            printf("\n\n  A.-20 degree.\t  B.20\n\n  C.-6\t\t  D.6\n");
            if (toupper(getch())=='C')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 5:
            printf("\n\n\n  What is the value of a^0? ");
            printf("\n\n  A.a\t\tB.-1\n\n  C.0\t\tD.1\n");
            if (toupper(getch())=='D')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 6:
            printf("\n\n\n  What is the remainder of 21 divided by 7? ");
            printf("\n\n  A.21\t\tB.7\n\n  C.1\t\tD.None of these\n");
            if (toupper(getch())=='D' )
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }
        }
    }

    l2=count;

    if(count>=3)
    {
        system("cls");
        printf("\n\n\n\n\n\t\t\t    ******************\n");
        printf("\t\t\t    * CONGRATULATION *\n");
        printf("\t\t\t    ******************");
        printf("\n\n\t\t\t%s Your Score is %d",playername, count);
        printf("\n\t\t\t%s Your Total Score is %d",playername, l1+l2);
        printf("\n\n\t\t\tPress Any Key for Next Level........." );
        getch();
        level3();
    }
    else
    {
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t*************\n");
        printf("\t\t\t\t* GAME OVER *\n");
        printf("\t\t\t\t*************");
        printf("\n\n\t\t\t%s Your Score is %d",playername, count);
        printf("\n\t\t\t%s Your Total Score is %d",playername, l1+l2);
        printf("\n\n\t\t\tSORRY YOU ARE NOT ELIGIBLE FORE NEXT LEVEL");
        getch();
        main();
    }

}

void level3()
{
    int i, r1, count=0;
    for(i=1; i<=6; i++)
    {
        system("cls");
        r1=i;
        srand(time(NULL));   // should only be called once
        a = rand() % 6+1;
        printf("\n\t\t\t   ***********\n");
        printf("\t\t\t   * Level 3 *\n");
        printf("\t\t\t   ***********");


        switch(a)
        {
        case 1:
            printf("\n\n  Which of the following is a Palindrome number?");
            printf("\n\n  A.42042\t\tB.101010\n\n  C.23232\t\tD.01234\n");
            if (toupper(getch())=='C')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 2:
            printf("\n\n\n  What is 7%% equal to? ");
            printf("\n\n  A.0.007\tB. 0.07\n\n  C.0.7\t\tD.7\n");
            if (toupper(getch())=='B')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 3:
            printf("\n\n\n  What is the unit of volume? ");
            printf("\n\n  A.square units.\tB.cubic units.\n\n  C.only unit.\t\tD.None of these.\n");
            if (toupper(getch())=='B')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 4:
            printf("\n\n\n  Average of three person age is 9 years. Find the sum of there age. ");
            printf("\n\n  A.18\t\tB.21\n\n  C.24\t\tD.27\n");
            if (toupper(getch())=='D')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 5:
            printf("\n\n\n  Speed of a car is 60 km/hr. Distance covered in 1 .25 hours is .........");
            printf("\n\n  A.60 km\t\tB.65 km\n\n  C.70  km\t\tD.75 km\n");
            if (toupper(getch())=='D')
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }

        case 6:
            printf("\n\n\n  2a^2 * 5a^4 = ?");
            printf("\n\n  A.7a^6\t\tB.10a^6\n\n  C.7a^8\t\tD.10a^6\n");
            if (toupper(getch())=='D' )
            {
                printf("\n  Correct!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n  Wrong!!!");
                getch();
                break;
            }
        }
    }

    total=l1+l2+count;
    writescore();
    system("cls");
    printf("\n\n\n\n\n\t\t   ****************************************\n");
    printf("\t\t   * Congratulation you Complete the Game *\n");
    printf("\t\t   ****************************************");
    printf("\n\n\t\t\t%s Your Score is %d",playername, count);
    printf("\n\t\t\t%s Your Total Score is %d",playername, total);
    printf("\n\n\t\t\tPress Any Key for Go to Main Menu........." );
    getch();
    main();

}

void hight_score() ///function for show high score
{
    char name[20];
    int s;
    FILE *f;
    system("cls");
    f=fopen("score.txt","r");
    fscanf(f,"%s%d",&name,&s);
    printf("\n\n\n\n\n\n\n\t\t%s has the Highest Score %d",name,s);
    printf("\n\n\t\tPress any Key for Back to Main Menu....");
    fclose(f); ///close file
    getch();
    main();
}


void writescore()
{
    int s;
    char nm[20];
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%d",&nm,&s);

    if (total>=s)
    {
        s=total;
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%d",playername,s);
        fclose(f);
    }
}

void  help()
{
    system("cls");
    printf("\n\n\tThis game is very easy to play. You'll be asked some general ");
    printf("\n\n\tmathematical questions and the right answer is to be chosen ");
    printf("\n\n\tamong the four options provided. Your score will be");
    printf("\n\n\tcalculated at the end.....\n\n\t\t\t\tBEST OF LUCK\n");

    printf("\n\n\tPress any Key to Continue........");
    getch();
    main();
}
