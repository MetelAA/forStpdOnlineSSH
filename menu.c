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
    int signal_out;
    do{
        signal_out = scanf("%d", &a[n]);
        n++;
    }while(signal_out == 1 && n < 100);
    n--;
    if(n == 100){
        printf("Данные некорректны\n"); //так и не понял, гарантируется ли это условиями задачи
    }
    menu(a, n, t);
}

void menu(int a[], int n, int t){
    switch (t) {
        case 0:
            printf("%d\n", max_num(a, n));
            break;
        case 1:
            printf("%d\n", min_num(a, n));
            break;
        case 2:
            printf("%d\n", diff_num(a, n));
            break;
        case 3:
            printf("%d\n", sum(a, n));
            break;
        default:
            printf("Данные некорректны\n");
    }
}