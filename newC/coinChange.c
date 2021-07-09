//
//  coinChange.c
//  newC
//
//  Created by yeawonKim on 2021/07/10.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main_2() {
    int in_money, coin_500, coin_100, coin_50, coin_10;
    printf("How much would you like to change?");
    scanf("%d", &in_money);
    coin_500 = in_money / 500;
    in_money = in_money % 500;
    coin_100 = in_money / 100;
    in_money = in_money % 100;
    coin_50 = in_money / 50;
    in_money = in_money % 50;
    coin_10 = in_money / 10;
    in_money = in_money % 10;
    printf("\n 500won coin => %d 개 \n",coin_500);
    printf("\n 100won coin => %d 개 \n",coin_100);
    printf("\n 50won coin => %d 개 \n",coin_50);
    printf("\n 10won coin => %d 개 \n",coin_10);
    printf("\n rest of money => %d 개 \n",in_money);
    
}
