#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"n=";
	cin>>n;
	cout<<"name|program design"<<endl;
	char a[20][10],d[20];
	float b[20],c;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		cout<<endl;
	}
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<(n-1-i);k++)
		{
			if(b[k]>b[k+1])
			{
				c=b[k];
				b[k]=b[k+1];
				b[k+1]=c;

				strcpy(d,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],d);
			}
		}
	}
}