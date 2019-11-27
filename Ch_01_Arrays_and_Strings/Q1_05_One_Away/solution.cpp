/*
1.5 One Away: There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are on edit (or zero edits) away.
EXAMPLE
pale,  ple  -> true
pales, pale -> true
pale,  bale -> true
pale,  bae -> false
*/

#include <iostream>
using namespace std;

/*
Solution #1: Check replace and insert separately
Time: O(N)
Space: O(N)
Note:
*/

// // If you need to write outside function, write below.

bool one_edit_replace(string s1, string s2)
{
    bool found_difference = false;
    for (size_t i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (found_difference)
                return false;
            found_difference = false;
        }
    }
    return true;
}

bool one_edit_insert(string s1, string s2)
{
    size_t index1 = 0;
    size_t index2 = 0;
    while (index2 < s2.size() && index1 < s1.size())
    {
        if (s1[index1] != s2[index2])
        {
            if (index1 != index2)
                return false;
            index2++;
        }
        else
        {
            index1++;
            index2++;
        }
    }
    return true;
}

// If you need to write outside function, write above.

bool one_away(string first, string second)
{
    // Write your answer below.
    if (first.size() == second.size())
    {
        return one_edit_replace(first, second);
    }
    else if (first.length() + 1 == second.length())
    {
        return one_edit_insert(first, second);
    }
    else if (first.length() == second.length() + 1)
    {
        return one_edit_insert(second, first);
    }
    return false;
    // Write your answer above.
}

/*
Solution #2: Check replace and insert together
Time: O(N)
Space: O(N)
Note:
*/

// If you need to write outside function, write below.
// If you need to write outside function, write above.

// bool one_away(string first, string second)
// {
//     // Write your answer below.
//     if (abs((int)(first.size() - second.size())) > 1)
//         return false;
//     string s1 = first.size() < second.length() ? first : second;
//     string s2 = first.size() < second.length() ? second : first;

//     size_t index1 = 0;
//     size_t index2 = 0;
//     bool found_difference = false;
//     while (index2 < s2.size() && index1 < s1.size())
//     {
//         if (s1[index1] != s2[index2])
//         {
//             if (found_difference)
//                 return false;
//             found_difference = true;
//             if (s1.size() == s2.size())
//                 index1++;
//         }
//         else
//         {
//             index1++;
//         }
//         index2++;
//     }

//     return true;
//     // Write your answer above.
// }

#include "tester.cpp"
