// Problem: Vaccine Dates
// Source: https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/VDATES
//
// Chef took his first vaccine dose D days ago. The second dose must be taken no earlier than L days and no later than R days after the first dose.
// For each test case, determine if Chef is:
//   - "Too Early" (D < L)
//   - "Too Late" (D > R)
//   - "Take second dose now" (L ≤ D ≤ R)
//
// Input:
//   - T: number of test cases
//   - For each test case: three integers D, L, R
//
// Output:
//   - For each test case, print the appropriate message as described above.
//
// Constraints:
//   - 1 ≤ T ≤ 100,000
//   - 1 ≤ D ≤ 10^9
//   - 1 ≤ L ≤ R ≤ 10^9
//
// Example:
// Input:
//   4
//   10 8 12
//   14 2 10
//   4444 5555 6666
//   8 8 12
// Output:
//   Take second dose now
//   Too Late
//   Too Early
//   Take second dose now

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int D, L, R;
        cin>>D>>L>>R;
        if(D>=L && D<=R) {
            cout<<"Take second dose now"<<endl;
        } else if(D>R) {
            cout<<"Too Late"<<endl;
        } else {
            cout<<"Too Early"<<endl;
        }
    }
}
