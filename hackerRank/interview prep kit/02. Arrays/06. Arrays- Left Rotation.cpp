#include <iostream>
#include <vector>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
	int n=a.size();
	vector<int> v;
	for(int i=d; i<n; i++)
		v.push_back(a[i]);
	for(int i=0; i<d; i++)
		v.push_back(a[i]);
	return v;
}

int main(int argc, char const *argv[]) {
	int n, d, temp;
	cin>>n;
	cin>>d;

	vector<int> v;

	for(int i=0; i<n; i++){
		cin>>temp;
		v.push_back(temp);
	}

	vector<int> result = rotLeft(v, d);

	for(int i=0; i<n; i++){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}