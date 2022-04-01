#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n, m;
	cin >> n >> m;
	int ans = 0;
	// there are two (2) cases:
	// 1. n <= m
	// 2. n > m
	
	// if n <= m:
	// the answer is n itself because there are already n left shoes
	
	// if n > m:
	// the answer is the sum of m and twice the remaining needed extra shoes (n - m)
	if(n <= m) {
		ans = n;
	} else {
		ans = m + ((n - m) * 2);
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
