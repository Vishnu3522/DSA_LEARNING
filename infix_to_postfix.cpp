#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '/'||c=='*'){
        return 2;
    }
    else if(c == '+'|| c== '-'){
        return -1;
    }
    else{
        return -1;
    }
}
    
     void convert(string s){
         stack<char> st;
         string result;
         
         for(int i=0;i<s.length();i++){
             char c = s[i];
             if((c>='a'&&c<='Z')||(c>='A'&&c<='z')||(c>='0'&&c<='9')){
                 result+=c;
             }
             else if(c == '('){
                 st.push('(');
             }
             else if(c==')'){
                 while(st.top()!='('){
                     result = result+st.top();
                     st.pop();
                 }
                 st.pop();
             }
             else{
                 while(!st.empty()&& s[i]<=prec(st.top())){
                     result+=st.top();
                     st.pop();
                 }
                 st.push(c);
             }
         }
         while(!st.empty()){
             result+=st.top();
             st.pop();
         }
         cout<<result<<endl;
     }
    int main(){
        string test = "(p+q)*(m-n)";
        convert(test);
        return 0;
    }