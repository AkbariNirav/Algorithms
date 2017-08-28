#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int n,int high,int low)
{
	int mid = (low+high)/2;
	while(low<=high)
	{
		if(n==arr[mid])
		{
			return mid;
		}
		else if(n>arr[mid])
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(n<arr[mid])
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	return -1;
}

int main() {
	int size = 10000;
	int arr[size];
	for(int i=0;i<size;i++)
		arr[i]=(i*37+2)%3435;
	sort(arr,arr+size);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int low=0;
		int high=size-1;
		cout << binarySearch(arr,n,high,low)<<endl;
	}
	return 0;
}
