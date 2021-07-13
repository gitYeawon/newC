//
//  switch.c
//  newC
//
//  Created by yeawonKim on 2021/07/14.
//  Copyright © 2021 yeawonKim. All rights reserved.
//

#include <stdio.h>
void main() {
    enum syllable {Do, Re, Mi, Pa} tone;
    for(tone = Do; tone<=Pa; tone += 1){ 
        switch (tone) {
            case Do:
                printf("도는 하얀 도라지 \n");
                break;
            case Re:
                printf("레는 둥근 레코드 \n");
                break;
            case Mi:
                printf("미는 파란 미나리 \n");
                break;
            case Pa:
                printf("파는 예븐 파랑새 \n");
                break;
  
        }
    }
}
