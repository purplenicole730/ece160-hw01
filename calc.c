#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float answer; 

int main(int argc, char* argv[]) {
    if(strcmp(argv[1], "x")== 0){
       // printf("multiply %g and %g\n", atof(argv[2]), atof(argv[3]));
        answer = atof(argv[2]) * atof(argv[3]);
    }
    else if(strcmp(argv[1], "/") == 0){
      //  printf("divide %g by %g\n", atof(argv[2]), atof(argv[3]));
        answer = atof(argv[2]) / atof(argv[3]);
    }
    else if(strcmp(argv[1], "+") == 0){
       // printf("add %g and %g\n", atof(argv[2]), atof(argv[3]));
        answer = atof(argv[2]) + atof(argv[3]);
    }
    else if(strcmp(argv[1], "-") == 0){
       // printf("subtract %g by %g\n", atof(argv[2]), atof(argv[3]));
        answer = atof(argv[2]) - atof(argv[3]);
    }
    else {
        printf("Error. Please try again.\n");
    }
    printf("%g\n", answer);
}
