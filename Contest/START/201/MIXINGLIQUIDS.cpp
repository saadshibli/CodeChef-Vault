// Source : https://www.codechef.com/START201D/problems/MIXINGLIQ

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;
        int m = min(a,b/2);
        cout<<3*m<<endl;
    }
    return 0;
}
