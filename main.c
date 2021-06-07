#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
int menu();
void bus();
void riksha();
void cycle();
void display();
void showdetail();
void del(); //for single record
void show();
void end();
void pass();
void welcome();
int nor=0,nob=0,noc=0,amount=0,count=0,ar=0,ab=0,ac=0;
int ch;    //use in menu function to return a value
int i=3;   // use in password to give chance
char chh;  //use in password to get char in getch function
char name[100]; // use for ticket
int   k=0;   //use in password
char c[1];  // use in delete function to recall delete
int b=0,cyc=0,r=0;  //use in display array increment
static int bu[10],cy[10],ri[10];  //use in display
int ticket_no = 101;   //ticket number
void main()
{
    pass();
    system("cls");
    system("color 4e");
    welcome();
    system("cls");
    while(1)
    {
    system("cls");
    show();
    system("color 5e");
    switch(menu())
    {
    case 1:
        bus();
        break;
    case 2:
        riksha();
        break;
    case 3:
        cycle();
        break;
    case 4:
        system("color 2e");
        showdetail();
        getch();
        break;
    case 5:
        del();
        break;
    case 6:
        display();
        break;
    case 7:
        system("cls");
        end();
        exit(0);
    default :
        printf("\n Invalid choice");
        getch();
    }
    }


}
int menu()
{
    printf("\n 1. Enter 1 To Add 4 Wheeler"); //bus
    printf("\n 2. Enter 2 To Add 3 Wheeler"); //riksha
    printf("\n 3. Enter 3 To Add 2 Wheeler"); //cycle
    printf("\n 4. Show Detail");
    printf("\n 5. Delete Record");
    printf("\n 6. Display Slot");
    printf("\n 7. Exit");
    printf("\n\n   Enter Your Choice ");
    scanf("%d",&ch);
    return (ch);
}
void show()
{
    printf("\n                              ***********************************************");
    printf("\n                              **                                           **");
    printf("\n                                       Vehicle        Number Of Vehicle      ");
    printf("\n                                  >>  4 Wheeler              %d              ",nob);
    printf("\n                                  >>  3 Wheeler              %d              ",nor);
    printf("\n                                  >>  2 Wheeler              %d              ",noc);
    printf("\n                              **                                           **");
    printf("\n                              ***********************************************");
    printf("\n\n");
}
void showdetail()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t  **************************************************************");
    printf("\n\t\t\t  **                                                          **");
    printf("\n\t\t\t         Vehicle        Number Of Vehicle        Gain Amount   ");
    printf("\n\t\t\t     >> 4 Wheeler              %d                     %d       ",nob,ab);
    printf("\n\t\t\t     >> 3 Wheeler              %d                     %d       ",nor,ar);
    printf("\n\t\t\t     >> 2 Wheeler              %d                     %d       ",noc,ac);
    printf("\n\t\t\t  **                                                          **");
    printf("\n\t\t\t  **************************************************************");
    printf("\n\n\n\n \t\t\tTotal Number Of Vehicle = %d",count);
    printf("\n\t\t\tTotal Gain Amount = %d rs",amount);
}
void del()
{
    int de;
    int vno,u,w;
    system("cls");
    system("color 4");
    //show();
    //char c[1];
    printf("\n 1. Enter 1 To delete 4 Wheeler"); //bus
    printf("\n 2. Enter 2 To delete 3 Wheeler"); //riksha
    printf("\n 3. Enter 3 To delete 2 Wheeler"); //cycle
    printf("\n 4. Enter 4 To delete All records");
    printf("\n 5. Enter 5 To Do Nothing ");
    printf("\n\n   Enter Your Choice ");
    scanf("%d",&de);
    switch(de)
    {
    case 1:
        //delete 1 item of bus
        if(nob==0)
        {
            printf("    We have no vehicle ");
        }
        else
        {

            printf("    Enter vehicle no. ");
            abcd:
            scanf("%d",&vno);
            for(u=0;u<nob;u++)
            {
                if(bu[u]!=vno)
                {
                    printf("    Enter valid vehicle no. ");
                    goto abcd ;
                }

            }
            for(u=0;u<nob;u++)
            {
                if(bu[u]==vno)
                {
                    bu[u]=0;
                    for(w=u;w<nob+1;w++)
                    {
                        bu[w]=bu[w+1];
                    }
                    b--;
                    nob--;
                    ab=ab-(100);
                    amount=amount-(100);
                    count--;
                    printf("\n   delete successful");
                }

                    //printf("\n   Delete Successful");



            }
        }
        getch();
        printf("\n\n   Enter r to recall delete and other for main menu ");
        scanf("%s",&c);
        break;

    case 2:
        //delete 1 item of riksha
        if(nor==0)
        {
            printf("    We have no vehicle ");
        }
        else
        {
            printf("    Enter vehicle no. ");
            abcde:
            scanf("%d",&vno);
            for(u=0;u<nor;u++)
            {
                if(ri[u]!=vno)
                {
                    printf("    Enter valid vehicle no");
                    goto abcde;
                }
            }
            for(u=0;u<nor;u++)
            {
                if(ri[u]==vno)
                {
                    ri[u]=0;
                    for(w=u;w<nor+1;w++)
                    {
                        ri[w]=ri[w+1];

                    }
                    r--;
                    nor--;
                    ar=ar-(50);
                    amount=amount-(50);
                    count--;
                    printf("\n   delete successful");

                }

            }

        }

        getch();
        printf("\n\n   Enter r to recall delete and other for main menu ");
        scanf("%s",&c);

        break;
    case 3:
        // delete 1 item of cycle
        if(noc==0)
        {
            printf("    We have no vehicle ");
        }
        else
        {
            printf("    Enter vehicle no. ");
            mnp:
            scanf("%d",&vno);
            for(u=0;u<noc;u++)
            {
                if(cy[u]!=vno)
                {
                    printf("    Enter valid vehicle no. ");
                    goto mnp;
                }
            }
            for(u=0;u<noc;u++)
            {
                if(cy[u]==vno)
                {
                    cy[u]=0;
                    for(w=u;w<noc+1;w++)
                    {
                        cy[w]=cy[w+1];
                    }
                    cyc--;
                    noc--;
                    ac=ac-(20);
                    amount=amount-(20);
                    count--;
                    printf("\n   delete successful");

                }

            }
        }

        getch();
        printf("\n\n   Enter r to recall delete and other for main menu ");
        scanf("%s",&c);
        break;
    case 4:
        for(u=0;u<nob;u++)
            bu[u]=0;
        for(u=0;u<nor;u++)
            ri[u]=0;
        for(u=0;u<noc;u++)
            cy[u]=0;
        r=0;
        b=0;
        cyc=0;
        nob=0;
        nor=0;
        noc=0;
        count=0;
        amount=0;
        ab=0;
        ar=0;
        ac=0;
        printf("\n   delete successful");
        getch();
        break;

    case 5:
        break;
    default :
        printf("\n Invalid choice");
        getch();

    }
    //getch();


    if(strcmp(c,"r")==0)
    {
        system("cls");
        del();
    }
    else
    {
    }


}
void riksha()
{
    //int h;
    //h=hours();
    if(r<10)
    {
        nor++;
        ar=ar+(50);
        amount=amount+(50);
        count++;
        printf("   Enter Name ");
        scanf("%s",&name);
        printf("   Enter vehicle no. ");
        scanf("%d",&ri[r]);
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("------------------------\n");
        printf("\tSr no %d",count);
        printf("\nName : %s",name);
        printf("\nVehicle no : %d",ri[r]);
        printf("\nTicket no : %d",ticket_no);
        printf("\n------------------------");
        ticket_no=ticket_no+1;
        getch();
        system("cls");
        r++;
    }
    else
    {
        printf("Sorry ! We have no space for 3 Wheeler");
        getch();
        system("cls");
    }
}
void cycle()
{
    //int h;
    //h=hours();
    if(cyc<10)
    {
        noc++;
        ac=ac+(20);
        amount=amount+(20);
        count++;
        printf("   Enter Name ");
        scanf("%s",&name);
        printf("   Enter vehicle no. ");
        scanf("%d",&cy[cyc]);
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("------------------------\n");
        printf("\tSr no %d",count);
        printf("\nName : %s",name);
        printf("\nVehicle no : %d",cy[cyc]);
        printf("\nTicket no : %d",ticket_no);
        printf("\n------------------------");
        ticket_no=ticket_no+1;
        getch();
        system("cls");
        cyc++;
    }
    else
    {
        printf("Sorry ! We have no space for 2 Wheeler");
        getch();
        system("cls");
    }
}
void bus()
{
    if(b<10)
    {
        nob++;
        ab=ab+(100);
        amount=amount+(100);
        count++;
        printf("   Enter Name ");
        scanf("%s",&name);
        printf("   Enter vehicle no. ");
        scanf("%d",&bu[b]);
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("------------------------\n");
        printf("\tSr no %d",count);
        printf("\nName : %s",name);
        printf("\nVehicle no : %d",bu[b]);
        printf("\nTicket no : %d",ticket_no);
        printf("\n------------------------");
        ticket_no=ticket_no+1;
        getch();
        system("cls");
        b++;
    }
    else
    {
        printf("Sorry ! We have no space for 4 Wheeler");
        getch();
        system("cls");
    }

}
void pass()
{

    char username[10];
    char password[10] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
    int j;
//    password="0";
    system("color 1e");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\tUSERNAME  :  ");
    scanf("%s",&username);
    printf("\t\t\t\t\tPASSWORD  :  ");

while(1)
    {

        //chh = NULL;
        chh = getch();
        if(chh==13)    //enter
        {
            password[k]='\0';
            break;
        }
        else if(chh==8) //backspace
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(chh==32||chh==9)  // space , tab
        {
            continue;
        }
        else
        {
            password[k]=chh;
            k++;
            printf("*");
        }
        //
    }
    //printf("%s",password);
    if(strcmp(username,"harsh") ==0)
    {
        if(strcmp(password,"harsh@123")==0)
        {

        }
        else
        {
            printf("\n\n\t\t\t\t\tInvalid Password\n");
            printf("\t\t\t\t\tYou have chance : %d\n ",i-1);
            printf("\t\t\t\t\tPress Any Key");
            getch();
            system("cls");
            i--;
            if(i>0)
            {

                /*for(j=0;j<strlen(password);j++)
                {
                    password[j]='\0';
                }*/

                k=0;
                pass();//password  and username ko call to ho rhi h but 2nd time compare nhi ho rha....
                //shayad username or password main jo phle value thi vo delete nhi ho rhi
            }
            else
            {
                //printf("%s",password);
               // getch();
                exit(0);
            }
        }
        //printf("%s",password);
       // getch();
    }
    else
    {
        printf("\n\n\t\t\t\t\tInvalid Username\n");
        printf("\t\t\t\t\tYou have chance : %d \n",i-1);
        printf("\t\t\t\t\tPress Any Key");
        getch();
        system("cls");
        i--;
        if(i>0)
        {

            pass();
        }
        else
        {
            exit(0);
        }
    }
    }
