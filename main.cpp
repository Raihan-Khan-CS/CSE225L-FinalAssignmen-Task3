#include <iostream>
#include"SortedList.h"
#include"BinarySearchTree.h"
#include"QueueType.h"
using namespace std;

int main()
{
    SortedList<int> in;

    in.InsertItem(5);
    in.InsertItem(7);
    in.InsertItem(4);
    in.InsertItem(2);
    in.InsertItem(1);

    int x;
    in.ResetList();
    cout<<"Sorted List: ";
    while(in.GetNextItem(x))
        cout<<x<<" ";
    cout<<endl;


}
