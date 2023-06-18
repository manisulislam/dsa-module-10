#include<bits/stdc++.h>
using namespace std;
int main(){
    //list<int>myList2={1,2,3,4,5};
    //int a[5]={10,20,30,40,50};
    //  list<int>myList(myList2);
    //list<int>myList(a, a+5);
    vector<int>v={10,50,40,62,80};
    list<int>myList(v.begin(), v.end());
    
    for(auto it=myList.begin(); it!=myList.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}