#include <stdio.h>

int main()
{
    int child(int age,int a){
       int temp,oxy,resp,hr,i,j,n,b,c,d,e,sum,low,med,high,flag;
       string audio,g,repeat;
       a=0;
       b=0;
       c=0;
       d=0;
       e=0;
       flag=0;
       printf("enter your oxygen level");
       scanf("%d",&oxy);
       if(oxy<75||oxy>100){
          b=b+1;
       }
       printf("enter the air intake rate");
       scanf("%d",&resp);
       if(resp<18||resp>30){
           c=c+1;
       }
       printf("enter your heart rate");
       scanf("%d",&hr);
       if(hr<60||hr>130){
           d=d+1;
       }
       do{
           printf("enter yes for severe cough no for light cough);
           scanf("%c",&audio);
           if(audio==yes){
               e=e+1;
           }else if (audio!=yes && audio!=no){
               printf("output error! re enter");
           }
       }while(audio!=yes&&qaudio!=no);
           flag=a+b+c+d+e;
           return flag;
       }   
    
    return 0;
}

   

