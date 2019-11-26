/*
1.1 Problem Title:
Problem Description
*/

#include <iostream>
using namespace std;

/*
Solution #1: Start from the end and working backwards
Time: O(N)
Space: O(1)
Note:
*/

// If you need to write outside function, write below.
// If you need to write outside function, write above.

string urlify(string &str, int trueLength)
{
    // Write your answer below.
    int spaceCount = 0;
    for (int i = 0; i < trueLength; i++)
    {
        if (str[i] == ' ')
        {
            spaceCount++;
        }
    }
    int index = trueLength + spaceCount * 2 - 1;
    for (int i = trueLength - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[index--] = '0';
            str[index--] = '2';
            str[index--] = '%';
        }
        else
        {
            str[index--] = str[i];
        }
    }
    return str;
    // Write your answer above.
}

#include "tester.cpp"
