/*
 * Created by Mike Bogdan on 2/10/15.
 * Copyright (c) 2015 Mike Bohdan. All rights reserved.
 *
 * This class is basic class for all crypto classes.
 * It provide basic interface and some fields as KEY.
 *
 */


#ifndef __AbstractCrypto_H_
#define __AbstractCrypto_H_


#include <string>

class AbstractCrypto {

protected:
    const int KEY = 7;

public:

    AbstractCrypto() {
    }

    AbstractCrypto(int const KEY) : KEY(KEY) {
    }

    virtual std::string Encrypt(std::string text) const = 0;

    virtual std::string Decrypt(std::string text) const = 0;
};


#endif //__AbstractCrypto_H_
