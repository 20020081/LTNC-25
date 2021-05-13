#include <iostream>
using namespace std;

struct DNode
{
    const char* element;
    DNode *next, *prev;

    DNode(const char* e = NULL, DNode* p = NULL, DNode *n = NULL)
    {
        element = e;
        next = n;
        prev = p;
    }
};

struct DList
{
    DNode *header, *trailer;

    DList()
    {
        header->next = trailer;
        trailer->prev = header;
    }

    void addFirst(const char* s)
    {
        DNode *node = insertAfter(s, header);
    }

    DNode* insertAfter(const char* e, DNode* p){
        DNode* newNode = new DNode;
        newNode->element = e; newNode->prev = p; newNode->next = p->next;
        p->next->prev = newNode;
        p->next = newNode;

        return newNode;
    }

    void print()
    {
        DNode* tmp = header;
        tmp = tmp->next;
        while(tmp->next != trailer)
        {
            cout << tmp->element << endl;
            tmp = tmp->next;
        }
    }


};

int main()
{
    DList dlist;
    dlist.addFirst("ChuBeDan");
    dlist.print();

    return 0;
}
