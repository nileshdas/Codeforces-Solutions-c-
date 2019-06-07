#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    vector<int>arr1;
    vector<int>arr2;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n-1;i++){
        int p;
        cin>>p;
        arr1.push_back(p);
    }
    for(int i=0;i<n-2;i++){
        int p;
        cin>>p;
        arr2.push_back(p);
    }
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum1 +=arr1[i];
    }
    for(int i=0;i<n-2;i++){
        sum2 +=arr2[i];
    }
    cout<<sum - sum1<<endl;
    cout<<sum1-sum2<<endl;
    
    return 0;
}