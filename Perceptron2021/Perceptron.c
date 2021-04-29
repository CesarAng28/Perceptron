//
//  Perceptron.c
//  Perceptron
//
//  Created by Cesar Angeles on 18/04/2021.
//
#include <stdlib.h>

#include "Perceptron.h"
#include "Linear_model.h"

Perceptron * Perceptron_generator(size_t params, size_t Batch_size, float * hyperparameters){
    
    
    Perceptron * my_perceptron = malloc(sizeof(Perceptron));
    
    
    my_perceptron->Linear_Threshold_Unit = malloc(sizeof(Linear_Model));
    my_perceptron->Linear_Threshold_Unit->parameters = Linear_model_weight_init(MIN_WEIGHT, MAX_WEIGHT, params);
    
    

    my_perceptron->Linear_Threshold_Unit->n_params = params;
    my_perceptron->Linear_Threshold_Unit->hyperparams = malloc(sizeof(float)*(params+1));
    
    my_perceptron->Linear_Threshold_Unit->train = hebbian_learning;
    my_perceptron->Linear_Threshold_Unit->evaluate = Linear_model_evaluate;
    my_perceptron->activation=relu;
    
    
    my_perceptron->Linear_Threshold_Unit->n_epochs=0;
    my_perceptron->Linear_Threshold_Unit->error = calloc(sizeof(float)*Batch_size,0);
    
    
    

    return my_perceptron;
    
    
}




float relu(float input){
    return input>0.0?input:0.0;
}
