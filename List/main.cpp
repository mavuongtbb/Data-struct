#include <iostream>
#include "list.h"

using namespace std;

int main(){
    List<int> l;
    l.Add(1);
    l.Add(3);
    l.Add(5);
    l.Add(7);
    /*cout << l.Get(0) << endl;
    cout << l.Get(1) << endl;
    cout << l.Get(2) << endl;
    cout << l.Get(3) << endl;
    l.Delete(3);
    cout << l.Get(0) << endl;
    cout << l.Get(1) << endl;
    cout << l.Get(2) << endl;*/
    //l.Insert(4,4);
    l.Update(4,4);
    l.PrintAll();
    return 0;
}