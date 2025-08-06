// source : https://www.codechef.com/problems/DECDISC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        int v;
        cin>>v;
        vector<int> arr(v);
        for(int i=0; i<v; i++) {
            cin>>arr[i];
        }
        long long msum=INT_MAX;
        for(int i=0; i<v; i++) {
            for(int j=0; j<v; j++) {
                if(i==j) continue;
                long long csum=0;
                if(j==i+1) {
                    csum = arr[i] + (arr[j]/2);
                } else {
                    csum = arr[i] + arr[j];
                }
                msum = min(msum, csum);
            }
        }
        cout<<msum<<endl;
    }
}
