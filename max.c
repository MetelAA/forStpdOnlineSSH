#include "max.h"
#include <limits.h>

int max_num(int a[], int n){
    int max_n = INT_MIN;
    for(int i = 0; i < n; i++){
        max_n = maxAB(a[i], max_n);
    }
    return max_n;
}