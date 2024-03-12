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

ListNode *reverseList(ListNode *head)
{
    ListNode *temp = NULL, *current = head, *recent = NULL;

    while (current != NULL)
    {
        temp = current->next;
        current->next = recent;

        if (temp == NULL)
        {
            head = current;
            break;
        }

        recent = current;
        current = temp;
    }

    return head;
}