#include<iostream>
using namespace std;

string encrypt(string text, int s)
{
    string result = "";

    // traverse text
    for (int i=0;i<text.length();i++)
    {
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);

    // Encrypt Lowercase letters
    else
        result += char(int(text[i]+s-97)%26 +97);
    }

    // Return the resulting string
    return result;
}

string decrypt(string text, int s)
{
    string result = "";

    // traverse text
    for (int i=0;i<text.length();i++)
    {

        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i]-s+65)%26 +65);

    // Encrypt Lowercase letters
    else
        result += char(int(text[i]-s+97)%26 +97);
    }

    // Return the resulting string
    return result;
}

int main(){
    string s;
    cin>>s;
    int key;
    cin>>key;
    cout<<encrypt(s,key)<<endl;
    cout<<decrypt(encrypt(s,key),key)<<endl;
   // cout<<'Z'+1<<endl;
    return 0;
}
