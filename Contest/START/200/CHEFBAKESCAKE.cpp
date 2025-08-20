// source : https://www.codechef.com/problems/CHEFBAKES77

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,x,y;
    cin>>n>>x>>y;
    int cakePV = floor(y/x);
    int vehicle = ceil(n+cakePV-1)/cakePV;
    cout<<vehicle<<endl;
    
    return 0;
}
