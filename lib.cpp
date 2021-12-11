//
// Created by Valentina on 11/12/2021.
//
#include "lib.h"
float numM (const float num[], int dim){
    num[dim];
    float max = num[0];
    for (int i = 0; i < dim; ++i) {
        if(max<num[i]){
            max=num[i];
        }

    }
    return max;
}

