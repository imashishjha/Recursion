#include <bits/stdc++.h>

//"", 0, 4, 05, 55, 505, 123, 1234

using namespace std;

void printEncodings(string str, string asf)
{

    if (str.length() == 0)
    {
        cout << asf;
        return;
    }
    else if (str.length() == 1)
    {
        char ch = str.at(0);   // '5'
        if (ch == '0')
        {
            return;
        }
        else
        {
            int chv = ch - '0';    //'5' -'0'
            char code = char('a' + chv - 1);
            cout << asf + code<<endl;
        }
    }
    else
    {
        char ch1 = str.at(0);
        string ros1 = str.substr(1);

        if (ch1 == '0')
        {
            return;
        }
        else
        {
            int chv = ch1 - '0';
            char code1 = char('a' + chv - 1);
            asf = asf + code1;
            printEncodings(ros1, asf);
        }
      
       string ch12 = str.substr(0,2);
       string ros12 =  str.substr(2);

       int ch12_int = stoi(ch12);

       if(ch12_int <=26){
            char code12 = char('a' + ch12_int - 1);
            asf = asf + code12;
            printEncodings(ros12, asf);
       }
    }
}

int main()
{

    int n;

    cin >> n;

    string str = to_string(n);

    printEncodings(str, "");
}