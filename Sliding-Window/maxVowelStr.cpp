#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'; 
}
int main(){
string s;
cout<<"Enter String: ";
cin>>s;

int k;
cout<<"Enter k: ";
cin>>k;

int count=0;

for(int i=0; i<k; i++){
    if(isVowel(s[i])){
        count++;
    }
}
int maxCount=count;

for(int right=k; right<s.length(); right++){
if(isVowel(s[right])){
    count++;
}
if(isVowel(s[right-k])){
    count--;
}
maxCount= max(maxCount, count);
}
cout<<"max count is: "<<maxCount;
return 0;
}