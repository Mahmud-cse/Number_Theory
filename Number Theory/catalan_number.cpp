#include<bits/stdc++.h>
using namespace std;
#define uli unsigned long int
void catalan(int n,int k)
{
    uli cat=1;
    if(k > n-k)
        k=n-k;
    for(int i=0;i<k;i++)
    {
        cat = cat*(n-i);
        cat = cat/(i+1);
    }
    cout << cat/(k+1);
}
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    catalan(2*n,n);
	    cout << "\n";
	}
	return 0;
}
