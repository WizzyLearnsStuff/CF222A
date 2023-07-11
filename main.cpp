#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	k--;

	vector<int> m(n);

	for (int &el : m) cin >> el;

	int check = m[k];
	for (int i = k; i < n; i++) {
		if (check != m[i]) {
			cout << -1;
			return 0;
		}
	}

	int ops = k;
	for (int i = k-1; i >= 0; i--) {
		if (m[i] == check) ops--;
		else break;
	}

	cout << ops;
}
