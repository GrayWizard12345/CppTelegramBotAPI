//
// Created by hamlet on 9/16/17.
//

#include "../../Headers/Audio.h"

const string &Audio::getFile_id() const {
    return file_id;
}

void Audio::setFile_id(const string &file_id) {
    Audio::file_id = file_id;
}

int Audio::getDuration() const {
    return duration;
}

void Audio::setDuration(int duration) {
    Audio::duration = duration;
}

const string &Audio::getPerformer() const {
    return performer;
}

void Audio::setPerformer(const string &performer) {
    Audio::performer = performer;
}

const string &Audio::getTitle() const {
    return title;
}

void Audio::setTitle(const string &title) {
    Audio::title = title;
}

const string &Audio::getMime_type() const {
    return mime_type;
}

void Audio::setMime_type(const string &mime_type) {
    Audio::mime_type = mime_type;
}

int Audio::getFile_size() const {
    return file_size;
}

void Audio::setFile_size(int file_size) {
    Audio::file_size = file_size;
}
