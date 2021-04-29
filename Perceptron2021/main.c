//
//  main.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 20/04/2021.
//

#include <stdio.h>

#include "Linear_Regression.h"
#include "iris_dataset.h"


int main(int argc, const char * argv[]){
    // insert code here...
    printf("Hello, World!\n");
    
    float learning_rate[] = {0.01,0.01,0.01};
    
    size_t BATCH_SIZE=32, PARAMS =2;
    
    float *result = NULL;
    
    Linear_Regression * my_regression = NULL;
    
    my_regression = Linear_Regression_generator(PARAMS, 4, learning_rate, BATCH_SIZE);
    
    printf("X Shape = (%lu, %lu) \n",sizeof(iris_data)/sizeof(iris_data[0]), sizeof(iris_data[0])/sizeof(iris_data[0][0]));
    
    
    printf("Y Shape = (%lu, %lu) \n",sizeof(iris_targets)/sizeof(iris_targets[0]),0.0);
    
    printf("weights: \n");
    Linear_regression_get_weights(my_regression);
    
    
    
    result = Linear_Regression_predict(my_regression->params,BATCH_SIZE, PARAMS, iris_data);
    
    
    Linear_Regression_print_results(result, BATCH_SIZE);
    
    
    return 0;
}
