//        Mostafa Mounir Shehab
 
#include <bits/stdc++.h>
using namespace std;
 
#define PI  3.14159265  // PI = acos(-1)
#define EPS (1e-10)
#define endl "\n"
#define SZ(v) (int)(v.size())
typedef long long ll;
typedef long double ld;
//template <class Type>
 

inline int D(){
	int t;
	scanf("%d",&t);
	return t;
}
inline ll llD(){
	ll t;
	scanf("%lld",&t);
	return t;
}
 
 
ll MOD=1e9 + 7; 
const int N=1e5+ 5;
int arr[N];


ll n,m,k;
ll l,r;





int main(){
	
		
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		scanf("%d",arr+i);
	
	sort(arr,arr+n);
	
	scanf("%d",&m);
	while(m--){
		scanf("%d",&k);
		
		l=lower_bound(arr,arr+n,k) - arr;
		r=upper_bound(arr,arr+n,k) - arr;
		
		if(l != 0)
			printf("%d ",arr[l-1]);
		else
			printf("X ");
			
		if(r !=n )
			printf("%d\n",arr[r]);
		else
			printf("X\n");
		
	}
	

 
}
 
 
 
 
 
 
 
