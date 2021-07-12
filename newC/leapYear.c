//
//  leapYear.c
//  newC
//
//  Created by yeawonKim on 2021/07/12.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int year, month, day;
    printf("enter a year and month: ");
    scanf("%d %d", &year, &month);
    if(month >= 1 && month <=12){
        if(month == 2){
            if(year %4 == 0 && year %100 !=0 || year % 400 == 0){
                day = 29;
                printf("%d year %d month has %d days and It is a leap year.\n", year, month,day);
            }
            else{
                day = 28;
                printf("%d year %d month has %d days. \n", year,month,day);
            }
        }
        else{
            if (month ==1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month==12) {
                day = 31;
                printf("%d year %d month has %d days. \n",year,month,day);
            }
            else{
                day = 30;
                printf("%d year %d month has %d days \n",year,month,day);
            }
        }
    }
    else
        printf("wrong input. \n");
}
