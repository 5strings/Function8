//
//  main.c
//  Function Call by Value
//
//  Created by Eun Jae Lee on 23/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Call by value
//  Call by reference - address of variable

#include <stdio.h>

//void disp(int);  // formal argument
//void disp(int x) { // formal argument
//
//}
//int main() {
//int a=0;
//disp(a); // actual argument
//}

void disp(int);

int main(int argc, const char * argv[]) {

    int a=10;
    disp(a); // actual argument, call by value method
    
    printf("Value of a is %d \n",a);
    getchar();
    
}

void disp(int x){ // x is formal argument, a & x has value of 10
    x=x+5;
    printf("Value of x is %d \n",x);
    
}

