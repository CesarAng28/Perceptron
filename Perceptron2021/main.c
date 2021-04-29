//
//  main.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//

#include <stdio.h>
#include <stdlib.h>


#include "Linear_Regression.h"
#include "iris_dataset.h"

#define EPOCHS 4


int main(int argc, const char * argv[]){
    // insert code here...
    printf("Hello, World!\n");
    
    float learning_rate[] = {0.0005,0.0005,0.0005};
    
    size_t BATCH_SIZE=32, PARAMS =2;
    
    float *result = NULL;
    
    float *error = NULL;
    
    Linear_Regression * my_regression = NULL;
    
    my_regression = Linear_Regression_generator(PARAMS, EPOCHS, learning_rate, BATCH_SIZE);
    

    
    
    
    printf("X Shape = (%lu, %lu) \n",sizeof(iris_data)/sizeof(iris_data[0]), sizeof(iris_data[0])/sizeof(iris_data[0][0]));
    
    
    printf("Y Shape = (%lu, %lu) \n",sizeof(iris_targets)/sizeof(iris_targets[0]),(unsigned long)0.0);
    
    printf("weights: \n");
    Linear_regression_get_weights(my_regression);
    
    
    
    result = Linear_Regression_predict(my_regression->params,BATCH_SIZE, PARAMS, iris_data);
    
    
    Linear_Regression_Hebbian(PARAMS, my_regression->params, iris_data[0], 1.0, learning_rate);
    
    printf("weights: \n");
    Linear_regression_get_weights(my_regression);
    
    Linear_Regression_print_results(result, BATCH_SIZE);
    
    error=Linear_Regression_fit(my_regression->params, PARAMS, EPOCHS, BATCH_SIZE, iris_data, iris_targets, learning_rate);
    
    Linear_Regression_print_results(error, EPOCHS);
    
    free(result);
    return 0;
}
