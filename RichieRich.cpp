// Problem: Richie Rich
// Source: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH
// Chef wants to become the richest in Chefland. His current assets are worth A billion dollars.
// Each year, his assets increase by X billion dollars. To be the richest, he needs at least B billion dollars.
// Calculate how many years it will take for Chef to reach or exceed B.
//
// Input:
//   - T: number of test cases
//   - For each test case: three integers A, B, X
//
// Output:
//   - For each test case, print the number of years required.
//
// Constraints:
//   - 1 ≤ T ≤ 21,000
//   - 100 ≤ A < B ≤ 200
//   - 1 ≤ X ≤ 50
//   - (B - A) is divisible by X
//
// Example:
// Input:
//   3
//   100 200 10
//   111 199 11
//   190 200 10
// Output:
//   10
//   8
//   1

#include<iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	while(N--) {
	    int A,B,X;
	    cin>>A>>B>>X;
	    cout<<(B-A)/X<<endl;
	}
    
    return 0;
}