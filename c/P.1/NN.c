#include <stdio.h>

int main(void){
    float inputs [] = {1.2, 5.1, 2.1};
    float weights[] = {3.1, 2.1, 8.7};
    float bias      = 3;

    float output = inputs[0] * weights[0] +
                   inputs[1] * weights[1] +
                   inputs[2] * weights[2] +
                   bias;

    printf("%f\n", output);
}
