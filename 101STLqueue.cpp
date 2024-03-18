// First in first out

#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue <string> q;
    q.push("Atharva");
    q.push("Prajwal");
    q.push("Pratik");



    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;
    return 0;
}