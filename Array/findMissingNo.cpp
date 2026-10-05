   #include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter n: ";
      cin>>n;
      int arr[n-1];
      cout<<"Enter elements: ";
      for(int i=0; i<n-1; i++){
            cin>>arr[i];
      }
      int expectSum=n*(n+1)/2;
      int actualSum=0;
      for(int i=0; i<n-1; i++){
            actualSum+=arr[i];
      }
      cout<<"Missing number is: "<<expectSum-actualSum<<endl;
      return 0;
}
