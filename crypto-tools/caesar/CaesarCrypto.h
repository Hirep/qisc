/*
 * Created by Mike Bogdan on 2/10/15.
 * Copyright (c) 2015 Mike Bohdan. All rights reserved.
 *
 * This class implements algorithm of Caesar cipher.
 * You can choose key while creating new object.
 * By default key value is equal 7.
 * I use unicode table as an alphabet.
 *
 */


#ifndef __CesarCrypto_H_
#define __CesarCrypto_H_


#include "../AbstractCrypto.h"

class CaesarCrypto : AbstractCrypto {

public:

    CaesarCrypto() : AbstractCrypto() {
    }

    CaesarCrypto(int const KEY) : AbstractCrypto(KEY) {
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
