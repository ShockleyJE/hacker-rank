#include <iostream>
#include <cstdio>
using namespace std;

/*
Input: four integers
Output: the max of the four integers

I'll handle this recursively by implementing a separate max function
*/

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int max_of_four(int a, int b, int c, int d){

    return max(max(max(a, b), c), d);

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
