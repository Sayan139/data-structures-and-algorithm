#include <iostream>
using namespace std;
bool sorted(int n,int arr[]){
	for(int i =1; i<n; i++){
		if(arr[i]<arr[i<1]){
			return false;
		}
	}
	return true;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(sorted(n,arr)){
		cout << "its sorted";
	}else{
		cout << "its not sorted";
	}
}
