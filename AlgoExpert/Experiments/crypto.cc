#include <bits/stdc++.h>
using namespace std;

string caesarCypherEncryptor(string str, int key)
{
    // Write your code here.
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        int temp = str[i] + key;
        if (temp > 122)
            temp = (temp % 122) + 96;
        else if (temp < 97)
            temp = 97 - temp + 96;
        result += (char)temp;
        // cout << temp << " " << str[i] << "\n";
    }
    return result;
}

int main()
{

    cout << caesarCypherEncryptor("abc", 57);
    return 0;
}