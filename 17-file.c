#include <stdio.h>

int main(){
    FILE *p;
    p = fopen("raj.txt", "r");
    int num;
    fscanf(p, "%d", &num);
    printf("%d\n", num);
    fclose(p);
    return 0;
}