#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head)
{
    map<ListNode *, int> mp;
    ListNode *current = head;

    while (current != NULL)
    {
        if (mp.find(current) != mp.end())
            return true;

        mp[current]++;
        current = current->next;
    }

    return false;
}
