#include<bits/stdc++.h>
using namespace std;

int main(){

string str = "";
cout<<"Enter the string:"<<endl;
cin>>str;

string str1 = str;
reverse(str1.begin() , str1.end());
cout<<"Original String : "<<str<<" Reversed String : "<<str1<<endl;
return 0;
}

