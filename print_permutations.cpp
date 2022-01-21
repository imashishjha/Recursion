#include <bits/stdc++.h>
using namespace std;

vector<string> getPermutations(string str, int size)
{

    if (str.size() == 1)
    {
        vector<string> ans;
        ans.push_back(str);
        return ans;
    }

    vector<string> allpermutations;

    for (int i = 0; i < size; i++)
    {
        string str2 = str;
        str2.erase(str2.begin() + i);
        vector<string> ans2 = getPermutations(str2, size - 1); //we will push str apart from char at i
        for (string ele : ans2)
        {
            allpermutations.push_back(str[i] + ele);
        }
    }
    return allpermutations;
}

int main()
{

    string str;
    cin >> str;
    int length = str.size();
    int count =0;
    vector<string> finalPermutations = getPermutations(str, length);
    for (string ele : finalPermutations)
    {
        cout << ele << endl;
        count++;
    }
    cout<<count;
    return 0;
}