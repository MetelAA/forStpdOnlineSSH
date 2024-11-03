#include "min.h"
#include <limits.h>

int min_num(int a[], int n){
    int min_n = INT_MAX;
    for(int i = 0; i < n; i++){
        min_n = minAB(min_n, a[i]);
    }
    return min_n;
}