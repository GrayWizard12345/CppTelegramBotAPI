//
// Created by hamlet on 9/16/17.
//

#include "../../Headers/User.h"

long long int User::getId() const {
    return id;
}

void User::setId(long long int id) {
    User::id = id;
}

bool User::isIs_boot() const {
    return is_bot;
}

void User::setIs_boot(bool is_boot) {
    User::is_bot = is_boot;
}

const string &User::getFirst_name() const {
    return first_name;
}

void User::setFirst_name(const string &first_name) {
    User::first_name = first_name;
}

const string &User::getLast_name() const {
    return last_name;
}

void User::setLast_name(const string &last_name) {
    User::last_name = last_name;
}

const string &User::getUsername() const {
    return username;
}

void User::setUsername(const string &username) {
    User::username = username;
}

const string &User::getLanguage_code() const {
    return language_code;
}

void User::setLanguage_code(const string &language_code) {
    User::language_code = language_code;
}

User::User(void *) {

}
