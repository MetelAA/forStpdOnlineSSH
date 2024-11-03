#include "diff.h"
#include "min.h"
#include "max.h"
int diff_num(int a[], int n){
    int max = max_num(a, n);
    int min = min_num(a, n);
    return (max-min);
}
