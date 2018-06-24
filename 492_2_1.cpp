#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int b, c = 0;
	cin >> b;
	int a[5] = {100, 20, 10, 5, 1};
	for(int i=0; i<5; ++i) {
		c += b/a[i];
		b%=a[i];
		if(b==0)
		{
			break;
		}
	}
	cout << c;
	return 0;
}