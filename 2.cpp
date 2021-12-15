#include<bits/stdc++.h>
using namespace std;

void minmax(int arr[],int n)
{
    int min,max;
    min=arr[0];
    max=arr[1];
    for(int i=0;i<n;i++)
	{
	    if(min>arr[i])
	    {
	        min=arr[i];
	    }
	    if(max<arr[i])
	    {
	        max=arr[i];
	    }
	}
    cout<<"min="<<min<<endl<<"max="<<max<<endl;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	minmax(arr,n);
	return 0;
}