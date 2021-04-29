//
//  Linear_Algebra.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//



#include <stdlib.h>
#include "Linear_Algebra.h"



float Linear_Algebra_Dot(float *vector1, float *vector2, size_t n_membs){
    
    float result =0.0;
    
    if(vector1==NULL||vector2==NULL){
        return (float)0xFFFFFFFF;
    }
    for(size_t index=0; index<n_membs ;index ++){
        result +=vector1[index]*vector2[index];
    }
    return result;
}



float *Linear_Algebra_Vector(size_t n_members){
    float *my_vector = NULL;
    
    my_vector = calloc(n_members, sizeof(float));
    
    return my_vector;
}

float **Linear_Algebra_fTensor(uint16_t rows, uint16_t columns){
    
    float **my_tensor = NULL;
    
    my_tensor = calloc(rows, sizeof(float*));
    
    for(uint16_t row=0; row<rows; row++){
        my_tensor[row] = calloc(columns, sizeof(float));
    }
    return my_tensor;
}


