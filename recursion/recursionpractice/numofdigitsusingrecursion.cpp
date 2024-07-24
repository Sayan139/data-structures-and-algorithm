#include <iostream>
using namespace std;
int countdigits(int n){
	if(n<10){
		return 1;
	}else{
		return 1+ countdigits(n/10);
	}
}
int main(){
	int n;
	cout << "enter the number : ";
	cin >> n;
	cout << "the number of digits are : " << countdigits(n);
}
