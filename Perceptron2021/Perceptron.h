//
//  Perceptron.h
//  Perceptron
//
//  Created by Cesar Angeles on 18/04/2021.
//

#ifndef Perceptron_h
#define Perceptron_h

#include <stdio.h>
#include "Linear_model.h"

#define MIN_WEIGHT 0.0
#define MAX_WEIGHT 1.0

#define LTU Linear_Threshold_Unit

typedef struct _perceptron{
    
    Linear_Model * Linear_Threshold_Unit;
    float (*activation) (float);
    
    
}Perceptron;

float relu(float input);
Perceptron * Perceptron_generator(size_t params, size_t Batch_size, float * hyperparameters);

#endif /* Perceptron_h */
