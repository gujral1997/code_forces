#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n, count = 0;
	cin>>n;
	long long a[n];
	for(int j = 0;j<n;++j) {
		cin>>a[j];
	}
	for(long i=0;i<n;++i) {
		cout<<count<<endl;
		if(a[i]<=count)
		{
			cout<<i+1;
			break;
		}
		count++;
		if(i==n-1)
		{
			i=0;
		}
	}
	return 0;
}