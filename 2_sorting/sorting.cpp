#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){

        // the below loop will help us to find thre minimum
        int mini=i;// let the current index be the minimum number index
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        // lets swap the minimum and the i'th index(1st likewise) element
        swap(arr[i],arr[mini]);
    }
}

void bubble_sort(int arr[], int n){

    for(int i=0;i<n;i++){
        int index=0;
        for(int j=1;j<n-i;j++){
            if(arr[index]<arr[j]) index++;
            else{
                swap(arr[index],arr[j]);
                index++;
            } 
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
int main(){
    int arr[]={2,43,54,33,22,11};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before swaping :";
    print(arr,n);

    // sortinf func
    // selection_sort(arr,n);
    bubble_sort(arr,n);

    cout<<"After swaping :";
    print(arr,n);

    return 0;
}