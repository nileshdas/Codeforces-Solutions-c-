→ Source Copy
#include <iostream>
#include <bits/stdc++.h> 

#include<string.h>
using namespace std;

int main() {
	// your code goes here
    string str,str2;
    int j=0;
    cin>>str;
     for(int i=0;i<=str.length();i++)
      {
    	    if(str[i]>=65 && str[i]<=92)
    	    {
    		str[i]=str[i]+32;
    	    }
      }
      
      for(int i=0; i<str.length();i++){
          if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'){
              str2[j]=str[i];
              cout<<"."<<str2[j];
              j++;
          }
      }
      
    return 0;
    
}