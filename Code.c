#include <stdio.h>
#include <conio.h>
#include <string.h>
int high(int sum)
{
    int high,var1=0;
    printf("You have a high probability of being infected with covid 19!");
    var1++;
    printf("Tips :\nStay quarantined for 15 days and take proper care of your health! \nTake a covid test after 15 days!");

    return var1;
}

int low(int sum)
{
    int var3=0,low;
    printf("You have a low probability of being infected with covid 19!");
    var3++;
    printf("Tips :\nTake proper precautions and maintain social distancing \nUse sanitizer and mask!");

    return var3;

}

int medium(int sum)
{
    int med,var2=0;
    printf("You have a medium probability of being infected with covid 19!");
    var2++;
    printf("Tips :\nTake proper precautions and maintain social distancing \nTake a covid test after 15 days! \nUse sanitizer and mask!");

    return var2;
}

int severity (int arraycount)
{
    int j,n;
    for(j=0;j<=5;j++){
        if(count[j]<count[j+1]){
            printf("the number of people who are ill is increased by %d from day %d to day %d",count[j+1]-count[j],j=1,j+2);
        }
        else if(count[j]==count[j+1]){
            printf("The number of people who are ill is neither increased nor decreased from day %d to day %d",j+1,j+2);
        }
        else if
        {
            printf("The number of people who are ill is decreased by %d from day %d to day %d ",count[j]-count[j+1],j+1,j+2);
        }
    }


int main()
{
    int i=0,j=0,n,totala=0,a=0,b=0,c=0,d=0,e=0,f=0;

    int temp,oxy,resp,hr,age;

    int sum=0,low=0,med=0,high=0;

    int var1=0,var2=0,var3=0;

    char audio,g,repeat;


    do{

        printf("Enter the number of people in your locality: ");
        scanf("%d",&n);

        int count[7];

        int flag=0;

        for(j=0;i<=6;i++){

            printf("\nSERVEY FOR DAY %d ",j+1);

            for(i=1;i<=n;i++){

                a=0;

                printf("\n\nREPORT OF PERSON: %d\n",i);

                printf("Enter your age: \n");
                scanf("%d",&age);

                printf("enter your body tmperature: ");
                scanf("%d",&temp);

                if(temp>97)
                    a++;

                totala+=a;

                if(age>0 && age<=12)
                    sum = child(age,a);

                if else(age>=13 && age<18)
                    sum = teen(age,a);

                else
                    sum = adult(age,a);
                    
                
                if(sum>=4)
                    high = high(sum);

                else if(sum>2 && sum<4)
                    med = medium(sum);

                else
                    low = low(sum);

            }

            printf("\nThe number of people having high temperature in day %d is %d. \n",j+1,totala);

            totala = 0;

            count[j] = med + high;

        }

        printf("\nTHE DAY WISE REPORT OF NUMBER OF PEOPLE WHO ARE ILL IS AS FOLLOWS: \n");

        j = 0;

        while(j<=6){

            printf("DAY %d : %d\n",j+1,count[j]);
            j++;

        }

        severity(count);

        printf("\nEnter yes if you wanna survey for another locality: ");
        gets(repeat);


    }while(repeat == "yes");
    


    return 0;
int adult(int age, int a) {
    int temp, oxy, resp, hr, i, j, n, b, c, d, e, sum, low, med, high, flag;
    char audio, g, repeat;
    
    do
    {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        flag = 0;
        printf("Enter your gender: ");
        scanf("%c", g);
        if (g == "male") {
            printf("Enter your oxygen level: ");
            scanf("%d", oxy);
            if (oxy < 75 || oxy > 100) {
                b = b + 1;
            }
            printf("Enter your air intake rate: ");
            scanf("%d", resp);
            if (resp < 14 || resp > 18) {
                c = c + 1;
            }
            printf("Enter your heart rate: ");
            scanf("%d", hr);
            if (hr < 70 || hr > 75) {
                d = d + 1;
            }
            do {
                printf("Enter yes for severe cough, no for light/no cough: ");
                scanf("%d", audio);
                if (audio == "yes") {
                    e = e + 1;
                } else if (audio != "yes" && audio != "no") {
                        printf("ERROR! re-enter ");
                    }
                }
            } while (audio != "yes" && audio != "no");
        }
        else if (g == "female")
        {
                printf("Enter your oxygen level: ");
                scanf("%d", oxy);
                if (oxy < 75 || oxy > 100) {
                    b = b + 1;
                }
                printf("Enter your air intake rate: ");
                scanf("%d", resp);
                if (resp < 16 || resp > 20) {
                    c = c + 1;
                }
                printf("Enter your heart rate: ");
                scanf("%d", hr);
                if (hr < 78 || hr > 82) {
                    d = d + 1;
                }
                do {
                    printf("Enter yes for severe cough, no for light/no cough: ");
                    scanf("%d", audio);
                    if (audio == "yes") {
                        e = e + 1;
                    }
                    else if (audio != "yes" && audio != "no") {
                            printf("ERROR! re-enter ");
                        }
                    }
                } while (audio != "yes" && audio != "no");
            }
            else 
            {
                printf("ERROR! re-enter ");
            }
        }
    } while (g != "female" && g != "male");
    
    // summing up the total number of abnormalties!(to find the probability of covid)
    // sum is the no.of abnormalities
    flag = a + b + c + d + e;
    
    return flag;
}
