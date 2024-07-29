#include <iostream>
using namespace std;
void leaders(int arr[],int n){
	int currentleader = arr[n-1];
	cout << currentleader << " ";
	for(int i=n-2; i>=0; i--){
		if(currentleader<arr[i]){
			currentleader =arr[i];
			cout << currentleader << " ";
		}
	}
}
int main(){
	int arr[] = {7,10,4,3,6,5,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	leaders(arr,n);
}
