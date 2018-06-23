#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b, c, n;
	cin >>a>>b>>c>>n;
	int ans = n-(a+b-c);
	if(ans>0) {
		cout<<ans<<endl;
	}
	else {
		cout<<-1;
	}
	return 0;
}