#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Input: First line contains N, the number of integers
      Second line contains N integers separated by spaces

Output: Print array in reverse order separated by spaces
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;
    int arr[n];

    // set the starting index to the end of array and write backwards
    int i= n-1;
    while(cin){
      cin >> arr[i];
      i--;
    };
    // now display the array from the beginning
    for(i= 0; i< n; i++){
      cout << arr[i] << " ";
    };

    return 0;
}
