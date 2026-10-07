
#include<iostream>
using namespace std;
int main(){

    string str;
    cout<<"Enter string: ";
    cin>>str;

    int left=0;
    int right=str.length()-1;
    while(left<right){
  if(str[left] != str[right]){
    cout<<"Not palindrome";
    return 0;
  }
  else{
    left++;
    right--;
  }

    }
    cout<<"Palindrome";
    return 0;
}