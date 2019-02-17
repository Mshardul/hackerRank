#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	vector<int> vec(n);
	int temp;

	for(int i=0; i<n; i++){
		cin>>temp;
		vec[i]=temp;
	}

	int ind=0, ele, i=0;
	while(ind<n){
		ele=vec[ind];
		if(ele==(ind+1)){
			ind++;
		}
		else{
			int i=ind;
			int ele_i;
			while(i!=(ele-1)){
				ele_i=a[a[i]];
				a[a[i]-1]=a[i];
				i=a[i];
			}
			a[i]=ele-1;
		}
	}

	return 0;
}