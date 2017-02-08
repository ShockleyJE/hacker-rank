#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Input: Two positive integers, a and b, separated by newline
    // Output: For each number in range of set, print ...
    // 1 <= n <= 9, english representation
    // 9 < n && even, print even
    // 9 < n && odd, print odd

    int a;
    int b;
    cin >> a;
    cin >> b;

    //edge case
    if(b < a){ return 0;};

    if(a <= 9){
      for(a; a <= 9 && a <= b; a++){

        if(a==1){printf("one\n");}
        else if(a==2){printf("two\n");}
        else if(a==3){printf("three\n");}
        else if(a==4){printf("four\n");}
        else if(a==5){printf("five\n");}
        else if(a==6){printf("six\n");}
        else if(a==7){printf("seven\n");}
        else if(a==8){printf("eight\n");}
        else if(a==9){printf("nine\n");}
      }
    }

     for (;a <= b; a++){
        if(a % 2 == 1){
          printf("odd\n");
        } else {
          printf("even\n");
        }
      }


    return 0;
}
