#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyHashMap
{
public:
    vector<int> map;

public:
    MyHashMap()
    {
        map.resize(10000000, -1);
        // for(int i=0;i<map.size();i++){
        //     map[i]=-1;
        // }
    }

    void put(int key, int value)
    {
        if (key >= 0 && key < map.size())
        {
            map[key] = value;
        }
    }

    int get(int key)
    {
        if (key >= 0 && key < map.size())
        {
            return map[key];
        }
        return -1;
    }

    void remove(int key)
    {
        if (key >= 0 && key < map.size())
        {
            map[key] = -1;
            cout << "Object Removed Sucessfully" << endl;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main()
{
    // Your MyHashMap object will be instantiated and called as such :
    MyHashMap *obj = new MyHashMap();
    obj->put(3, 5);
    int param_2 = obj->get(3);
    cout << param_2 << endl;
    obj->remove(3);

    return 0;
}