//
// Created by hamlet on 9/16/17.
//

#include "../../Headers/PhotoSize.h"

const string &PhotoSize::getFile_id() const {
    return file_id;
}

void PhotoSize::setFile_id(const string &file_id) {
    PhotoSize::file_id = file_id;
}

long long int PhotoSize::getWidth() const {
    return width;
}

void PhotoSize::setWidth(long long int width) {
    PhotoSize::width = width;
}

long long int PhotoSize::getHeight() const {
    return height;
}

void PhotoSize::setHeight(long long int height) {
    PhotoSize::height = height;
}

long long int PhotoSize::getFile_size() const {
    return file_size;
}

void PhotoSize::setFile_size(long long int file_size) {
    PhotoSize::file_size = file_size;
}
