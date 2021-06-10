#include <iostream>
#include <unordered_map>
using namespace std;

void removeDuplicate(int arr[], int n){
	unordered_map<int, bool> mp;

	for (int i = 0; i < n; ++i) {
	if (mp.find(arr[i]) == mp.end()) {
		cout << arr[i] << " ";
	}
	mp[arr[i]] = true;
	}
}

int main()
{
	int a[] = {1,2,3,4};
	int i = ++a[0];
	cout<<i;
}