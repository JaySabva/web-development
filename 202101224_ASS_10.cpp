#include<bits/stdc++.h>
using namespace std;

//SABVA JAY DILIPBHAI
//ID - 202101224
//FERMET'S LITTLE THEOREM FOR PRIME NUMBERS

int power(int a, unsigned int n, int p)
{
    int res = 1;      
    a = a % p;
 
    while (n > 0)
    {
      	if (n & 1)
            res = (res*a) % p;
 
        n = n>>1; 
        a = (a*a) % p;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter The Number You Want To Check For Prime: ";
	cin>>n;
	int base=3;
	if(n<=1 || n==4)
	{
        cout<<n<<" is not a prime number";
		return 0;
	}
	if(n<=3)
	{
        cout<<n<<" is a prime number";
		return 0;
	}
	while(base>0)
	{
		int ans=2+rand()%(n-4);
		if(__gcd(n,ans)!=1)
		{
            cout<<n<<" is not a prime number";
			return 0;
		}
		if(power(ans,n-1,n)!=1)
		{
            cout<<n<<" is not a prime number";
			return 0;
		}
		base--;
	}
    cout<<n<<" is a prime number";
	return 0;
}