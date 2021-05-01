//
//  Linear_Algebra.h
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//

#ifndef Linear_Algebra_h
#define Linear_Algebra_h

#include <stdio.h>

float Linear_Algebra_Dot(float *vector1, float *vector2, size_t n_membs);

float *Linear_Algebra_Vector(size_t n_members);

uint16_t *Linear_Algebra_IVector(size_t n_members);


float **Linear_Algebra_fTensor(uint16_t rows, uint16_t columns);

#endif /* Linear_Algebra_h */
 
