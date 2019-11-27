/*
1.6 String Compression:
Implement a method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your method should return the original string. You can assume the string has only uppercase and lowercase letters (a-z).
*/

#include <iostream>
using namespace std;

/*
Solution #1:
Time: O(N)
Space: O(N)
Note: In C++ you neither need nor have "StringBuilder" because C++ strings are mutable like arrays. It means insert N elements takes O(N) instead of O(P + K^2) like p.201 said. If you'd like to know array resizing, please check p.89 ArrayList & Resizable Arrays.
*/

// // If you need to write outside function, write below.
// // If you need to write outside function, write above.

// string string_compression(string str)
// {
//     // Write your answer below.
//     int count_consecutive{};
//     string compressed_string{};
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         count_consecutive++;
//         if (i + 1 >= str.size() || str[i] != str[i + 1])
//         {
//             compressed_string += str[i] + to_string(count_consecutive);
//             count_consecutive = 0;
//         }
//     }
//     return compressed_string.size() < str.size() ? compressed_string : str;
//     // Write your answer above.
// }

/*
Solution #2 (The book's 3rd solution):
Time: O(N)
Space: O(N)
Note: This solution check the compressed length at first. But, if it is certainly shorter, you have to run similar code again.
*/

// // If you need to write outside function, write below.
// int count_compression(string str)
// {
//     int compressed_length = 0;
//     int count_consecutive = 0;
//     string compressed_string{};
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         count_consecutive++;
//         if (i + 1 >= str.size() || str[i] != str[i + 1])
//         {
//             compressed_length += 1 + to_string(count_consecutive).size();
//             count_consecutive = 0;
//         }
//     }
//     return compressed_length;
// }

// // If you need to write outside function, write above.

// string string_compression(string str)
// {
//     // Write your answer below.
//     size_t final_length = count_compression(str);
//     if (final_length >= str.size())
//         return str;
//     string compressed_string;
//     compressed_string.reserve(final_length);
//     int count_consecutive{};
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         count_consecutive++;
//         if (i + 1 >= str.size() || str[i] != str[i + 1])
//         {
//             compressed_string += str[i] + to_string(count_consecutive);
//             count_consecutive = 0;
//         }
//     }
//     return compressed_string.size() < str.size() ? compressed_string : str;
//     // Write your answer above.
// }

#include "tester.cpp"
