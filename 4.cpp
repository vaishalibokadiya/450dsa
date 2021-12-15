#include<bits/stdc++.h>
using namespace std;

int* negside(int arr[],int n)
{
    int negip,curip;
    negip=0;

    for(int i=0;i<n;i++)
    {
        curip=i;
        if(arr[i]<0)
        {
            int temp=arr[curip];
            arr[curip]=arr[negip];
            arr[negip]=temp;
            negip++;
        }
    }
    return arr;
}

int main()
{
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
    int* res=negside(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }

    return 0; 
}