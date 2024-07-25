#include <iostream>
#include <vector>
using namespace std;
//approach using binary 
int countbits(int n){
	int count =0;
	while(n>0){
		n=n&(n-1);
		count++;
	}return count;
}
vector <int> countsetbits(int n){
	vector <int> sol;
	sol.push_back(0);
	for(int i=1; i<=n; i++){
		sol.push_back(countbits(i));
	}return sol;
}
int main(){
	int n;
	cout << "enter the number: ";
	cin >> n;
	vector <int> ans = countsetbits(n);
	int size = ans.size();
	for(int i=0; i<size; i++){
		cout << ans[i] << " ";
	}
}
