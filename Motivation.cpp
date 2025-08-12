// Problem : Motivation
// Source : https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB?tab=statement
//
// Chef wants to find the best movie (highest IMDB rating) that fits in his X GB hard disk.
// Given N movies with space requirements Si and ratings Ri, find the movie with maximum
// rating among those that can fit in the available space.
//
// Approach: Iterate through all movies, keep track of the highest rating among movies
// that require space <= X GB.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, S, R, maxRating, prevRating = 0;
        cin >> N >> X;
        while (N--)
        {
            cin >> S >> R;
            if (S <= X && R >= prevRating)
            {
                prevRating = R;
                maxRating = R;
            }
        }
        cout << maxRating << endl;
    }
}