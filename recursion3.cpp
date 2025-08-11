#include<iostream>
using namespace std;

//check palindrome
   /*bool check_pal(string str,int start,int end){
        if(start>=end)
            return 1;
        if(str[start]!=str[end])
            return 0;
        
        return check_pal(str,start+1,end-1);
    }
    int main(){
string str;
cin>>str;
cout<<check_pal(str,0,str.length()-1);*/
//count vowel
/*int count(string str,int index){
    if(index==-1)
    return 0;
    if(str[index]=='a'||str[index]=='e'||str[index]=='o'||str[index]=='u'||str[index]=='i')
    return 1+count(str,index-1);
    else
    return count(str,index-1);
    
}
    int main(){
string str;
cin>>str;
cout<<count(str,str.length()-1);*/

//reverse a string
/*void rev(string &str,int start,int end){
    if(start>=end)
    return;
    char c=str[start];
    str[start]=str[end];
    str[end]=c;
    return rev(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    rev(str,0,str.length()-1);
cout<<str<<endl;*/
//lower to upper case
void lowertoupper(string &str,int index){
if(index==-1)
return;
str[index]='A'+str[index]-'a';
 return lowertoupper(str,index-1);
}
    int main(){
        string str;
        cin>>str;
        lowertoupper(str,str.length()-1);
    cout<<str<<endl;
    return 0;
}