#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // Write your code here.
    int len = str.length();
    cout << len << endl;
    // boom
    if (len % 2 == 0)
    {
        len /= 2;
        cout << str[len] << " ";
        int j = 1;
        for (int i = len; i < str.length(); i++)
        {
            if (str[i] != str[i - j])
            {
                return false;
                break;
            }
            j++;
        }
    }
    /*  else if (len % 2 != 0)
    {
        cout << str[len] << " ";
        double x = len / 2;
        x = ceil(x);

        for (int i = x; i < str.length(); i++)
        {
            if (str[len])
        }
    } */
    return true;
}

int main()
{

    string a = "string";
    // string b = "strts";
    string c = "boom";

    cout << isPalindrome(a) << endl;
    // cout << isPalindrome(b) << endl;
    cout << isPalindrome(c) << endl;
    return 0;
}