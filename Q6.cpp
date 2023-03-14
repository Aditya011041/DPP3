#include <iostream>
#include <string>

using namespace std;

int longestPalindromeSubseq(string s, int i, int j)
{
    if (i == j)
    {

        return 1;
    }
    else if (s[i] == s[j])
    {

        return longestPalindromeSubseq(s, i + 1, j - 1) + 2;
    }
    else
    {

        int left = longestPalindromeSubseq(s, i, j - 1);
        int right = longestPalindromeSubseq(s, i + 1, j);
        return max(left, right);
    }
}

int main()
{

    string s;
    cout << "Enter a string: ";
    cin >> s;
    getline(cin, s);


    int length = longestPalindromeSubseq(s, 0, s.length() - 1);

    cout << "Length of the longest palindromic subsequence is: " << length << endl;

    return 0;
}
