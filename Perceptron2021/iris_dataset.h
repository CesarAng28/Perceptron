//
//  iris_dataset.h
//  Linear_Regression
//
//  Created by Cesar Angeles on 27/04/2021.
//

#ifndef iris_dataset_h
#define iris_dataset_h

float iris_data [][2] = {1.4,0.2,1,
    1.4,0.2,1,
    1.3,0.2,1,
    1.5,0.2,1,
    1.4,0.2,1,
    1.7,0.4,1,
    1.4,0.3,1,
    1.5,0.2,1,
    1.4,0.2,1,
    1.5,0.1,1,
    1.5,0.2,1,
    1.6,0.2,1,
    1.4,0.1,1,
    1.1,0.1,1,
    1.2,0.2,1,
    1.5,0.4,1,
    1.3,0.4,1,
    1.4,0.3,1,
    1.7,0.3,1,
    1.5,0.3,1,
    1.7,0.2,1,
    1.5,0.4,1,
    1,0.2,1,
    1.7,0.5,1,
    1.9,0.2,1,
    1.6,0.2,1,
    1.6,0.4,1,
    1.5,0.2,1,
    1.4,0.2,1,
    1.6,0.2,1,
    1.6,0.2,1,
    1.5,0.4,1,
    1.5,0.1,1,
    1.4,0.2,1,
    1.5,0.2,1,
    1.2,0.2,1,
    1.3,0.2,1,
    1.4,0.1,1,
    1.3,0.2,1,
    1.5,0.2,1,
    1.3,0.3,1,
    1.3,0.3,1,
    1.3,0.2,1,
    1.6,0.6,1,
    1.9,0.4,1,
    1.4,0.3,1,
    1.6,0.2,1,
    1.4,0.2,1,
    1.5,0.2,1,
    1.4,0.2,1,
    4.7,1.4,1,
    4.5,1.5,1,
    4.9,1.5,1,
    4,1.3,1,
    4.6,1.5,1,
    4.5,1.3,1,
    4.7,1.6,1,
    3.3,1,1,
    4.6,1.3,1,
    3.9,1.4,1,
    3.5,1,1,
    4.2,1.5,1,
    4,1,1,
    4.7,1.4,1,
    3.6,1.3,1,
    4.4,1.4,1,
    4.5,1.5,1,
    4.1,1,1,
    4.5,1.5,1,
    3.9,1.1,1,
    4.8,1.8,1,
    4,1.3,1,
    4.9,1.5,1,
    4.7,1.2,1,
    4.3,1.3,1,
    4.4,1.4,1,
    4.8,1.4,1,
    5,1.7,1,
    4.5,1.5,1,
    3.5,1,1,
    3.8,1.1,1,
    3.7,1,1,
    3.9,1.2,1,
    5.1,1.6,1,
    4.5,1.5,1,
    4.5,1.6,1,
    4.7,1.5,1,
    4.4,1.3,1,
    4.1,1.3,1,
    4,1.3,1,
    4.4,1.2,1,
    4.6,1.4,1,
    4,1.2,1,
    3.3,1,1,
    4.2,1.3,1,
    4.2,1.2,1,
    4.2,1.3,1,
    4.3,1.3,1,
    3,1.1,1,
    4.1,1.3,1,
    6,2.5,1,
    5.1,1.9,1,
    5.9,2.1,1,
    5.6,1.8,1,
    5.8,2.2,1,
    6.6,2.1,1,
    4.5,1.7,1,
    6.3,1.8,1,
    5.8,1.8,1,
    6.1,2.5,1,
    5.1,2,1,
    5.3,1.9,1,
    5.5,2.1,1,
    5,2,1,
    5.1,2.4,1,
    5.3,2.3,1,
    5.5,1.8,1,
    6.7,2.2,1,
    6.9,2.3,1,
    5,1.5,1,
    5.7,2.3,1,
    4.9,2,1,
    6.7,2,1,
    4.9,1.8,1,
    5.7,2.1,1,
    6,1.8,1,
    4.8,1.8,1,
    4.9,1.8,1,
    5.6,2.1,1,
    5.8,1.6,1,
    6.1,1.9,1,
    6.4,2,1,
    5.6,2.2,1,
    5.1,1.5,1,
    5.6,1.4,1,
    6.1,2.3,1,
    5.6,2.4,1,
    5.5,1.8,1,
    4.8,1.8,1,
    5.4,2.1,1,
    5.6,2.4,1,
    5.1,2.3,1,
    5.1,1.9,1,
    5.9,2.3,1,
    5.7,2.5,1,
    5.2,2.3,1,
    5,1.9,1,
    5.2,2,1,
    5.4,2.3,1,
    5.1,1.8,1};


float iris_targets[] ={0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
2,
    2};

#endif /* iris_dataset_h */
