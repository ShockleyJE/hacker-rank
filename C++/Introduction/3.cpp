#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Input: Constraint: values are space-separated
    // Constraint: Values are int, long, long long, char, float, and double
    // Output:Print each element on a new line in the same order it was received

    int valInt;
    long valLong;
    long long valLongLong;
    char valChar;
    float valFloat;
    double valDouble;

    scanf("%d %ld %lld %c %f %lf",
      &valInt, &valLong, &valLongLong,
      &valChar, &valFloat, &valDouble);

    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n",
    valInt, valLong, valLongLong, valChar, valFloat, valDouble);

    return 0;
}
