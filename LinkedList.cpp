#include <iostream>
#include <algorithm>
#include <cstring>
#include <iterator>
#include <string>
#include <vector>
#include <iomanip>
#define nullstr ""
using namespace std;


class LinkedList {
    struct Node{
        string data;
        Node *next;
        Node *prev;
    };
private: // спецификатор доступа private
    Node *head;
    Node *tail;
public: // спецификатор доступа public
    LinkedList(string value = nullstr){
        head->next = tail;
        head->prev = nullptr;
        head->data = value;

        tail->next = nullptr;
        tail->prev = head;
        tail->data = nullstr;
    }
    /*LinkedList(){
        head->next = tail;
        head->prev = NULL;
    }*/

    void Add(string value){
        if (head->data == nullstr){
            head->data = value;
            return;
        }
        Node *tmp;
        tmp->next = nullptr;
        tmp->prev = tail;
        tmp->data = value;
        tail->next = tmp;
    }

    void Print(){
        Node *tmp = head;
        while(tmp != tail){
            cout<<tmp->data<<endl;
            tmp = tmp->next;
        }
    }
};

int main(){
    LinkedList list("1");
    list.Print();
    return 0;
}
