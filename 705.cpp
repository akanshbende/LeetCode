#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class MyHashSet
{
public:
    vector<bool> hashSet;
    MyHashSet()
    {
        hashSet.resize(10000000, false);
    }

    void add(int key)
    {
        if (key >= 0 && key < hashSet.size())
        {
            hashSet[key] = true;
        }
    }

    void remove(int key)
    {
        if (key >= 0 && key < hashSet.size())
        {
            hashSet[key] = false;
        }
    }

    bool contains(int key)
    {
        if (key >= 0 && key < hashSet.size())
        {
            return hashSet[key];
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
int main()
{

    MyHashSet *obj = new MyHashSet();
    obj->add(3);
    obj->remove(3);
    bool param_3 = obj->contains(3);
    cout << param_3 << endl;
    return 0;
}