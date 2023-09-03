#include<iostream>
using namespace std;
void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    //printing sorted Array
    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }
}
int main(){
    //sorting Algorithems
    //this is selection sort algorithem:
    //The inner loop selects the minimum element in the unsorted array
    // and places the elements in increasing order.

    //Time Complexity O(n)
    int const N=5;
    
    cout<<"Enter 5 number of elements in an array";
   
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    selectionSort(array,N);
    return 0;
}
