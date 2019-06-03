#include <iostream>

#include <string>
#include <vector>


using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int days=0;
    int count;
    if(a>=b){days =  days + b; a = a - b; b =0; count = a/2; cout<<days<<" "<<count;
        
    }else if(b>a){days = days + a; b = b-a; a=0;
        count = b/2; cout<<days<<" "<<count;
    }
    
    
    return 0;
    
    
}