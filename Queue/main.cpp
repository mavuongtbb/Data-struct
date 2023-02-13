#include "queue.h"
#include <iostream>

using namespace std;

int main(){
    Queue<int> q;
    q.EnQueue(1);
    q.EnQueue(3);
    q.EnQueue(5);
    q.EnQueue(7);
    cout << q.DeQueue();
    cout << q.DeQueue();
    //cout << q.DeQueue();
    cout << q.GetTop();
    return 0;
}