#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String: ";
cin>>str;

int left=0;
int right=str.length()-1;

while(left<right){
    swap(str[left],str[right]);
    left++;
    right--;

}
cout<<"After reversing: "<<str;
return 0;
}