//
// Created by hamlet on 9/16/17.
//

#include "../../Headers/MessageEntity.h"

const string &MessageEntity::getType() const {
    return type;
}

void MessageEntity::setType(const string &type) {
    MessageEntity::type = type;
}

long long int MessageEntity::getOffset() const {
    return offset;
}

void MessageEntity::setOffset(long long int offset) {
    MessageEntity::offset = offset;
}

long long int MessageEntity::getLength() const {
    return length;
}

void MessageEntity::setLength(long long int length) {
    MessageEntity::length = length;
}

const string &MessageEntity::getUrl() const {
    return url;
}

void MessageEntity::setUrl(const string &url) {
    MessageEntity::url = url;
}

const User &MessageEntity::getUser() const {
    return user;
}

void MessageEntity::setUser(const User &user) {
    MessageEntity::user = user;
}
