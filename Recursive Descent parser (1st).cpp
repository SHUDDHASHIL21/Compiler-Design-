#include <bits/stdc++.h>
using namespace std;
bool match(char l, char var)
{
    if (l == var)
        return true;
    else
        return false;
}
bool E(string s, char l)
{

    if (match(l, 'i'))
    {

        return true;
    }
    else
    {
        return false;
    }
}
bool E_dash(string s, int &i)
{

    if (match(s[i], '+'))
    {
        i++;
        if (match(s[i], 'i'))
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        return false;
    }

    return true;
}

int main()
{

    string s;
    //cout<<"Enter your string"<<endl;
    cin >> s;
    int i = 0;
    int count = 0;
    for (i = 0; i < s.length();)
    {
        if (E(s, s[i]))
        {
            i++;
            if (i == s.length())
            {
                break;
            }

            else if (E_dash(s, i))
            {
                cout << " ";
            }

            else
            {
                count = 1;
            }
        }

        else
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        cout<<"\nString is accepted";
    }
    else if (count == 1)
    {
        cout<<"\nString not accepted";
    }
}


