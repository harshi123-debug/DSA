#include<bits/stdc++.h>
using namespace std;

   void reverseString(vector<char>& s){
			//your code goes here
            int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
		}

int main(){
    string si;
   
    
     cout<<"Enter String: ";
     cin>>si;
vector<char> s(si.begin(), si.end());

  
    reverseString(s);
  cout<<"Reverse of string is: ";
    for (char ch : s) {
        cout << ch;
    }
    return 0;

}
