#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str="";
        cin >> str;
        char min = 'z';
        for (int i = 0; i<str.length(); i++)
        {
            if (str[i] < min)
                min = str[i];
        }
        string b = "";
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == min && !flag)
            {
                flag = true;
            }
            else
                b += str[i];
        }
        cout << min << " " << b << endl;
    }
    return 0;
}