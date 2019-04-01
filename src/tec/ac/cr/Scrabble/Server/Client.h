//
// Created by kevin on 16/03/19.
//

#ifndef SCRABBLE_CLIENT_H
#define SCRABBLE_CLIENT_H


#include "../Logic/Data/Holder.h"

class Client {

public:

    static Client* getInstance();

    Holder* run(Holder* holder);

private:

    Client() = default;
    Client(Client const&)= default;
    Client& operator = (Client const&) = default;

    static Client* client;

};


#endif //SCRABBLE_CLIENT_H
