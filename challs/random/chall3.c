#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generate(char* flag);

int main(int argc, char *argv[]){  
    if(!(argc == 2)){
        printf("Usage: ./chall3 [arg]\n");
        exit(0);
    }

    generate(argv[1]);
    printf("good luck");


}

void generate(char* flag){
    time_t t;
    srand((unsigned) time(&t) ^ 42); 

    int length = strlen(flag);
    int out[length * 8];

    // Fill array with random data
    for(int i = 0; i < (length * 8); i++){
        out[i] = rand() % 2;
    }


    for(int i = 0; i < length; i++){
        int p = out[i * 8];
        int r = out[i * 8];
        int q = flag[i];
        if(!(q == '0' || q == '1')){
            printf("Please enter your message in binary\n");
            exit(0);
        }

        q = q - '0';
        out[i * 8] = (p & !q) | (!p & q);
        out[i * 8] = !(out[i * 8] ^ r);
    }

    printf("heres your encrypted message!\n");
    for(int i = 0; i < (length * 8); i++){
        printf("%d",out[i]);
    }
    putchar('\n');
}
