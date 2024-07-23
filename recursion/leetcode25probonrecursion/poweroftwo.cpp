#include <iostream>
using namespace std;
bool ispowoftwo(int n){
	//here this is the corner cases if the input is less than 0 or
	//we can say it negative 
	if(n<=0){ return 0; }
        //here in the upcoming code here we are doing n&(n-1) becuase 
	//1]first we have to understand what it does so it removes the last
	//set digit 
	//2]so we are using it becuase we want to find it power of two or
	//not if notice power of two is are 2,4,8,16,32... and their 
	//binary representation is always start with only one set bit 
	//in them ex: 2(010) and 4(100) and 8 (1000) like this so if we 
	//remove the last set bit from the binary represetation it 
	//return 0 as all the bit from the binary represetation is 
	//remove by the help of the algorithm (brain karningam algo)
	//so the condition is if by removing the last digit if we get 0 
	//then it true that the number is power of two.	
	return (n&(n-1))==0;
}
int main(){
	int n;
	cout << "enter the number : ";
	cin >> n;
	if(ispowoftwo(n)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}
}
