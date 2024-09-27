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
    int sOut;
    do{
        sOut = scanf("%d", &a[n]);
        n++;
    }while(sOut == 1 && n < 100);
    n--;
    if(n == 100){
        printf("Данные некорректны\n"); //так и не понял, гарантируется ли это условиями задачи
    }
    menu(a, n, t);
}

void menu(int a[], int n, int t){
    switch (t) {
        case 0:
            printf("%d\n", maxN(a, n));
            break;
        case 1:
            printf("%d\n", minN(a, n));
            break;
        case 2:
            printf("%d\n", diffN(a, n));
            break;
        case 3:
            printf("%d\n", sum(a, n));
            break;
        default:
            printf("Данные некорректны\n");
    }
}
