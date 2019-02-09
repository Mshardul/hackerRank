#include <iostream>
using namespace std;

long repeatedString(string s, long n){
	long int ans=0;
	long int l=s.size();
	for(long int i=0; i<l; i++){
		if(s[i]=='a')
			ans++;
	}
	ans*=(n/l);
	n=n%l;
	for(long int i=0 ;i<n; i++){
		if(s[i]=='a')
			ans++;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	long int n;
	cin>>n;

	cout<<repeatedString(s, n)<<endl;
	return 0;
}