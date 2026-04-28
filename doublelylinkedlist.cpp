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
    
}