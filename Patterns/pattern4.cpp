#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		for(j = i; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	for(i = n-1; i > 0; i--)
	{
		for(j = i; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}