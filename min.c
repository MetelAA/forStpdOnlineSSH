#include "min.h"

int minN(int a[], int n){
    int minZ = INT_MAX;
    for(int i = 0; i < n; i++){
        minZ = minAB(minZ, a[i]);
    }
    return minZ;
}