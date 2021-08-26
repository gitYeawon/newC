//
//  structure8(union).c
//  newC
//
//  Created by yeawonKim on 2021/08/26.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
union money {
    int kor;
    float us;
};

void main() {
    float er;
    union money m;
    printf("How much money would you like to exchange to US dollar?");
    scanf("%d", &m.kor);
    printf("Exchange Rate: ");
    scanf("%f", &er);
    printf("Entered amount is %dwon, ", m.kor);
    m.us = m.kor / er;
    printf("The money will be %8.3f $ \n", m.us);
}
