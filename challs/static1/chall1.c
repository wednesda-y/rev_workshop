#include<stdio.h>

int func(int a){
    a += 5;
    a -= 16;
    a *= 12;
    return a;
}


int main(){
    int a; 
    printf("answer: %d\n",func(1337));
}

