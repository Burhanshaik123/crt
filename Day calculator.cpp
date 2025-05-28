// You are using GCC
#include<stdio.h>
int main(){
    int date;
    int month;
    int year;
    printf("Enter the date:\n");
    scanf("%d",&date);
    printf("Enter the month:\n");
    scanf("%d",&month);
    printf("Enter the year:\n");
    scanf("%d",&year);
    int m[]={0,3,3,6,1,4,6,2,5,0,3,5};
    int y=0;
    if(year>1600 && year<=1700){
        y=6;
    }
    else if(year>1700 && year<=1800){
        y=4;
    }
    else if(year>1800 && year<=1900){
        y=2;
    }
    else if(year>1900 && year<=2000){
        y=0;
    }
    else if(year>2000 && year<=2100){
        y=6;
    }
    int ans=(date+m[month-1]+year%100/4)%7;
    switch(ans){
        case 0:
        printf("Sunday");
        break;
         case 1:
        printf("Monday");
        break;
         case 2:
        printf("Tuesday");
        break;
         case 3:
        printf("Wednesday");
        break;
         case 4:
        printf("Thursday");
        break;
         case 5:
        printf("Friday");
        break;
         case 6:
        printf("Satday");
        break;
    }
    return 0;
}