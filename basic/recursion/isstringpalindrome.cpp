#include <iostream>
using namespace std;
bool stringpalindromecheck(string s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}
bool palindrome(int i,string s){
    if(i>=s.length()/2) return true;
    if(s[i]!=s[s.length()-i-1]) return false;
    return palindrome(i+1,s);
}
int main()
{
    string str = "ABCDCBA";
    bool ans = stringpalindromecheck(str);

    if (ans == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}