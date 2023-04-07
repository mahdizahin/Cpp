#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool myCompare(pair<int,int>p1, pair<int,int>p2){

    return p1.first<p2.first;

}

int main(){

//pair<int,char>p;
//p.first=4;
//p.second='k';

//cout<<p;

/* Notes of Pair

      4  7  2  6  1  0  5  3
index 0  1  2  3  4  5  6  7

arr   10  16  7  14  5  3  12  9
index 0   1   2  3   4  5  6   7

*/

int arr[]={10,16,7,14,5,3,2,9};
vector<pair<int,int>>v;

for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){

   // pair<int,int>
   v.push_back(make_pair(arr[i],i));
}

sort(v.begin(),v.end(),myCompare);

for(int i=0;i<v.size();i++){
   arr[v[i].second]=i;

}


for(int i=0;i<v.size();i++){
    //arr[v[i].second]=i;
    cout<<arr[i]<<" ";
}








return 0;
}
