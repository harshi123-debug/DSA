 #include<iostream>
using namespace std;
void Intersection(int arr1[], int n, int arr2[], int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            break;            }
        }
    }
}
int main(){
    int arr1[]={4,3,7,9,5};
    int arr2[]={5,6,3,8,2};
    int n=5;
    int m=5;
    cout<<"Intersection of two arrays is: "<<endl; 
       Intersection(arr1,n,arr2,m);
    return 0;   
}