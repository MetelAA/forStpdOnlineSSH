#include "sum.h"
#include "min.h"

int sum(int a[], int n){
    int min = min_num(a, n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != min)
            sum += a[i];
        else
            break;
    }
    return sum;
}
