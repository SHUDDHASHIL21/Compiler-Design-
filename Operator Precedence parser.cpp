#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<char> op;
    cout << "Enter the number of operators:";
    cin >> n;

    cout << "Enter all the operators in ascending order of precedence : "<<endl;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        op.push_back(ch);
    }

    //cout << "Precedence table for operator grammar:";

    map<char, map<char, char > > t;
    int x = 0;
    for (int i = 0; i < op.size(); i++)
    {
        for (int j = 0; j < op.size(); j++)

        {
            cout << "Enter the level of precedence between - " << op[i] << " or " << op[j]<<" : ";
            //$ has the lowest precedence and i(id) has the highest
            cin >> t[op[i]][op[j]];
        }
    }
    stack<char> s;
    s.push('$');
    string str;
    str = str + '$';
    char tos = s.top();
    cout << "\nInput string:"<<endl;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (t[str[i]][tos] == '>')
        {
            s.push(str[i]);
        }
        else if (t[str[i]][tos] == '<')
        {

            s.pop();
            s.push(str[i]);
        }
    }
    if (tos == '$')
    {
        cout << "String is accepted";
    }
    else
    {
        cout << "String not accepted";
    }
}


