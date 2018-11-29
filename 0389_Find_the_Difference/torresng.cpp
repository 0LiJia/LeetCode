/***************************************************************
*
*   Auth     ：Torres Ng
*   Create Time ：2018/11/29
*
***************************************************************/
/**************************************************************
 Given two strings s and t which consist of only lowercase letters.

String t is generated by random shuffling string s and then add one more letter at a random position.

Find the letter that was added in t.

Example:

    Input:
    s = "abcd"
    t = "abcde"

    Output:
    e

    Explanation:
    'e' is the letter that was added.
***************************************************************/
#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for(char c : s) {
            res ^= c;
        }
        for(char c : t) {
            res ^= c;
        }
        return res;
    }
};

int main(void) {
    Solution s = Solution();
    // Example 1
    string s1 = "abcd", s2 = "abcde";
    cout << "Input: s = \"abcd\" t = \"abcde\"" << endl;
    cout << "Output: " << s.findTheDifference(s1, s2) << endl;

    return 0;
}
