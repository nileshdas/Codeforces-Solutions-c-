#include <iostream>

#include <string>
#include <vector>


using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int count = 0;
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            count++;
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            count++;
            min = arr[i];
        }
    }
    cout<<count<<endl;
    return 0;
    
}