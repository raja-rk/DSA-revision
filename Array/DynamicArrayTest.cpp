#include<bits/stdc++.h>
#include "DynamicArray.h"

int main(){
    Array obj(10);

    obj.add(10);
    obj.add(20);
    obj.add(0);
    obj.add(-10);
    obj.add(11);
    obj.add(100);
    obj.add(12);

    cout<<obj.size()<<endl;
    cout<<obj.isEmpty()<<endl;
    cout<<obj.get(3)<<" "<<obj.get(15)<<endl;
    cout<<obj.removeAt(2)<<endl;

    return 0;
}
