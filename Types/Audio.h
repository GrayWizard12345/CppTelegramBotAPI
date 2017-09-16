//
// Created by hamlet on 9/16/17.
//
#pragma once

#include <string>
#ifndef TELEGRAMBOTAPI_AUDIO_H
#define TELEGRAMBOTAPI_AUDIO_H
using std::string;

class Audio {

    string file_id;
    int duration;
    string performer;
    string title;
    string mime_type;
    int file_size;
public:
    const string &getFile_id() const;

    void setFile_id(const string &file_id);

    int getDuration() const;

    void setDuration(int duration);

    const string &getPerformer() const;

    void setPerformer(const string &performer);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getMime_type() const;

    void setMime_type(const string &mime_type);

    int getFile_size() const;

    void setFile_size(int file_size);
};


#endif //TELEGRAMBOTAPI_AUDIO_H
