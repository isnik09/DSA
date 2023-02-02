#include<iostream>
using namespace std;
// namespace std;

int main(){
    string str;
    cout<<"May I know your name?"<<endl;
    // cin>>str;
    getline(cin,str);
    cout<<"Hello "<<str<<endl;
    return 0; 
}