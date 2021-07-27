#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

                                            //COVID-19 SURVEY CODE!!

//initialising strings globally
char str_male[] = "male";
char str_female[] = "female";
char audio_yes[] = "yes";
char audio_no[] = "no";
char repeat_yes[] = "yes";


// using structure to declare variables of 5 parameters, age and gender!
struct record{

    int age, temp, oxy, resp, hr;
    char g[10], audio[10];
};


// high function is declared and defined to indicate the person is having high probabiltiy of illness.
int high(){

    printf("\nYou have a 'high-probability' of being infected with covid 19!");
    printf("\n\n\t\t\tTips :\nStay quarantined for 15 days and take proper care of your health!\nTake a covid test after 15 days!");
    return 1;
}


// medium function is declared and defined to indicate the person is having medium probabiltiy of illness.
int medium(){

    printf("\nYou have a 'medium-probability' of being infected with covid 19!");
    printf("\n\n\t\t\tTips :\nTake proper precautions and maintain social distancing \nTake a covid test after 15 days! \nUse sanitizer and mask!");
    return 1;
}


// low function is declared and defined to indicate the person is having low probabiltiy of illness.
void low(){

    printf("\nYou have a 'low-probability' of being infected with covid 19!");
    printf("\n\n\t\t\tTips :\nTake proper precautions and maintain social distancing \nUse sanitizer and mask!");

}


//severity function is used to give the information of how the illness is varying from day to day
int severity(int count[]){

    int j, n;

    for (j = 0; j <= 5; j++){
        if (count[j] < count[j + 1]){
            printf("The number of people who are ill is 'increased' by '%d' from day '%d' to day '%d'\n", count[j + 1] - count[j], j + 1, j + 2);
        }
        else if (count[j] == count[j + 1]){
            printf("The number of people who are ill is 'neither increased nor decreased' from day '%d' to day '%d'\n", j + 1, j + 2);
        }
        else{
            printf("The number of people who are ill is 'decreased' by '%d' from day '%d' to day '%d'\n", count[j] - count[j + 1], j + 1, j + 2);
        }
    }

}


//child function takes info regarding the paramteres of children and returns the sum
int child(struct record persons[], int a, int per){
       
        int b=0,c=0,d=0,e=0;
        printf("-->Enter your oxygen level: ");
        scanf("%d",&persons[per].oxy);

        if(persons[per].oxy<75||persons[per].oxy>100){
            b=b+1;
        }
        printf("-->Enter the air intake rate: ");
        scanf("%d",&persons[per].resp);

        if(persons[per].resp<18||persons[per].resp>30){
            c=c+1;
        }
        printf("-->Enter your heart rate: ");
        scanf("%d",&persons[per].hr);

        if(persons[per].hr<60||persons[per].hr>130){
            d=d+1;
        }
        
        do{
            printf("-->Enter yes for severe cough, no for light/no cough: ");
            scanf("%s", &persons[per].audio);
            if (strcmp(persons[per].audio, audio_yes) == 0)
                e = e + 1;
            else if (strcmp(persons[per].audio, audio_no) == 0)
                e = 0;
            else if (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0)
                printf("Please RE-ENTER with a 'yes' or a 'no'.\n");
            
        }while (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0);


        return a + b + c + d + e;

}
    


//teen function takes info regarding the paramteres of teen and returns the sum
int teen(struct record persons[], int a, int per){
       
        int b=0,c=0,d=0,e=0;
        printf("-->Enter your oxygen level: ");
        scanf("%d",&persons[per].oxy);

        if(persons[per].oxy<75||persons[per].oxy>100){
            b=b+1;
        }
        printf("-->Enter the air intake rate");
        scanf("%d",&persons[per].resp);

        if(persons[per].resp<18||persons[per].resp>30){
            c=c+1;
        }
        printf("-->Enter your heart rate: ");
        scanf("%d",&persons[per].hr);

        if(persons[per].hr<60||persons[per].hr>100){
            d=d+1;
        }
        do{
            printf("-->Enter yes for severe cough, no for light/no cough: ");
            scanf("%s", &persons[per].audio);
            if (strcmp(persons[per].audio, audio_yes) == 0)
                e = e + 1;
            else if (strcmp(persons[per].audio, audio_no) == 0)
                e = 0;
            else if (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0)
                printf("Please RE-ENTER with a 'yes' or a 'no'.\n");
            
        }while (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0);


    return a + b + c + d + e;

}



