#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50,60,70,30, 50, 61};
    //list<int>newList;
    // newList=myList;
    //newList.assign(myList.begin(), myList.end());
    //myList.push_back(100);
    // myList.push_front(50);
    //myList.insert(next(myList.begin(),2),500);

    //single value delete korte chile
    // myList.erase(next(myList.begin(),2));
    // replace(myList.begin(), myList.end(),30,100 );
    auto it= find(myList.begin(), myList.end(), 30);
    if(it==myList.end()){
        cout<<"not found"<<endl;

    }
    else{
        cout<<"found"<<endl;
    }
    // for(int val:myList){
    //     cout<<val<<endl;
    // }
    return 0;
}