#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<long> q;
    for(long i = 1; i<=10; i++)
     q.push(i);
    cout<<"queue size:"<<q.size()<<endl;
    cout<<"queue elements:"<<endl;
    while(!q.empty()) {
      cout<<q.front()<<" ";
      q.pop();
    }   
    getchar();
}

                                                                                                      
