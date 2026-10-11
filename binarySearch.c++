#include<iostream>
using namespace std;
// time complexity log n
int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
     
    while(start<=end){ // start ki value end se badi ho jaygi fir stop
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;

    }
    return -1;
    
}
int main(){
    int n;
    cout<<"eneter the n:";
    cin>>n;
    int arr[1000];
    cout<<"enetr the arr element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"eneter a key:";
    cin>>key;

    cout<<(binarySearch(arr,n,key))<<endl;
    return 0;
}
