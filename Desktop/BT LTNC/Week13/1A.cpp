#include <iostream>
using namespace std;

struct Node {
    const char* element;
    Node* next;

    Node(const char* e = NULL, Node* n = NULL)
    {
        element = e;
        next = n;
    }
};

struct SLinkedList{
    Node* head;
    long size;

    SLinkedList()
    {
        head = NULL;
        size = 0;
    }

    ~SLinkedList()
    {
        Node* t_head = head;
        while(head)
        {
            Node* tmp = t_head;
            t_head = t_head->next;
            delete tmp;
            tmp = NULL;
        }
    }

    void addFirst(const char* element)
    {
        Node* newNode = new Node(element, head);
        head = newNode;
    }

    void addLast(const char *element)
    {
        Node* newNode = new Node(element, NULL);
        Node* tail = new Node;
        if (head == NULL)
            head = newNode;
        else
        {
            for (tail = head; tail != NULL; tail = tail->next)
            {
                if (tail->next == NULL)
                {
                    tail->next = newNode;
                    break;
                }
            }
        }
    }

    void removeFirst()
    {
        Node* tmp = head;
        head = tmp->next;
        delete tmp;
    }

    void print()
    {
        for(Node* tmp = head; tmp != NULL; tmp = tmp->next)
        {
            cout << tmp->element << endl;
        }
    }

    void removeLast()
    {
        Node* tmp1 = head;
        while(tmp1->next != NULL)
        {
            tmp1 = tmp1->next;
        }
    }
};

int main()
{
    SLinkedList list;
//    list.addFirst("ChuBeBinhDan");
//    list.addFirst("ChuBeManhDan");
    list.addFirst("ChuBeMinhDan");
    list.addLast("LTNC_25");
    list.removeFirst();

    list.print();

    return 0;
}
