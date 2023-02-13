#include "stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack<int> s;
    s.Push(1);
    s.Push(3);
    s.Push(5);
    s.Push(7);
    cout << s.Pop() << endl;
    cout << s.Pop() << endl;
    cout << s.Pop() << endl;
    cout << s.GetTop() << endl;
    return 0;
}