#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(5);
    cout<<(pq.top())<<endl;
    pq.pop();
    cout<<(pq.top())<<endl;
    cout<<pq.size()<<endl;
}
