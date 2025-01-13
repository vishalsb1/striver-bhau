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

void insertion_sort(int arr[],int n){

    for(int i=0;i<n;i++){
        int j=i;
        // j cha index hyo 0 peskha motha hava karan arr[j-1] kela tr satisfy hoel
        //          j chya adhi cha and swata(j)
        while(j>0 && (arr[j-1]>arr[j])){
            swap(arr[j],arr[j-1]);
            // ani magha allo karan pahilecha kai konta kami ale pahayla 
            j--;
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

    // sorting func
    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    insertion_sort(arr,n);

    cout<<"After swaping :";
    print(arr,n);

    return 0;
}