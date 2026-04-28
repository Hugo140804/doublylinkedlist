#include <iostream>
#include <string>   
using namespace std;

class Node
{
    public:
        int noMhs;
        Node* next;
        Node* prev; 
};

class DoublelyLinkedList
{
    private:
        Node *START;

public:
    DoubleLinkedListList()
    {
        START = NULL;
    }

void addNode()
{
    int nim;
    cout << "\nEnter the roll number of the student:";
    cin >> nim;

    Node* newNode = new Node();
    newNode->noMhs = nim;
    if (START != NULL == START ->noMhs)
    {
        cout << "\nDuplicate roll numbers not allowed" << endl;
        return;
    }
    newNode->nest = START;
    if (START != NULL)
    {
        START->prev = newNode;
    newNode->prev = NULL;
    START = newNode;
    return;

    Node*current = START;
    while (current->next != NULL && current->next->noMhs < nim)
    {
        current = current->next;
    }

    if (current->next != NULL && current->next->noMhs == nim)
    {
        cout << "\nDuplicate roll numbers not allowed" << endl;
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = newNode;
    current->next = newNode;

    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        cout << "\nEnter the roll number of the student to be deleted:";
        int rollNo;
        cin >> rollNo;

        Node* current = START;
        
        while (current!= NULL && current->noMhs != rollNo)
        {
            current = current->next;

            if(current == NULL)
            {
                cout << "\nStudent with roll number " << rollNo << " not found." << endl;
                return;
            }
            
        if (current == START)
        {
            START = current->next
            if (START != NULL)
            {
                START->prev = NULL;
            }
            else
            {
                current->prev->next = current->next;
                if (current->next != NULL)
                {
                    current->next->prev = current->prev;
                }
                delete current;
                cout << "Record with roll number " << rollNo << " deleted " << endl;
            }
        }

        void traverse()
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }

            cout << "\nrRecords in ascending order of roll numberm are:\n";
            int i = 0;
            while (currentNode != NULL
            {
                cout << i+1 << ". " << currentNode->noMhs << endl;
                currentNode = currentNode->next;
                i++;
            }
        }
        
        void searchData()
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;

            }
            int rollNo;
            cout <<"\nEnter the roll number of the student to search for:";
            cin >> rollNo;
            Node *current = START;

            while (current)
            }
        }
        }
            

        }
    }
    }


    
}