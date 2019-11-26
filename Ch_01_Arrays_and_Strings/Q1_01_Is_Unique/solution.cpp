/*
1.1 Is Unique:
Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
*/

#include <iostream>
#include <bitset>

using namespace std;

/*
Solution #1: Hashmap
Time: O(n)
Space: O(n)
Note:
*/

// If you need to write outside function, write below.
// If you need to write outside function, write above.

bool is_unique(string const &str)
{
    // Write your answer below.
    if (str.length() > 128)
    {
        return false;
    }
    bool char_set[128] = {};
    for (char c : str)
    {
        if (char_set[int(c)])
        {
            return false;
        }
        else
        {
            char_set[int(c)] = true;
        }
    }

    return true;
    // Write your answer above.
}

/*
Solution #2: Bitvector
Time: O(n)
Space: O(n)
Note: The space complexity is 8 times as small as Solution 1.
*/

// // If you need to write outside function, write below.
// // If you need to write outside function, write above.

// bool is_unique(string const &str)
// {
//     // Write your answer below.
//     bitset<128> bits(0);
//     for (size_t i = 0; i < str.length(); i++)
//     {
//         int val = str[i];
//         if (bits.test(val) > 0)
//         {
//             return false;
//         }
//         bits.set(val);
//     }
//     return true;
//     // Write your answer above.
// }

/*
Solution #3: Sort and check
Time: O(n log(n))
Space: O(1)
Note: Make sure you can modify the string.
*/

// // If you need to write outside function, write below.
// // If you need to write outside function, write above.

// bool is_unique(string &str)
// {
//     sort(str.begin(), str.end());
//     for (size_t i = 1; i < str.length(); i++)
//     {
//         if (str[i - 1] == str[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

/*
Solution #4: Bruteforce
Time: O(n^2)
Space: O(1)
Note: If you are not allowed to use additional data structures and to modify the string, this is the best approach.
*/

// // If you need to write outside function, write below.
// // If you need to write outside function, write above.

// bool is_unique(string const &str)
// {
//     for (size_t i = 0; i < str.length() - 1; i++)
//     {
//         for (size_t j = i + 1; j < str.length(); j++)
//             if (str[i] == str[j])
//             {
//                 return false;
//             }
//     }
//     return true;
// }

#include "tester.cpp"
