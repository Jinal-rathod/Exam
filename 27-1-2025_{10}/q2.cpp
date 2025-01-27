// Longest Substring Without Repeating Characters

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> charMap;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); ++right)
    {

        if (charMap.find(s[right]) != charMap.end() && charMap[s[right]] >= left)
        {
            left = charMap[s[right]] + 1;
        }

        charMap[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    string s = "pwwkew";
    cout << "Length of Longest Substring Without Repeating Characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
