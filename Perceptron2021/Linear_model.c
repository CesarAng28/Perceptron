//
//  Linear_model.c
//  Perceptron
//
//  Created by Cesar Angeles on 17/04/2021.
//



#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#include "Linear_model.h"





float * Linear_model_weight_init(float min, float max, long n_weights){
    
    srand((uint32_t)time(NULL));   // Initialization,
    float cweight = 0;
    
    float* weights = malloc(sizeof(float)*n_weights);
    
    for(size_t weight=0; weight<n_weights; weight++){
        cweight = (float)rand()/((float)RAND_MAX);
        weights[weight] =weight;
        
    }
    
    return weights;

}


float Linear_model_evaluate(float * features, float *inputs, size_t n_features){
    
    size_t _feat = 0;
    float result = 0;
    
    for(_feat=0; _feat<n_features; _feat++){
        result += features[_feat]*inputs[_feat];
        
    }
    return result;
}


void update_params(float *params, float *learning_c, size_t n_params, float error, float *inputs){
    
    size_t param=0;
    
    for(param=0; param<n_params; param++){
        params[param]+=learning_c[param]*error*inputs[param];
    }
}


float * hebbian_learning(float ** features, size_t n_features, uint16_t samples, float * parameters, float *targets, float * l_c, size_t batch_size, float (*activation)(float)){
    

    float *error_history = malloc(sizeof(float)*samples);
    float result=0;
    
    size_t feature=0;
    uint16_t index = samples/batch_size;
    
    for(size_t _features = 0; _features < (int)index; _features++){
        result = 0;
        
        for(feature=_features*index ; feature<batch_size; feature++){
            
            result = Linear_model_evaluate(parameters, features[feature], n_features);
            result = activation(result);
            
            error_history[feature] -= (targets[feature]-result);
            
        }
        update_params(parameters, l_c, n_features, error_history[feature]/batch_size, features[feature]);
        
    }
    return error_history;
}
