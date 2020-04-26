#include <stdio.h>

int main(void){
    float inputs [4]  = {1, 2, 3, 2.5};

    float weights[][4] = { 0.2 ,  0.8 , -0.5 ,  1.0 , 
                           0.5 , -0.91,  0.26, -0.5 ,
                          -0.26, -0.27,  0.17,  0.87};

    float biases[] = {2, 3, 0.5};

    float outputs[3];

    for (int r=0; r<3; r++){
        float output=0;
        for (int c=0; c<4; c++){
            output += inputs[c]*weights[r][c];
        }
        output += biases[r];
        outputs[r]=output;
    }
    for (int i=0; i<3; i++){
        printf("%f ", outputs[i]);
    }
}
