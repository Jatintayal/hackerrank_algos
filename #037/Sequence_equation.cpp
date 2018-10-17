#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/circular-array-rotation

int main(void)
{
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    
    int arr[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    
    int toprint[q];
    for(int i = 0; i < q; i++){
       scanf("%d",&toprint[i]);
    }
    
    int arr2[n];
    
    for(int i = 0; i < n; i++){
       arr2[(i+k)%n] = arr[i];
    }
    
    for(int i = 0; i < q; i++){
        printf("%d\n", arr2[(toprint[i])]);
    }
}