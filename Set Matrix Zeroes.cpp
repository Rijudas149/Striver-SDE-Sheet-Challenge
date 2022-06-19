#include <bits/stdc++.h> 
#define ll long long int
#define vll vector<ll>
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    ll rows=matrix.size(), cols=matrix[0].size();
    vll v1(rows,-1),v2(cols,-1);
    for(ll i=0;i<rows;i++){
        for(ll j=0;j<cols;j++){
            if(matrix[i][j]==0){
                v1[i]=0;
                v2[j]=0;
            }
        }
    }
    for(ll i=0;i<rows;i++){
        for(ll j=0;j<cols;j++){
            if(v1[i]==0 or v2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
    
}
