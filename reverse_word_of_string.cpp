#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
string reverseWords(string s){
    int n = s.length();
    string ans;
    string word;
    stack<string>words;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '.') {
            word += s[i];
        } else {
            words.push(word);
            word = "";
        }
    }

     words.push(word);
    while (!words.empty()) {
        ans += words.top();
        words.pop();
        if (!words.empty()) {
            ans += ".";
        }
    }

    return ans;
}
};


int main(){
    string s;
    cin>>s;
Solution ob;
cout<<ob.reverseWords(s)<<endl;
}