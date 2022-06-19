#include <bits/stdc++.h> 
#define ll long long int
#define mpll map<ll,ll>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    mpll m;
    for(ll i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second>1){
            return i.first;
            break;
        }
    }
}
