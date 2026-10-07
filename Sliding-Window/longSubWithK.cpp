#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"Enter S: ";
cin>>s;

int k;
cout<<"Enter k: ";
cin>>k;

int left=0;
int maxLength=0;

unordered_map<char,int>freq;

for(int right=0; right<s.length(); right++){
    freq[s[right]]++;

    while(freq.size()>k){

        freq[s[left]]--;
        
        if(freq[s[left]]==0){
            freq.erase(s[left]);
        }
        left++;
    }
    int length=right-left+1;
    maxLength=max(maxLength,length);
}
cout<<maxLength;
return 0;
}