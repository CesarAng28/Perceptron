//
//  Linear_Regression.h
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//

#ifndef Linear_Regression_h
#define Linear_Regression_h

#include <stdio.h>

typedef float *(*EVAL)(float *, size_t , float **, size_t );

typedef float *(*TRAIN)(float *, size_t , float **, size_t , size_t , float *, size_t , size_t , float *);

typedef float (*DECISION_FUN)(float);





typedef struct _linear_regression{
    
 // Attributes or variables
    float *params;
    size_t n_params;
    float * error;
    size_t epochs;
    float *Learning_rate;
    uint16_t Batch_Size;
    
// Methods or Behaviour
    
    EVAL eval;
    TRAIN train;
    DECISION_FUN activation;
    float (*loss)(float*,float*,size_t);
    
}Linear_Regression;







float Linear_Regression_sigmoid(float x);

float Linear_Regression_relu(float x);

float Linear_Regression_RMS(float *predict, float *target, size_t n_values);


float * Linear_Regression_predict(float *params, size_t Batch_Size, size_t n_params, float features[Batch_Size][n_params]);

float Linear_Regression_Hebbian(float *features, size_t n_features, float *predictions, size_t n_predict, float * target, float * hyper, float *params);

void Linear_Regression_set_weights(Linear_Regression *regression);

Linear_Regression * Linear_Regression_generator(size_t n_params, size_t epochs, float *Learning_rate, uint16_t Batch_size);

float * Linear_Regression_fit(float *params, size_t n_params, size_t Batch_size, float features[Batch_size][n_params] , float *target, size_t epochs, float *learning_rate);


void Linear_regression_set_activation(Linear_Regression *regression, DECISION_FUN new_activation);


void Linear_regression_get_weights(Linear_Regression *regression);

void Linear_Regression_print_results(float * results, uint16_t n_data);

#endif /* Linear_Regression_h */
