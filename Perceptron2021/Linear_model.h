//
//  Linear_model.h
//  Perceptron
//
//  Created by Cesar Angeles on 17/04/2021.
//

#ifndef Linear_model_h
#define Linear_model_h

#include <stdio.h>

typedef struct _linear_model{
    float * error;
    float state_error;
    size_t n_params;
    size_t n_epochs;
    
    
    float * parameters;
    float * hyperparams;
    
    float * (*train)(float ** features, size_t n_features, uint16_t samples, float * parameters, float *targets, float * l_c, size_t batch_size, float (*activation)(float));
    float (*evaluate)(float * features, float * inputs, size_t n_features);

    
}Linear_Model;

float * Linear_model_weight_init(float min, float max, long n_weights);

Linear_Model * Linear_Model_generator(size_t params, size_t Batch_size);



float Linear_model_evaluate(float * features, float * inputs, size_t n_features);


void update_params(float *params, float *learning_c, size_t n_params, float error, float *inputs);



float * hebbian_learning(float ** features, size_t n_features, uint16_t samples, float * parameters, float *targets, float * l_c, size_t batch_size, float (*activation)(float));

float * Linear_model_weight_init(float min, float max, long n_weights);
#endif /* Linear_model_h */
