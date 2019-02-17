#include <iostream>
#include <vector>
using namespace std;

void minimumBribes(vector<int> q) {
    int ans = 0;
    int n=q.size();
    for (int i=n-1; i>=0; i--) {
        if ((q[i]-(i+1)) > 2) {
            ans=-1;
            break;
        }
        for (int j=max(0,(q[i]-2)); j<i; j++)
            if (q[j]>q[i])
                ans++;
    }
    if(ans==-1)
        cout<<"Too chaotic";
    else
        cout<<ans;
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