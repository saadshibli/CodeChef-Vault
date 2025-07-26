// Problem: Hoop Jump
// Source: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/HOOPS
//
// There are N hoops in a row (N is odd). You and your friend take turns jumping into hoops:
//   - You start at hoop 1, your friend at hoop N, then you at 2, your friend at N-1, and so on.
// The process ends when someone cannot jump because the hoop is already occupied.
// Find the last hoop that will be jumped into.
//
// Input:
//   - T: number of test cases
//   - For each test case: a single odd integer N
//
// Output:
//   - For each test case, print the number of the last hoop to be jumped into.
//
// Constraints:
//   - 1 ≤ T ≤ 10^5
//   - 1 ≤ N < 2×10^5
//   - N is odd
//
// Example:
// Input:
//   2
//   1
//   3
// Output:
//   1
//   2

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        int n = (x+1)/2;
        cout<<n;
    }
    return 0;
}