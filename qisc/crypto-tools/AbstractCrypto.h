//
// Created by Mike Bogdan on 2/10/15.
// Copyright (c) 2015 Mike Bohdan. All rights reserved.
//


#ifndef __AbstractCrypto_H_
#define __AbstractCrypto_H_


#include <string>

class AbstractCrypto {

protected:
    const int KEY;

public:
    AbstractCrypto(int const KEY) : KEY(KEY) {
    }

    virtual std::string Encrypt(std::string text) const = 0;

    virtual std::string Decrypt(std::string text) const = 0;
};


#endif //__AbstractCrypto_H_
