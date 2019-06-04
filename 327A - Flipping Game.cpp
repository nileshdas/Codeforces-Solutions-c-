#include <iostream>
#include <queue>

using namespace std;



int main(void)
{
    int n,a;
    cin>>n;
    int count1(0), count0(0), count0max(-1);
    while(n--){
        cin>>a;
        if(a==1){
            count1++;
            if(count0>0){
                count0--;
            }
        }
        if(a==0){
            count0++;
            if(count0>count0max){
                count0max = count0;
            }
        }
    }
    int ans = count1 + count0max;
    cout<<ans<<endl;
    
    return 0;
}