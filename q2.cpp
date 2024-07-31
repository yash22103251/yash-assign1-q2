#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"enter size = ";
    int n;
    cin>>n;
    int a, sum=0;
    float avg;
    cout<<"enter elements"<<endl;
    for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
            sum=sum+v[i];
    }
     cout<<sum/n;
}
