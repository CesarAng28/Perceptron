//
//  Linear_Regression.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//

#include <stdlib.h>
#include <math.h>



#include "Linear_Algebra.h"
#include "Linear_Regression.h"
#include "Statistics.h"


float Linear_Regression_sigmoid(float x){
    
    return 1.0/(1.0 + exp(-x));
    
}



float Linear_Regression_relu(float x){
    return x>0?x:0; //If X>0 return X; 0 otherwise
}





float Linear_Regression_RMS(float *predict, float *target, size_t n_values){
    
    float result = 0;
    
    for(size_t idx=0; idx<n_values; idx++){
        result += powf((predict[idx]-target[idx]), 2);
    }
    return sqrt(result);
}



// n_features : |Xs|
// features: DataShell
// Params : Ws

float * Linear_Regression_predict(float *params, size_t Batch_Size, size_t n_params, float features[Batch_Size][n_params]){
    
    float *result =NULL;
    
    result = Linear_Algebra_Vector(Batch_Size);
    
    
    for(size_t observation=0; observation < Batch_Size; observation++){
        
        result[observation] = Linear_Algebra_Dot(&features[observation][n_params], params, n_params);
    }
    
    return result;
    
}

// predictors(Ws, n_w, X, n_x, Y, n_y, )
float * Linear_Regression_fit(float *params, size_t n_params, size_t epochs, size_t Batch_size, float features[Batch_size*epochs][n_params] , float *target, float *learning_rate){
    
    float * _error = NULL;
    float * _result = NULL;
    uint16_t index = 0;
    
    _error = Linear_Algebra_Vector(epochs);
    
    for(size_t _epoch=0; _epoch < epochs; _epoch++){
        _result = Linear_Regression_predict(params, Batch_size, n_params, features);
        _error[index] = Linear_Regression_Hebbian(params, features[Batch_size][n_params],_result, Batch_size, target, learning_rate, params);
            
    }

    return _error;
    
}


float Linear_Regression_Hebbian(float *params, float *features, size_t n_params, float *predictions, size_t n_predict, float * target, float * hyper){
    
    float error =0;
    error = Linear_Regression_RMS(predictions, target, n_predict);

    for(size_t param=0; param< n_params; param++){
        params[param] -= hyper[param]*1.0/(float)n_predict*features[param];
    }
    return error;
    
}




Linear_Regression * Linear_Regression_generator(size_t n_params, size_t epochs, float *Learning_rate, uint16_t Batch_size){
    
    Linear_Regression * my_regression = NULL;
    
    my_regression = malloc(sizeof(Linear_Regression));
    
    
    
    my_regression->Batch_Size = Batch_size;
    my_regression->Learning_rate = Learning_rate;
    my_regression->activation = Linear_Regression_relu;
    my_regression->epochs = epochs;
    my_regression->error = malloc(sizeof(float)*Batch_size);
    my_regression->eval= Linear_Regression_predict;
    my_regression->loss=NULL;
    my_regression->n_params=n_params;
    my_regression->train = Linear_Regression_fit;
    Linear_Regression_set_weights(my_regression);
    
    return my_regression;
    
}


void Linear_regression_set_activation(Linear_Regression *regression, DECISION_FUN new_activation){
    regression->activation = new_activation;
}

void Linear_regression_get_weights(Linear_Regression *regression){
    size_t n_p = regression->n_params;
    for (size_t weight=0; weight<n_p; weight++){
        printf("w[%zu] = %f \n", weight,regression->params[weight]);
    }
}

void Linear_Regression_set_weights(Linear_Regression *regression){
    
    size_t n_p = regression->n_params;
    float *new_params = calloc(n_p, sizeof(float));
    
    free(regression->params);
    regression->params = NULL;
    regression->params = new_params;
    
    for(size_t w = 0; w<n_p; w++){
        regression->params[w] = (float)rand()/(float)RAND_MAX;
    }
    
}

void Linear_Regression_print_results(float * results, uint16_t n_data){
    puts("Linear Regression Results");
    for(uint16_t element=0; element<n_data; element++){
        printf("\t %d = %f \n",element, results[element]);
    }
}
