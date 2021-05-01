//
//  Statistics.h
//  Linear_Regression
//
//  Created by Cesar Angeles on 27/04/2021.
//

#ifndef Statistics_h
#define Statistics_h

#include <stdio.h>

float Statistics_average(float *array, uint16_t n_member);

float ** Statistics_random_sampling(size_t start, size_t stop, uint16_t samples, uint16_t features, float *dataframe[features]);

#endif /* Statistics_h */
