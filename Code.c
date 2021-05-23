#include <stdio.h>
#include <conio.h>
#include <string.h>


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
}