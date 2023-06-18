#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50,60,70,80,10,10,10};
    // myList.remove(10);
    // myList.sort();
    myList.sort(greater<int>());
    myList.unique();
    for(int val: myList){
        cout<<val<<endl;
    }
    return 0;
}