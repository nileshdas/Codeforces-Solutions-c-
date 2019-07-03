

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;
    int cups = a1 + a2 + a3;
    int medals = b1 + b2 + b3;
    if(cups%5==0){
        cups =  cups - 1;
        
    }else if(medals%10==0){
        medals = medals - 1;
    }
    if(n>=(cups+5)/5 + (medals+10)/10 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}