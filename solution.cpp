#include<bits/stdc++.h>
using namespace std;

string stringChallenge(string str)
{
    int count = 0;
    string output = "";
    char comp = str[0];

    for (int i = 0; i < str.length() ; i++)
    {
        if(str[i]==comp)
        {
            count++;
        }
        else
        {
            if(count==1)
            output += comp;
            else
            output += to_string(count) + comp;
            comp = str[i];
            count = 1;
        }
    }
    if(count==1)
    output += comp;
    else
    output += to_string(count) + comp;
    return output;
}

int main()
{
    string str;
    cin >> str;
    string output = stringChallenge(str);
    cout << output << endl;
    return 0;
}