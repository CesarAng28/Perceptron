//
//  Statistics.c
//  Linear_Regression
//
//  Created by Cesar Angeles on 27/04/2021.
//

#include "Statistics.h"



float Statistics_average(float *array, uint16_t n_member){
    float average = 0;
    for(uint16_t mem=0; mem<n_member; mem++){
        average +=array[mem];
    }
    return average/=n_member;
}
