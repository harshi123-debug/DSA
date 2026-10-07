#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
string s;
cout<<"Enter s: ";
cin>>s;

int left=0;
int maxLength=0;

unordered_set<char>st;

for(int right=0; right<s.length(); right++){
    while(st.count(s[right])){
        st.erase(s[left]);
        left++;
    }
    st.insert(s[right]);
    int length=right-left+1;
    maxLength=max(maxLength,length);

}
cout<<maxLength;
}