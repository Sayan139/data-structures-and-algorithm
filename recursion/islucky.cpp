#include <iostream>
using namespace std;
bool check(int n,int count){
	if(count <=n){
		if(n%count==0){
			return false;
		}
		n=n-n/count;
		count++;
		return check(n,count);
	}else{
		return true;
	}
}
bool islucky(int n){
	return check(n,2);
}
int main(){
	int n,count;
	cout << "enter the number: ";
	cin >> n;
	if(islucky(n)){
		cout << "yes its a lucky number" << endl;
	}else{
		cout << "its not a lucky number" << endl;
	}
}
