#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin() , v.end());
	    int m;
	    m=v[1]-v[0];
	    for(int i=2;i<n-1;i++){
	        m=(v[i+1]-v[i])<m?(v[i+1]-v[i]):m;
	    }
	    cout<<m<<endl;
	}
	return 0;
}
