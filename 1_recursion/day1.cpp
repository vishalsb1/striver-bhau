#include<bits/stdc++.h>
using namespace std;
void print_ntimes(int &n){
    if(n==0){
        return;
    }
    cout<<"Hello"<<endl;
    n--;
    print_ntimes(n);
}

void print_1_n(int count,int n){
    if(count==n){return;}
    cout<<(count++)+1<<endl;
    print_1_n(count,n);
}
void print_n_1(int n){
    if(n==0){return;
    }
    cout<<(n--)<<endl;
    print_n_1(n);
}
void sum_n(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum+=n;
    n--;
    sum_n(sum,n);
}
int factorial(int n){
    if(n==0 || n==1 ){
        return 1;
    }
    return n*factorial(n-1);
}

void reverse_array(int s,int e,int arr[]){
    if(s>=e)return; 
    swap(arr[s],arr[e]);
    s++;e--;
    reverse_array(s,e,arr);
}
void print(int arr[]){
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

bool str_palindrome(int s,int e,string str1){
    if(s>=e) return true;
    if(str1[s]==str1[e]) return str_palindrome(s+1,e-1,str1);
    else return false;
}
int main(){

    // printing n times using recurssion
    // int n;cin>>n;
    // print_ntimes(n);

    // printing 1 to n  using recurssion
    // print_1_n(0,n);

    // printing n to 1 using recurssion
    // print_n_1(n);

    // sum of 1st n numbers
    // sum_n(0,n);

    // factorial of n numbers
    // cout<<factorial(n);

    // reverse an array
    // int arr[]={1,2,3,4,5,6};
    // print(arr);
    // reverse_array(0,5,arr);
    // print(arr);

    string str="appppppa";
    cout<<str_palindrome(0,7,str)<<endl;
    return 0;
}