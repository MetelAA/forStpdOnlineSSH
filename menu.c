#include <stdio.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"

void menu(int[], int, int);

int main(){
    int t;
    scanf("%d", &t);
    
    int n = 0;
    int a[100];
    int sOut = scanf("%d", &a[n]);
    while(sOut != 0 && n < 100){
        n++;
        sOut = scanf("%d", &a[n]);
    }

    if(n == 100){
        printf("Данные некорректны"); //так и не понял, гарантируется ли это условиями задачи
    }

    menu(a, n, t);
}

void menu(int a[], int n, int t){
    switch (t) {
        case 0:
            printf("%d", maxN(a, n));
            break;
        case 1:
            printf("%d", minN(a, n));
            break;
        case 2:
            printf("%d", diffN(a, n));
            break;
        case 3:
            printf("%d", sum(a, n));
            break;
        default:
            printf("Данные некорректны");
    }
}
