#include<bits/stdc++.h>
using namespace std;

void counting_Sort(pair<int,string> *arr,int n){
    for(int i=0;i<=(n-1)/2;i++){
        arr[i].second="-";
    }
    vector<string> v[100];
    for(int i=0;i<n;i++){
        v[arr[i].first].push_back(arr[i].second);
    }
    for(auto i=0;i<100;i++){
        if(!v[i].empty()){
            for(auto x:v[i]){
                cout<<x<<" ";
            }
        }
    }
}

int main(){
int n;
cin>>n;

pair<int,string> *arr=new pair<int,string>[n];
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    string st;
    cin>>st;
    arr[i].first=x;
    arr[i].second=st;
}
counting_Sort(arr,n);

    return 0;
}
