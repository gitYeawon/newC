//
//  3dmensionAsAParmater.c
//  newC
//
//  Created by yeawonKim on 2021/08/19.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void score_average(int gr[][2][3], int , int, int);
void main() {
    int score[4][2][3] = {{{10, 20, 30},{10,10,10}},{{0,40,50},
                         {10, 10, 10,}}, {{30, 30, 30}, {50, 50, 50}},
                         {{20, 20, 20}, {0, 0, 0}}};
    score_average(score, 4, 2, 3);
}
void score_average(int gr[][2][3], int size, int row, int column){
    int student_sum = 0, subject_sum = 0;
    int subject_average = 0;
    int i, j, k;
    for (k = 0; k < size; k++) { //loop for each class
        student_sum = 0;
        for (i = 0; i < row; i++){
            subject_sum = 0;
            for (j = 0; j < column; j++)
                //the sum of j student's scores in k classes
                subject_sum += gr[k][i][j];
            subject_average = subject_sum/column;
            printf("student%d average = %d \n", i + 1, subject_average);
            //the sum of whole student's average in k classes
            student_sum += subject_average;
        }
        //The average scores of each class
        printf("class%d average = %d \n\n", k + 1, student_sum / row);
    }
}
