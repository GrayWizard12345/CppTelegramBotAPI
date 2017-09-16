//
// Created by hamlet on 9/16/17.
//
#pragma once

#include <string>
#include "User.h"

#ifndef TELEGRAMBOTAPI_MESSAGEENTITY_H
#define TELEGRAMBOTAPI_MESSAGEENTITY_H
using std::string;

class MessageEntity {

    string type;
    long long offset;
    long long length;
    string url;
    User user;
public:
    const string &getType() const;

    void setType(const string &type);

    long long int getOffset() const;

    void setOffset(long long int offset);

    long long int getLength() const;

    void setLength(long long int length);

    const string &getUrl() const;

    void setUrl(const string &url);

    const User &getUser() const;

    void setUser(const User &user);
};


#endif //TELEGRAMBOTAPI_MESSAGEENTITY_H
