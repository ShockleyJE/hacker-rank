#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function

    /*
    Accepts two integers, a and b as arguments
    set a as the sum of them
    set b as the absolute difference of them

    we will use a temp variable, tempA and the abs() function from cmath
    */

    int tempA= *a;
    *a= *a + *b;
    *b= abs(tempA-*b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
