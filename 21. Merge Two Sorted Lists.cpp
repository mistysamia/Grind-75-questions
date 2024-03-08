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

ListNode *tail = NULL, *head = NULL;
ListNode *append(int value, ListNode *list)
{
    ListNode *newNode = new ListNode();
    newNode->val = value;
    ListNode *current = list;

    if (current == NULL)
        return newNode;

    while (current != NULL)
    {
        if (current->next == NULL)
        {
            current->next = newNode;
            return list;
        }
        current = current->next;
    }

    return list;
}

void print(ListNode *list)
{
    ListNode *current = list;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *head = new ListNode();
    ListNode *current = head;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val >= list2->val)
        {
            current->next = list2;
            list2 = list2->next;
        }
        else
        {
            current->next = list1;
            list1 = list1->next;
        }
        current = current->next;
    }

    while (list1 != NULL)
    {
        current->next = list1;
        current = current->next;
        list1 = list1->next;
    }

    while (list2 != NULL)
    {
        current->next = list2;
        current = current->next;
        list2 = list2->next;
    }

    return head->next;
}

int main()
{

    int t = 100;
    ListNode *list1 = NULL, *list2 = NULL;
    while (t--)
    {
        int n, target, k, m;
        vector<int> nums, tums, ans;
        vector<string> str;
        vector<vector<int>> matrix, mat;
        string s, s1;
       
        cin >> n;

        if (n == 1)
        {
            while (1)
            {
                cin >> m;
                if (m == -1)
                    break;
                list1 = append(m, list1);
            }
            while (1)
            {
                cin >> m;
                if (m == -1)
                    break;
                list2 = append(m, list2);
            }
        }
        else if (n == 2)
        {
            cout << "Print : " << endl;
            print(list1);
            print(list2);
        }
        else
        {
            ListNode *current = mergeTwoLists(list1, list2);
            print(current);
        }
    }
}