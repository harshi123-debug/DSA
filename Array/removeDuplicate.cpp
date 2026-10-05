#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter n: ";
      cin>>n;
      int arr[n];
      cout<<"Enter elements: ";
      for(int i=0; i<n; i++){
            cin>>arr[i];
      }
      cout<<"Unique elements are: ";
      for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                     for(int k=j; k<n-1; k++){
                        arr[k]=arr[k+1];
                     }
                     n--;
                     j--;
                  }
            }
          
      }
      for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
      }
      return 0;
      }

      //second method

      
//       #include<iostream>
//       #include<algorithm>
// using namespace std;
// int main(){
//       int n;
//       cout<<"Enter n: ";
//       cin>>n;
//       int arr[n];
//       cout<<"Enter elements: ";
//       for(int i=0; i<n; i++){
//             cin>>arr[i];
//       }
//       sort(arr, arr+n);

//       int j=1;
//       for(int i=1; j<n; i++){
//             if(arr[i]!=arr[j-1]){
//                   arr[j]=arr[i];
//                   j++;
//             }
//       }
//       cout<<"Unique elements are: ";
//       for(int i=0; i<j; i++){
//             cout<<arr[i]<<" ";
//       }
//       return 0;
// }