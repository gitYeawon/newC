//
//  callByValue.c
//  newC
//
//  Created by yeawonKim on 2021/08/02.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void swap(int x, int y);
void main() {
    int a = 3, b = 5;
    printf("before calling a = %d, b = %d \n", a,b);  // a = 3, b =5
    swap(a,b);                                        // a = 5, b = 3
    printf("after calling a = %d, b = %d \n", a,b);   // a = 3, b = 5 -> call by value
}
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("inside the function a = %d, y = %d \n", x,y);
}
