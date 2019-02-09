#include <iostream>
#include <vector>
using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());

    int ans=0;
    for(int i=0; i<n-1; i++){
        if(ar[i]==ar[i+1]){
            ans+=1;
            i++;
        }
    }
    return ans;

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int temp;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>temp;
		v.push_back(temp);
	}

	cout<<sockMerchant(n, v)<<endl;

	return 0;
}
