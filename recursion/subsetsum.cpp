#include <iostream>
using namespace std;
int countsubsetsforsum(int arr[],int n,int sum)
{
	if(n==0){
		return (sum==0)?1:0;
	}
	return countsubsetsforsum(arr,n-1,sum)+countsubsetsforsum(arr,n-1,sum-arr[n-1]);
}
int  main()
{
	int sum;
	int arr[] = {5,2,6,7,3,12,7,3,8,3,2,6,78};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "enter the sum required  : ";
	cin >> sum;
	cout << "the number of subesets thet are added to be the sum is : " << countsubsetsforsum(arr,n,sum);
	return 0;
}