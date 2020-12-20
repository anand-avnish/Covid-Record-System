#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();
int main()
{
    system("COLOR 74");
	read();
    int c,i,q;
    printf("\t\t*************************************************");
    printf("\n\t\t  *** WELCOME TO COVID RECORD SYSTEM ***");
    printf("\n\t\t  ***          AAA HOSPITAL          ***");
    printf("\n\t\t  ***           COVID WARD           ***");
    printf("\n\t\t  ***           1st FLOOR            ***");
    printf("\n\t\t*************************************************");
    printf("\n\n\n\n");
    int m,n;
//making out the pattern
    
    // for(m=1; m<=4; m++)
    // {
    //     for(n=1; n<=5; n++)
    //         printf(" ");
    //     for(n=1; n<=m-1; n++)
    //     {
    //         printf(" ");
    //     }
    //     for(n=1; n<=4-m+1; n++)
    //     {
    //         if(n==4-m+1 || m==1 || m==4)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     for(n=1; n<=4-m+1; n++)
    //     {
    //         if(n==1 ||m==1 || m==4)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }
    while(c!=6)
    {

        printf("\t\t**Enter your choice**\n\n\t\t1. Add Information\n\t\t2. View Information\n\t\t3. Search\n\t\t4. Edit Information\n\t\t5. Delete Information\n\t\t6. Exit\n\n\t\tOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
        }
        else if(c==6)
        {
           system("cls");
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("\t\tAlready data inputed on the database =%d\n\n",num);//how many inputs
    printf("\t\tHow many entry do you want to add= \t\t");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("\t\tEnter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        // printf("\t\tEnter disease = ");
        // gets(x[i].disease);
        strcpy(x[i].disease,"Corona");
        fflush(stdin);
        printf("\t\tEnter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("\t\tEnter cabin no = ");
        scanf("%d",&x[i].cabin);
        fflush(stdin);
        printf("\t\tEnter patient's phone number = ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}

void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("\t\tSerial Number=%d\n",i);
        printf("\t\tName = ");
        puts(x[i].name);
        printf("\t\tDisease = ");
        puts(x[i].disease);
        printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge=%d",x[i].cabin,x[i].phone,x[i].age);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("\t\tWhat do you want to edit ?\n");
    printf("\t\tEnter option\n");
    printf("\t\t1.Name\n\t\t2.Age\n\t\t3.Cabin\n\t\t4.Phone no.\n");
    printf("\t\tOption=");
    scanf("%d",&q);//option
    if(q<=4)
    {
        printf("\t\tEnter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("\t\tEnter the new name=");
                gets(x[p].name);

            }
            // else if(q==2)
            // {
            //     fflush(stdin);
            //     printf("\t\tEnter the new Disease=");
            //     gets(x[p].disease);
            // }
            else if(q==2)
            {
                fflush(stdin);
                printf("\t\tEnter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==3)
            {
                fflush(stdin);
                printf("\t\tEnter the new Cabin no=");
                scanf("%d",&x[p].cabin);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("\t\tEnter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\n\t\tInvalid Serial \n\t\tTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\n\t\tInvalid option\n\t\tTry Again!!\n\n");
    }
}
void search()
{
    int s,h,f;
    char u[100];
    printf("\t\tBy what do you want to search ?\n");
    printf("\t\t1.Serial no.\n\t\t2.Name\n\t\t3.Cabin no.\n\t\t4.Phone no.\n\t\t5.Age\n\n\t\tOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("\t\tEnter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("\t\tSerial Number=%d\n",s);
            printf("\t\tName = ");
            puts(x[s].name);
            printf("\t\tDisease = ");
            puts(x[s].disease);
            printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\n\t\tNot Found\n\n");
    }
    else if(h==2)//problem is here.........
    {
        int f=1;
        fflush(stdin);
        printf("\t\tEnter patient name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("\t\tSerial Number=%d\n",g);
                printf("\t\tName = ");
                puts(x[g].name);
                printf("\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\n\t\tNot Found\n");



    }
    // else if(h==3)
    // {
    //     int f=1;
    //     fflush(stdin);
    //     printf("\t\tEnter Disease = ");
    //     gets(u);
    //     fflush(stdin);
    //     for(g=0; g<num; g++)
    //     {
    //         if(strcmp(u,x[g].disease)==0)
    //         {
    //             printf("\n");
    //             printf("\t\tSerial Number=%d\n",g);
    //             printf("\t\tName = ");
    //             puts(x[g].name);
    //             printf("\t\tDisease = ");
    //             puts(x[g].disease);
    //             printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
    //             printf("\n\n");
    //             f=0;
    //         }


    //     }
    //     if(f==1)
    //         printf("\n\t\tNot Found\n");


    // }
    else if(h==3)
    {
        int f=1;
        printf("\t\tEnter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].cabin)
            {
                printf("\n");
                printf("\t\tSerial Number=%d\n",g);
                printf("\t\tName = ");
                puts(x[g].name);
                printf("\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\t\tNot Found\n\n");

    }
    else if(h==4)
    {
        int f=1;
        printf("\t\tEnter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("\t\tSerial Number=%d\n",g);
                printf("\t\tName = ");
                puts(x[g].name);
                printf("\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\t\tNot Found");
    }
    else if(h==5)
    {
        int f=1;
        printf("\t\tEnter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("\t\tSerial Number=%d\n",g);
                printf("\t\tName = ");
                puts(x[g].name);
                printf("\t\tDisease = ");
                puts(x[g].disease);
                printf("\t\tCabin no = %d\n\t\tPhone number = 0%d\n\t\tAge = %d",x[g].cabin,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\t\tNot Found\n\n");

    }
    else
        printf("\n\n\t\tInvalid input\n\n");




}
void del()
{
    int f,h;
    printf("\t\tEnter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("\t\tWhat do you want ?\n");
        printf("\t\t1.Remove the whole record\n\t\t2.Remove Name\n\t\t3.Remove Disease\n\t\t4.Remove age\n\t\t5.Remove Cabin\n\t\t6.Remove phone number\n\t\tOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].cabin=x[f+1].cabin;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].cabin=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\n\t\tInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("\t\tFile does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("\t\tError");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
