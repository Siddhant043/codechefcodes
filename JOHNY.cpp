#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	std::ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test;
	cin>>test;
	while(test--){
	    int size, pos, item, flag=0;
	    cin>>size;
	    ll songs[1000001];
	    for(int i=0; i<size; i++)
	        cin>>songs[i];
	    cin>>pos;
	    item = songs[pos-1];
	    for(int i=0; i<size; i++){
	        if(songs[i]>item)
	            flag++;
	      }
	       cout<<size-flag<<endl;
	}
	return 0;
}
