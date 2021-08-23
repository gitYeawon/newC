//
//  pointer11.c
//  newC
//
//  Created by yeawonKim on 2021/08/23.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    int n, count;
    float avg, d, sum = 0;
    float list[100];
    printf("How many pieces of data do you want to average?");
    scanf("%d", &n);
    for (count = 0; count < n; ++count) {
        printf("i = %d x =", count + 1);
        scanf("%f", &list[count]);
        sum += list[count];
    }
    avg = sum / n;
    printf("The average is %5.2f \n", avg);
    
    for (count = 0; count < n; ++count) {
        d = list[count] - avg;
        printf("i = %d x = %5.2f d = %5.2f \n", count + 1, list[count],d);
        
    }
}
