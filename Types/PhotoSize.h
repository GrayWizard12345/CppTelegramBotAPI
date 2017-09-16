//
// Created by hamlet on 9/16/17.
//
#pragma once

#include <string>
#ifndef TELEGRAMBOTAPI_PHOTOSIZE_H
#define TELEGRAMBOTAPI_PHOTOSIZE_H
using std::string

class PhotoSize {

    string file_id;
    long long width;
    long long height;
    long long file_size;
public:
    const string &getFile_id() const;

    void setFile_id(const string &file_id);

    long long int getWidth() const;

    void setWidth(long long int width);

    long long int getHeight() const;

    void setHeight(long long int height);

    long long int getFile_size() const;

    void setFile_size(long long int file_size);
};


#endif //TELEGRAMBOTAPI_PHOTOSIZE_H
