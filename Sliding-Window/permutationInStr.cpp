#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    string s1,s2;
    cout<<"Enter s1: ";
    cin>>s1;

    cout<<"Enter s2: ";
    cin>>s2;

    int k=s1.length();

    unordered_map<char,int>patternFreq;
    unordered_map<char,int>windowFreq;

    for(char ch: s1){
        patternFreq[ch]++;
    }
    int left=0;

    for(int right=0; right<s2.length(); right++){
        windowFreq[s2[right]]++;

        if(right-left+1>k){
            windowFreq[s2[left]]--;

            if(windowFreq[s2[left]]==0){
                windowFreq.erase(s2[left]);
            }
            left++;
        }
        if(right-left+1 ==k && windowFreq==patternFreq){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}