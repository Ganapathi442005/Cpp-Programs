#include<bits/stdc++.h>
using namespace std;
void output(string s)
{
 stack<string>stack;
 string ans="";
 int count =0;
 for(char c:s)
 {
    if(c!=' ')
    {
        ans=ans+c;
        count++;
    }
    else if(c==' '&& count!=0)
    {
        stack.push(ans);
        count=0;
        ans="";
    }
 }
 stack.push(ans);
 while(!stack.empty())
 {
     cout<<stack.top()<<" ";
     stack.pop();
 }
}
int main(){
    string s;
    getline(cin,s);
    output(s);
}
