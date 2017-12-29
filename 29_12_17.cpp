#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();++i)
	{
		if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='1'||s.at(i)=='3'||s.at(i)=='5'||s.at(i)=='7'||s.at(i)=='9')
		{
			count++;
		}

	}
	cout<<count;
	return 0;
}