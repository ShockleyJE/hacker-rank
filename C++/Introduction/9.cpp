#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Input: first line contains two integers
  -first denoting number (n) of variable length arra
  -second denoting number of queries (q)

  each line after until n contains space-separated sequence inline
*/

//note, code is not elegant but neither was this problem

int main() {
  int n, q, k;
	cin >> n >> q;
	vector<vector<int>> a;
	vector<vector<int>> b;

	a.resize(n);
	b.resize(q);

	for (int v1 = 0; v1 < n; v1++) {
		cin >> k;
		a[v1].resize(k);
		for (int v2 = 0; v2 < k; v2++) {
			cin >> a[v1][v2];
		}
	}

	for (int v3 = 0; v3 < q; v3++) {
		b[v3].resize(2);
		cin >> b[v3][0] >> b[v3][1];
	}

	for (int i = 0; i < q; i++) {
		cout << a[b[i][0]][b[i][1]] << endl;
	}
    return 0;
}
