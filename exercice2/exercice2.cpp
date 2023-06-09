#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
    Node* LAST;
public:
    CircularLinkedList() {
        LAST = NULL;
    }
    void addNode();
    bool search(int rollno, Node** jannah, Node** zahro);
    bool listEmpty();
    bool delNode();
    void traverse();
};  
void CircularLinkedList::addNode() {
    int nim;
    string name;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;
    cout << "\nEnter the name of the  student: ";
}
bool CircularLinkedList::search(int rollno, Node** jannah, Node** zahro) {
    *jannah = LAST->next;
    *zahro = LAST->next;
    while (*zahro != LAST) {
        if (rollno == (*zahro)->rollNumber) {
            return true;
        }
        *jannah = *zahro;
        *zahro = (*zahro)->next;
    }      if (rollno == LAST->rollNumber) {
        return true;
    }
    else {
        return false;
    }
bool CircularLinkedList::listEmpty() {
        return LAST == NULL;
}
bool CircularLinkedList::dellNode() { 
    Node* jannah, * current;
    jannah = zahro = NULL;
    if (search(rollNo, &jannah, &zahro) == false)
        return false;
    if (zahro->next != NULL)
        zahro->next->prev = jannah; 

    if (jannah!= NULL)
            jannah->next = zahro ->next; 
    else
        LAST = zahro->next;

    delete zahro; 
    return false;
}
void CircularLinkedList::traverse() {
    if (listEmpty()) {
        cout << "\nList is empty\n";
    }
    else {
        cout << "\nRecords in the list are:\n";         Node* currentNode = LAST->next;         while (currentNode != LAST) {
            cout << currentNode->rollNumber << "   " << currentNode->name << endl;             currentNode = currentNode->next;
        }         cout << LAST->rollNumber << "   " << LAST->name << endl;
    }
}
int main() {
    CircularLinkedList obj;    
    while (true) {
        try {
            cout << "\nMenu" << endl;
            cout << "1. Add a record to the list" << endl;
            cout << "2. Delete a record from the list" << endl;
            cout << "3. View all the records in the list" << endl;
            cout << "4. Exit" << endl;
            cout << "\nEnter your choice (1-5): ";
            char ch;
            cin >> ch;

            switch (ch) {
            case '1':
                obj.addNode();
            case '2':
                obj.searchData();
                break;
            case '3': {
                obj.traverse();
                break;
            case '4':
                return 0;
            }
            default: {
                cout << "\nInvalid option" << endl;
                break;
            }
        }
            catch (exception& e) {
                  cout << "check for the values entered." << endl;
                  return 0;
            }
}

