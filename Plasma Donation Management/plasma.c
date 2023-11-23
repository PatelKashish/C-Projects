#include<stdio.h>
#include<string.h>
#include <conio.h>
#include <stdlib.h>

struct record
{
    char name, email, bt;
    int age, weight;
    double ph;
};
struct record r;

void donate()
{
    //int age, weight;
    char ans, anss, can;
    //char email, bt;
    //double ph;

    printf("BLOOD DONATION\n");
    printf("Before you proceed, some things to note: \n");
    printf("1. Plasma donation is a voluntary act and no inducement or remuneration will be offered.\n");
    printf("2. Your blood will undergo various screening tests required to ensure safety of the unit collected.\n");
    printf("3. Your blood will most likely be given to a patient, unknown to you, who will benefit from it.\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    printf("Name: ");
    scanf("%s",&r.name);
    printf("Age: ");
    scanf("%d",&r.age);
    if(r.age<18 || r.age>65){
        printf("Not eligible to donate blood\n");
        return ;
    }
    printf("Weight(in kg): ");
    scanf("%d", &r.weight);
    if(r.weight<50){
        printf("Not eligible to donate blood\n");
        return ;
    }
    printf("Have you had a prior diagnosis of COVID-19?(Y/N): ");
    scanf("%s",&ans);
    if(ans=='Y')
    {   printf("Have you recovered with complete resolution of symptoms at least 28 days before donation? (Y/N): ");
        scanf("%s",&anss);
        if(anss=='N') {
            printf("Not eligible to donate blood\n");
            return ;
        }
        printf("Are you a cancer survivor?(Y/N): ");
        scanf("%c", &can);
        if(can == 'Y'){
            printf("Not eligible to donate blood\n");
            return; 
        }
    }

    printf("Phone no.: ");
    scanf("%lf", &r.ph);
    printf("Email address: ");
    scanf("%s",&r.email);
    printf("Blood type: ");
    scanf("%s",&r.bt);
    printf("Congratulations, your initialisation process is complete. You will be notified of the date and day of the donation.");

}

void request()
{
    //double ph;
    //char email, bt;
    printf("PLACE A REQUEST\n");
    printf("Phone no.: ");
    scanf("%lf", &r.ph);
    printf("Email address: ");
    scanf("%s",&r.email);
    printf("Blood type: ");
    scanf("%s",&r.bt);
    printf("Your request has been placed!\n");
    return ;
}

void view_all();


int main()
{
    int n;
    printf("----------------------------------------WELCOME TO PLASMA DONATION MANAGEMENT----------------------------------------\n");
    while(1)
    {
        printf("Which category of plasma donation do you want to read about?\n 1. Donate\n 2. Request\n 3. View All Donations\n 4. Exit\n ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: donate();
                    break;
            case 2: request();
                    break;
            case 3: //view_all();
                    break;
            case 4: return 0;
            default: printf("Invalid Input\n");
        }
    }
    return 0;
}
