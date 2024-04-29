//
// Created by Dhanish Mehta on 11/16/22.
//

#ifndef NEGATIVEERROR_H
#define NEGATIVEERROR_H

#include "stdexcept"
#include "string"
using namespace std;
class NegativeError: public exception{
    char * message;
public:
    explicit NegativeError(char * msg): message(msg) {}
    virtual char* what () {
        return message;
    }
};


#endif //NEGATIVEERROR_H
