//
//  main.c
//  Perceptron
//
//  Created by Cesar Angeles on 17/04/2021.
//

#include <stdio.h>
#include "Perceptron.h"
#include "sample_data.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    Perceptron * perceptron=NULL;
    float hyper[] = {0.01,0.01};
    printf("Data size: %lu\n",sizeof(data));
    
    perceptron = Perceptron_generator(2, 32,hyper);
    
    
}
