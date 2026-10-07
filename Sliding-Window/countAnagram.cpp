 #include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    string s, p;
    cout<<"Enter s: ";
    cin>>s;

    cout<<"Enter p: ";
    cin>>p;

    int k=p.length();

    unordered_map<char,int>patternFreq;
    unordered_map<char,int>windowFreq;

    for(char ch: p){
        patternFreq[ch]++;

    }

    int left=0;
    int count=0;

    for(int right=0; right<s.length(); right++){
        windowFreq[s[right]]++;

        if(right-left+1>k){
            windowFreq[s[left]]--;

            if(windowFreq[s[left]]==0){
                windowFreq.erase(s[left]);
            }
            left++;
        }

        if(right - left+1 == k && windowFreq== patternFreq){
            count++;
        }
    }
    cout<<count;
return 0;
}