#include <iostream>
using namespace std;
bool powerofthree(int n){
	if(n<1)return false;
	//here the logic is first we have to check if the given number is
	//divisible by 3 and if the given number is divisable by 3 then 
	//we would reduce the number by the help of n=n/3 and if again it 
	//will continue its while loop until n becomes 1 .
	while(n%3==0){
		n=n/3;
	}
	// here this is binary result giver becuae this is a condition if
	// the number gets divided by 3 and reach one it result as true 
	// but if in any of the iteration the number dont properly get 
	// divided by three then it will not be able to reach one then we 
		// would say its not the power 3.
	return n==1;
}
int main(){
	int n;
	cout << "enter the number : ";
	cin >> n;
	if(powerofthree(n)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}
}
