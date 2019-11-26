/*
1.4 Palindrome Permutation:
Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
*/

#include <iostream>
using namespace std;

/*
Solution #1: Use a hashtable.
Time: O(N)
Space: O(N)
Note:
*/

// If you need to write outside function, write below.
#include <vector>
bool check_max_one_odd(vector<int> table)
{
    bool found_odd = false;
    for (int count : table)
    {
        if (count % 2 == 1)
        {
            if (found_odd)
            {
                return false;
            }
            found_odd = true;
        }
    }
    return true;
}

int get_char_number(char c)
{
    int a = (int)'a';
    int z = (int)'z';
    int val = (int)tolower(c);
    if (a <= val && val <= z)
    {
        return val - a;
    }
    return -1;
}

vector<int> build_char_frequency_table(string const &phrase)
{
    vector<int> table((int)'z' - (int)'a' + 1);
    for (char c : phrase)
    {
        int x = get_char_number(c);
        if (x != -1)
        {
            table[x]++;
        }
    }
    return table;
}
// If you need to write outside function, write above.

bool palindrome_permutation(string const &phrase)
{
    // Write your answer below.
    vector<int> table = build_char_frequency_table(phrase);
    return check_max_one_odd(table);
    // Write your answer above.
}

/*
Solution #2: Use a hashtable and check odd in for loop
Time: O(N)
Space: O(N)
Note:
*/

// // If you need to write outside function, write below.
// #include <vector>
// int get_char_number(char c)
// {
//     int a = (int)'a';
//     int z = (int)'z';
//     int val = (int)tolower(c);
//     if (a <= val && val <= z)
//     {
//         return val - a;
//     }
//     return -1;
// }
// // If you need to write outside function, write above.

// bool palindrome_permutation(string const &phrase)
// {
//     // Write your answer below.
//     int count_odd = 0;
//     vector<int> table((int)'z' - (int)'a' + 1);
//     for (char c : phrase)
//     {
//         int x = get_char_number(c);
//         if (x != -1)
//         {
//             table[x]++;
//             if (table[x] % 2 == 1)
//             {
//                 count_odd++;
//             }
//             else
//             {
//                 count_odd--;
//             }
//         }
//     }
//     return count_odd <= 1;
//     // Write your answer above.
// }

/*
Solution #3: Use a hashtable and check odd in for loop
Time: O(N)
Space: O(N) (This does't use vector<int> but int, so the space complexity is smaller than solution #1)
Note:
*/

// // If you need to write outside function, write below.
// int get_char_number(char c)
// {
//     int a = (int)'a';
//     int z = (int)'z';
//     int val = (int)tolower(c);
//     if (a <= val && val <= z)
//     {
//         return val - a;
//     }
//     return -1;
// }

// int toggle(int bit_vector, int index)
// {
//     if (index < 0)
//         return bit_vector;
//     int mask = 1 << index;
//     if ((bit_vector & mask) == 0)
//     {
//         bit_vector |= mask;
//     }
//     else
//     {
//         bit_vector &= ~mask;
//     }
//     return bit_vector;
// }

// int create_bit_vector(string const &phrase)
// {
//     int bit_vector = 0;
//     for (char c : phrase)
//     {
//         int x = get_char_number(c);
//         bit_vector = toggle(bit_vector, x);
//     }
//     return bit_vector;
// }

// bool check_exactly_one_bit_set(int bit_vector)
// {
//     return (bit_vector & (bit_vector - 1)) == 0;
// }

// // If you need to write outside function, write above.

// bool palindrome_permutation(string const &phrase)
// {
//     // Write your answer below.
//     int bit_vector = create_bit_vector(phrase);
//     return bit_vector == 0 || check_exactly_one_bit_set(bit_vector);
//     // Write your answer above.
// }

#include "tester.cpp"