//adult function takes info regarding the paramteres of teen and returns the sum
int adult(struct record persons[], int a, int per){
            int  b, c, d, e;
            do{
                int b=0,c=0,d=0,e=0;

                printf("Enter your gender: ");
                scanf("%s", &persons[per].g);
                if (strcmp(persons[per].g, str_male) == 0){
                    printf("-->Enter your oxygen level: : ");
                    scanf("%d",&persons[per].oxy);
                    if (persons[per].oxy < 75 || persons[per].oxy > 100)
                        b = b + 1;
                   
                    printf("-->Enter your air intake rate: ");
                    scanf("%d",&persons[per].resp);
                    if (persons[per].resp < 14 || persons[per].resp > 18)
                        c = c + 1;
                    
                    printf("-->Enter your heart rate: ");
                    scanf("%d",&persons[per].hr);
                    if (persons[per].hr < 70 || persons[per].hr > 75)
                        d = d + 1;
                    
                    do{
                        printf("-->Enter yes for severe cough, no for light/no cough: ");
                        scanf("%s", &persons[per].audio);
                        if (strcmp(persons[per].audio, audio_yes) == 0)
                            e = e + 1;
                        else if (strcmp(persons[per].audio, audio_no) == 0)
                            e = 0;
                        else if (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0)
                            printf("Please RE-ENTER with a 'yes' or a 'no'.\n");
                        
                    }while (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0);
                }

                else if (strcmp(persons[per].g, str_female) == 0){
                    printf("-->Enter your oxygen level: ");
                    scanf("%d",&persons[per].oxy);
                    if (persons[per].oxy < 75 || persons[per].oxy > 100)
                        b = b + 1;
                    
                    printf("-->Enter your air intake rate: ");
                    scanf("%d",&persons[per].resp);
                    if (persons[per].resp < 16 || persons[per].resp > 20)
                        c = c + 1;
                
                    printf("-->Enter your heart rate: ");
                    scanf("%d",&persons[per].hr);
                    if (persons[per].hr < 78 || persons[per].hr > 82)
                        d = d + 1;
                    
                    do{
                        printf("-->Enter yes for severe cough, no for light/no cough: ");
                        scanf("%s", &persons[per].audio);
                        if (strcmp(persons[per].audio, audio_yes) == 0)
                            e = e + 1;
                        else if (strcmp(persons[per].audio, audio_no) == 0)
                            e = 0;
                        else if (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0)
                            printf("Please RE-ENTER with a 'yes' or a 'no'.\n");
                        
                    }while (strcmp(persons[per].audio, audio_yes) != 0 && strcmp(persons[per].audio, audio_no) != 0);
                }

                else
                    printf("Kindly RE-ENTER your gender.\n");


            } while (strcmp(persons[per].g, str_male) != 0 && strcmp(persons[per].g, str_female) != 0);
            return a + b + c + d + e;
        
}



int main(){

    int sum = 0;

    int a=0, total_a=0;

    char repeat[10];

    printf("\n\t\t\t\t\t\t\t********************************************\n\n");
    printf("\t\t\t\t\t\t\t\t\tCOVID-19 SURVEY\n\n");
    printf("\t\t\t\t\t\t\t********************************************\n\n");

    do{
        int n;    
        printf("\nENTER THE NUMBER OF PEOPLE IN YOUR LOCALITY: ");
        scanf("%d", &n);
        struct record persons[n];
        int count[7];

        for (int j = 0; j <= 6; j++){    //loop used to record data of each day in a week

                printf("\n\t\tSURVEY FOR DAY %d ", j + 1);
                printf("\n\t\t------------------");

                int a=0, med_prob = 0, high_prob = 0;    

                for (int i = 1; i <= n; i++){    //loop used to collect info for 'n' prople for each day
                    
                    int per=i-1;
                    printf("\n\nREPORT OF PERSON: %d\n\n", i);

                    printf("Enter your age: ");
                    scanf("%d", &persons[per].age);

                    printf("-->Enter your body tmperature: ");
                    scanf("%d", &persons[per].temp);

                    if (persons[per].temp > 97){
                        total_a += 1;    //total_a calculates the total number of people having high temperature.
                        a = a + 1;
                    }

                    else if (persons[per].temp < 95);
                        a = a + 1;


                    //conditions to categorise each person based on their age to collect data.
                    //sum returns the total no.of abnormal parameters

                    if (persons[per].age > 0 && persons[per].age <= 12)
                        sum = child(persons,a,per);

                    else if(persons[per].age >= 13 && persons[per].age < 18)
                        sum = teen(persons,a,per);

                    else
                        sum = adult(persons,a,per);


                    /*condtions used to categorise each person into high, low and medium probabilty of illness 
                        based on the above obtained sum.*/


                    if (sum >= 4)
                        high_prob += high();
                    

                    else if (sum > 2 && sum < 4)
                        med_prob += medium();
                        
                    else
                        low();

                }

            printf("\n\nThe number of people having high temperature in day %d is %d. \n", j + 1, total_a);

            total_a = 0;

            count[j] = med_prob + high_prob;  // count[] counts the no.of people ill for each day.


        }

        printf("\n\n\t\t\tTHE DAY WISE REPORT OF NUMBER OF PEOPLE WHO ARE ILL IS AS FOLLOWS");
        printf("\n\t\t\t-----------------------------------------------------------------\n");

        int j = 0;

        //loop used to display the no.of people ill for a week.

        while(j <= 6){

            printf("\t\t\t\t\t\tDAY %d : %d\n", j + 1, count[j]);
            j++;
        }
        
        printf("\n\n\t\t\tTHE VARIATION OF ILLNESS FOR A WEEK IS AS FOLLOWS\n");
        printf("\t\t\t---------------------------------------------------\n\n");

        severity(count);    // function is called to display the pattern of changes for a week.

        printf("\nEnter yes if you wanna survey for another locality and no if you wanna exit: ");
        scanf("%s",repeat);

    }while (strcmp(repeat,repeat_yes) == 0);


        return 0;

}
