//
// Created by kevin on 16/03/19.
//

#ifndef SCRABBLE_NODE_H
#define SCRABBLE_NODE_H

#include <string>

using namespace std;

class Node {

public:

    Node(string letters, int points) {
        letter = letters;
        point = points;
    }

    //Atributos con los que contará la clase.
    Node* next = nullptr;

    //Métodos con los que contará la clase.
    void setLetter(string letter);
    string getLetter();
    void setPoints(int point);
    int getPoints();

private:

    string letter;
    int point;

};


#endif //SCRABBLE_NODE_H
