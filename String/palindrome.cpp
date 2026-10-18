#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(vector<char> &s){ 
int left=0;
int right=s.size()-1;
while(left<right){
    if(s[left]!=s[right]){
        cout<<"String is not palindrome";
        return;
    }else{
        left++;
        right--;
    }
    
}
cout<<"String is palindrome";
}
int main(){
   string st;
   cout<<"Enter String: ";
   cin>>st;
   
   vector<char>s(st.begin(),st.end());
   
   checkPalindrome(s);
 

  
   return 0;
}
    

