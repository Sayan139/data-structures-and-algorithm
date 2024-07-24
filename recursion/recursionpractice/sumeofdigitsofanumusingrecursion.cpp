#include <iostream>
using namespace std;
int sumofdigitsusingrecursion(int n){
	if(n<10) return n;
	else return n%10 + sumofdigitsusingrecursion(n/10);
}
int main(){
	int n;
	cout << "enter the number: ";
	cin >> n;
	cout <<"the sum of the digits using recursion is : " << sumofdigitsusingrecursion(n);
}
