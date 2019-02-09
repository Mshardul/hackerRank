#include <iostream>
#include <string>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int up=1, step=0, ans=0;
	for(int i=0; i<n; i++){
		if(s[i]=='U')
			step++;
		else if(s[i]=='D')
			step--;
		if(step<0 && up==1){
			ans++;
			up=0;
		}
		else if(step>=0)
			up=1;
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;

    string s;
    cin>>s;

    // int n=s.size();
    cout<<countingValleys(n, s)<<endl;
}
