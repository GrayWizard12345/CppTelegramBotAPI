//
// Created by hamlet on 9/16/17.
//
#pragma once
#include <string>
using  std::string;
#ifndef TELEGRAMBOTAPI_USER_H
#define TELEGRAMBOTAPI_USER_H


class User {
private:
    long long id;
    bool is_bot;
    string first_name;
    string last_name;
    string username;
    string language_code;
public:
    User(void*);
    long long int getId() const;

    void setId(long long int id);

    bool isIs_boot() const;

    void setIs_boot(bool is_boot);

    const string &getFirst_name() const;

    void setFirst_name(const string &first_name);

    const string &getLast_name() const;

    void setLast_name(const string &last_name);

    const string &getUsername() const;

    void setUsername(const string &username);

    const string &getLanguage_code() const;

    void setLanguage_code(const string &language_code);
};


#endif //TELEGRAMBOTAPI_USER_H
