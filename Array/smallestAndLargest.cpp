 #include<iostream>
#include<climits>

using namespace std;
int main(){
    int nums[5]={5,4,7,4,2};
    int size=5;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
   for(int i=0; i<size; i++){
 smallest = min(smallest, nums[i]);
 largest = max(largest, nums[i]);
    
   }
   cout<<"Smallest number is: "<<smallest<<endl;
   cout<<"Largest number is: "<<largest<<endl;
return 0;
}