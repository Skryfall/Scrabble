//
// Created by Alejandro Ibarra on 2019-03-23.
//

#include "List.h"

int List::getLenght() {
    return this->length;
}

void List::setLenght(int lenght) {
    this->length = lenght;
}

/**
* Add a new value to list.
* @param n int to add
* @param multiplier int specific multiplier of square. Default is 0 (no multiplier)
* 0 = NO, 1 = DL, 2 = DW, 3 = TL, 4 = TW.
*/
void List::add(string n, int id, int multiplier) {
    Node* tmp = new Node;
    tmp->setLetter(n);
    tmp->next = nullptr;

    // Adjusts multiplier type of node.
    if (multiplier == 0) {
        tmp->setMultiplier(0);
    } else {
        tmp->setMultiplier(multiplier);
    }

    // Sets unique id.
    tmp->setID(id);

    this->length++;

    if(this->head == nullptr) {
        this->head = tmp;
    }
    else{
        Node* tmpCG = this->head;
        while(tmpCG->next != nullptr){
            tmpCG = tmpCG->next;
        }
        tmpCG->next = tmp;
    }
}

/**
 * Displays list as a string.
 */
void List::display() {
    string result = "[";
    Node* tmp = this->head;
    result.append(tmp->getLetter());
    tmp = tmp->next;
    while (tmp != nullptr) {
        result.append(", ");
        result.append(tmp->getLetter());
        tmp = tmp->next;
    }
    result.append("]");
    cout << result << endl;
}
 Node*List::getHead() {
    return this->head;
}

/**
* Finds the node with a specific index.
* @param n position of value
* @return *Node node in position n
*/
Node* List::index(int n) {
    Node *tmp = head;
    int i = 1;
    while (i != n) {
        tmp = tmp->next;
        i++;
    }
    cout << tmp->getLetter() << endl;
    return tmp;
}