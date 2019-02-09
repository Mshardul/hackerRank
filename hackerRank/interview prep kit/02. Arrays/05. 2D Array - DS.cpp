#include <iostream>
#include <vector>
using namespace std;

int hourglassSum(vector<vector<int> > arr) {
	int sum=0;
	int max=INT_MIN;
	for (int i=1; i<5; i++){
		for(int j=1; j<5; j++){
			sum=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
			if(sum>max)
				max=sum;
		}
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int n;
	vector<vector<int> > v(6);
	for(int i=0; i<6; i++){
		v[i].resize(6);
		for(int j=0; j<6; j++){
			cin>>v[i][j];
		}
	}
	cout<<hourglassSum(v)<<endl;
	return 0;
}