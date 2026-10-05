#include<iostream>
using namespace std;
 
int SumAndProduct(int arr[], int size, int &sum, int &product){
   
     sum=0;
     product=1;
    for(int i=0; i<size; i++){
        sum=sum+ arr[i];
        product= product * arr[i];
        
    }
    
}

int main(){
    int arr[]= {3,6,8,4,6};
    int size=5;
    int sum;
    int product;
    SumAndProduct(arr,size,sum,product);

  cout<<"The sum of numbers is: "<<sum<<endl;
  cout<<"The product of numbers is: "<<product<<endl; 
    
    return 0;
}
