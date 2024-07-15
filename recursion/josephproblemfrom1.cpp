#include <iostream>
using namespace std;
int jos(int n,int k){
	if(n==1)
		return 0;
	else
		return (jos(n-1,k)+k)%n;
}
int gojos(int n,int k){
	return jos(n,k)+1;
}
int  main()
{
	int n,k;
	cout << "enter the number of people: ";
	cin >> n;
	cout << "enter the step after to kill the person: ";
	cin >> k;
	cout << "the surviving person is : " << gojos(n,k);
	return 0;
}