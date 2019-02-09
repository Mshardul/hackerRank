#include <iostream>
#include <vector>
using namespace std;

//wrong algo
void minimumBribes(vector<int> q) {
	int n=q.size();
	for(int i=0; i<n; i++)
		q[i]--;
	int ans=0;
	for(int i=0; i<n; i++){
		if(q[i]==i)
			continue;
		if(q[i]-i<=2 && q[i]-i>=-2)
			ans++;
		else{
			ans=-1;
			break;
		}
	}
	if(ans==-1)
		cout<<"Too chaotic";
	else{
		ans=(2*(ans/2)==ans)?ans/2:(ans/2)+1;
		cout<<ans;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;

		vector<int> v(n);
		for(int i=0; i<n; i++)
			cin>>v[i];

		minimumBribes(v);
	}

	return 0;
}