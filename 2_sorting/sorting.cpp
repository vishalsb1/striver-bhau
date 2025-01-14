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

// ---------------------------------------------------------------------------------------------------------------
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

// ---------------------------------------------------------------------------------------------------------------
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
// ---------------------------------------------------------------------------------------------------------------
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
// ------------------------------------------merge sort---------------------------------------------------------
// merege sorting algo  (TC)->O(n*logn) : (SC)-> O(1)

void merge_arr(int arr[],int low,int mid,int high){

    // making an temp array
    vector <int> temp;
    // left part array cha pahila index
    int left_ptr=low;
    // right part array cha pahila index
    int right_ptr=mid+1;


    // if left and right aarray lengths are same this will be okay ,
    // but if the left side arrray is larger or smaller wise verses(right side) 
    while(left_ptr<=mid && right_ptr<=high ){
        if(arr[left_ptr]<=arr[right_ptr]){
            temp.push_back(arr[left_ptr++]);
        }else temp.push_back(arr[right_ptr++]);
    }
    // then the below code will help 

    // if right arr size is greater
    while(right_ptr<=high){
        temp.push_back(arr[right_ptr++]);
    }

    // if left arr size is greater
    while(left_ptr<=mid){
        temp.push_back(arr[left_ptr++]);
    }

    for(int i=0;i<temp.size();i++){
        // star star // apan hai visru sakto 
        // hai help karta aplela arrau chya lower index in solve karay 
        // samja jar low=4 ani high =6 tr tya anusar te temp madle variable hai tyach array cha tyach index la theval
        arr[low+i]=temp.at(i);
    }
}
// 1st
void merge_sort(int arr[],int low,int high){
    // base case
    // single element in array casse
    if(low>=high) return;

    int mid=(low+high)/2;

    // hya index mi divide karaycha 
    // pahile left
    merge_sort(arr,low,mid);

    // 2nd ->right side divide karaychi
    merge_sort(arr,mid+1,high);

    // merge karaycha logic wala function
    merge_arr(arr,low,mid,high);
}

// ----------------------------------------------quick sort------------------------------------------------------
// quick sort (TC)->O(n*logn) : (SC)-> O(1)

// it basically has two part 
// 2-> do quick sort
// 1->find partation index


// 1st
int pivot_indexer(int arr[],int low,int high){
    // assume the 1st element of array as pivot
    int pvt=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        // find the 1st greatest from the left side of arr
        while(arr[i]>=pvt && i<high){
            i++;
        }
        // find the 1st lowest from the right side of arr
        while(arr[j]<pvt && j>low){
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);

        /*
        // this will give an array smaller to greater 
        // find the 1st lowest from the left side of arr
        while(arr[i]<=pvt && i<high){
            i++;
        }
        // find the 1st hight from the right side of arr
        while(arr[j]>pvt && j>low){
            j--;
        }

        */ 
    }
    swap(arr[low],arr[j]);

    // pivot
    return j;
}
// 2nd
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot=pivot_indexer(arr,low,high);

        // calling quicksort for left part 
        quick_sort(arr,low,pivot-1);
        // calling quicksort for right part 
        quick_sort(arr,pivot+1,high);
    }
}


// ---------------------------------------------------------------------------------------------------------------
int main(){
    int arr[]={2,43,54,33,22,11};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before swaping :";
    print(arr,n);

    // sorting func
    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    // insertion_sort(arr,n);
    // merge_sort(arr,0,n-1);

    quick_sort(arr,0,n-1);
    cout<<"After swaping :";
    print(arr,n);

    return 0;
}