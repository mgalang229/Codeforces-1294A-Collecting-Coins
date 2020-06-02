#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a[3], n;
	cin >> a[0] >> a[1] >> a[2] >> n;
	sort(a, a+3);
	n -= 2*a[2]-a[1]-a[0];
	if(n < 0 || n%3 != 0) cout << "NO";
	else cout << "YES";
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}
