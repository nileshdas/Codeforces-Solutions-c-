#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a,sol=0;

    cin>>a;

    string aa,bb;

    cin>>aa>>bb;

    for(int i=0;i<a;i++){

        int j=abs(aa[i]-bb[i]);

        int k=(aa[i]-'0');

            k+=(9-(bb[i]-'0'));

        int l=(bb[i]-'0');

            l+=(9-(aa[i]-'0'));

        sol+=min(j,min(k+1,l+1));

    }

    cout<<sol;

    return 0;
}