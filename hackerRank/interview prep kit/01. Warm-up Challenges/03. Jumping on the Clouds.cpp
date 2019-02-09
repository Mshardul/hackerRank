#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c){
	int ans=0;
	int n=c.size();
	int i=0;
	while(i<n-1){
		if(c[i+2]==0)
			i+=2;
		else
			i++;
		ans+=1;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n, temp;
	cin>>n;

	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>temp;
		v.push_back(temp);
	}

	cout<<jumpingOnClouds(v)<<endl;
	return 0;
}