#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={3,5,7,8,4,2};
    int size=6;

    int smallest= INT_MAX;
    int largest= INT_MIN;
     int smallestInd= -1;
     int largestInd= -1;

     for(int i=0; i<size; i++){
 if(nums[i]<smallest){
     smallest= nums[i];
     smallestInd= i;
 }if( nums[i]>largest){
    largest= nums[i];
    largestInd= i;

 }
     }
     cout<<"Smaleest index is: "<<smallestInd<<endl;
     cout<<"Largest index is: "<<largestInd<<endl;

     return 0;
}