#include "diff.h"
#include "stdio.h"

int diffN(int a[], int n){
    int max = maxN(a, n);
    int min = minN(a, n);
    return (max-min);
}
