#include<bits/stdc++.h>
using namespace std;

void to_lower(string &str) {
    for(int i=0;i<str.lenght();i++){
        str[i]=(char)to_lower(str[i]);
    }
}

bool valid_pali(string str){
    to_lower(str);
    for(int i=0;i<(str.length()/2);i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true ;
}

int main(){

    string str="MOOm";
    cout<<valid_pali(str)<<endl;
    //code is incorrect 
    cout<<"code is incorrect "<<endl;

    return 0;
}