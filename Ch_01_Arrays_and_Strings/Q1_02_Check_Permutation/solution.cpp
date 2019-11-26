/*
1.2 Check Permutation:
Given two strings, write a method to decide if one is a permutation of the other.
*/

#include <iostream>
using namespace std;

/*
Solution #1: Sort the strings
Time: O(n log n)
Space: O(1)
Note:
*/

// If you need to write outside function, write below.
// If you need to write outside function, write above.

bool check_permutation(string &s, string &t)
{
    // Write your answer below.
    if (s.size() != t.size())
    {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s != t)
    {
        return false;
    }
    return true;
    // Write your answer above.
}

/*
Solution #2: Check if the two strings have identical character counts.
Time: O(n)
Space: O(1)
Note:
*/

// // If you need to write outside function, write below.
// // If you need to write outside function, write above.

// bool check_permutation(string const &s, string const &t)
// {
//     // Write your answer below.
//     int letters[128] = {};
//     for (char c : s)
//     {
//         letters[int(c)]++;
//     }
//     for (char c : t)
//     {
//         letters[int(c)]--;
//         if (letters[int(c)] < 0)
//         {
//             return false;
//         }
//     }
//     return true;
//     // Write your answer above.
// }

#include "tester.cpp"
