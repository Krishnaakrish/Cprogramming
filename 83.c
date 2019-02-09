#include<stdio.h>
void main() {
    int num, min, max;
    scanf("%d", &num);
    scanf("%d %d", &min, &max);
    if((num-min)*(num-max) <= 0){
        printf("yes");
    } else {
     printf("no");
    }
}
