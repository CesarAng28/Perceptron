//
//  Statistics.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 27/04/2021.
//

#include <stdlib.h>

#include "Linear_Algebra.h"
#include "Statistics.h"





float Statistics_average(float *array, uint16_t n_member){
    float average = 0;
    for(uint16_t mem=0; mem<n_member; mem++){
        average +=array[mem];
    }
    return average/=n_member;
}


float ** Statistics_random_sampling(size_t start, size_t stop, uint16_t samples, uint16_t features, float *dataframe[features]){
    
    uint64_t random_index = 0;
    float ** new_samples = Linear_Algebra_fTensor(samples, features);
    
    
    for(size_t idx = 0; idx<samples; idx++){
        random_index = (rand()/RAND_MAX*(stop-start) + start);
        new_samples[random_index] = dataframe[random_index];
    }
    return new_samples;
}
