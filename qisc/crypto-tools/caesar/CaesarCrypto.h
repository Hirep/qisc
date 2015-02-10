//
// Created by Mike Bogdan on 2/10/15.
// Copyright (c) 2015 Mike Bohdan. All rights reserved.
//


#ifndef __CesarCrypto_H_
#define __CesarCrypto_H_


#include "../AbstractCrypto.h"

class CaesarCrypto : AbstractCrypto {

public:

    CaesarCrypto(int key) : AbstractCrypto(key) {
    }

    virtual std::string Encrypt(std::string text) const override {
        for (char &element: text) element += this->KEY;
        return text;
    }

    virtual std::string Decrypt(std::string text) const override {
        for (char &element: text) element -= this->KEY;
        return text;
    }

};


#endif //__CesarCrypto_H_
