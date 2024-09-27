#include "max.h"

int maxN(int a[], int n){
    int maxZ = INT_MIN;
    for(int i = 0; i < n; i++){
        maxZ = maxAB(a[i], maxZ);
    }
    return maxZ;
}