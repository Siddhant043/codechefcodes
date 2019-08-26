#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    std::ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test;
	cin>>test;
	while(test--){
	    int G;
	    cin>>G;
	    while(G--){
	        int I, Q;
	        ll N;
	        cin>>I>>N>>Q;
	        if(N%2==1){
	            if(I==Q)
	              cout<<N/2<<endl;
	            else
	              cout<<(N+1)/2<<endl;
	        }
	        else
	          cout<<N/2<<endl;
	    }
	}
	return 0;
}
