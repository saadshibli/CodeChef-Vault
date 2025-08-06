// source : https://www.codechef.com/problems/INCAT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string str;
    cin>>str;
    vector<int> count(26, 0);
    for(int i=0; i<26; i++) {
        count[str[i]-'a']++;
    }
    if(count[0]&&count[2]&&count[19] == 1) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}