void welcome()
{
    system("color 3");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb                                                     \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  O      O  OOOO  O     OOOO   OOO   OO    OO  OOOO  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  O      O  O     O     O     O   O  O O  O O  O     \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  O  OO  O  OO    O     O     O   O  O  OO  O  OO    \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  O O  O O  O     O     O     O   O  O      O  O     \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  OO    OO  OOOO  OOOO  OOOO   OOO   O      O  OOOO  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb                                                     \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t@kattu.pvt.ltd");
    getch();
    system("cls");
}
void end()
{
    system("color 3");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb                                              \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb  OOOOOO  O   O   OOO   OO    O  O  O  O   O  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb    OO    O   O  O   O  O O   O  O O   O   O  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb    OO    OOOOO  OOOOO  O  O  O  OO    O   O  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb    OO    O   O  O   O  O   O O  O O   O   O  \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb    OO    O   O  O   O  O    OO  O  O   OOO   \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb                                              \xdb\xdb\n");
    printf("\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t@kattu.pvt.ltd");
    getch();
}
void display()
{
    system("cls");
    int k;
    printf("\n\n\n\t4 Wheeler\n");
    for(k=0;k<10;k++)
        printf("%d  ",bu[k]);
    printf("\n\n\n\t3 Wheeler\n");
    for(k=0;k<10;k++)
        printf("%d  ",ri[k]);
    printf("\n\n\n\t2 Wheeler\n");
    for(k=0;k<10;k++)
        printf("%d  ",cy[k]);
    getch();
}

