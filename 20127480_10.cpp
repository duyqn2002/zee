#include<iostream>
using namespace std;
void count(int &m, int &n,int arr[][100])
{
	int i,j,max=-9999,max2=-9999,max3=-9999,a,b,h,k,count;
	cout<<"Enter rows: ";
	cin>>m;
	cout<<"Enter columns: ";
	cin>>n;
	cout<<"Enter elements of the array: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Expressing the matrix: "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]>=max)
			{
				max=arr[i][j];
				b=j;
				k=j;
			}
		}
		for(h=i;h<m;h++)
		{
			if(arr[h][b]>=max2)
			{
				max2=arr[h][b];
			}
		}
		if(max==max2)
		{
			a=i;
			while(a<=m-1 && b<=n-1)
			{
				if(arr[a][b]>=max3)
				max3=arr[a][b];
				a++;
				b++;
			}
			if(max==max3)
			count++;
			
		}
	}
	cout<<"Number of queens: ";
	cout<<count;
}

int main()
{
	int m,n,arr[100][100];
	count(n,m,arr);
	return 0;
}


