#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n],c = 0;
	    for(int i = 0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i = 0;i<n;i++)
	    {
	        if((a[i]+k)%7 == 0)
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
