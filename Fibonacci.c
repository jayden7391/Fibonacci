//
//  main.c
//  Fibonacci
//
//  Created by Jayden Lee on 7/1/13.
//  Copyright (c) 2013 Jayden Lee. All rights reserved.
//

#include <stdio.h>

int fibonacci(int n);

int c_0;
int c_1;


int main(void){
    
    
    int n, i,m;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        
        scanf(ß)
        
        fibonacci(n);
        
    }
    
    
    return 0;
    
}

int fibonacci(int n) {
    if (n==0) {
        printf("0");
        return 0;
    } else if (n==1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}