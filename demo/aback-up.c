#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i;
    srand(time(0));
    for (i=1;i<=10;i++){
        printf("%d\n",rand()%100);
    }
    return 0;
}