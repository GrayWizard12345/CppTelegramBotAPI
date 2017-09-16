//
// Created by hamlet on 9/16/17.
//

#include "../../Headers/Chat.h"

long long int Chat::getId() const {
    return id;
}

void Chat::setId(long long int id) {
    Chat::id = id;
}

const std::string &Chat::getType() const {
    return type;
}

void Chat::setType(const std::string &type) {
    Chat::type = type;
}

const std::string &Chat::getTitle() const {
    return title;
}

void Chat::setTitle(const std::string &title) {
    Chat::title = title;
}

const std::string &Chat::getUsername() const {
    return username;
}

void Chat::setUsername(const std::string &username) {
    Chat::username = username;
}

const std::string &Chat::getFirst_name() const {
    return first_name;
}

void Chat::setFirst_name(const std::string &first_name) {
    Chat::first_name = first_name;
}

const std::string &Chat::getLast_name() const {
    return last_name;
}

void Chat::setLast_name(const std::string &last_name) {
    Chat::last_name = last_name;
}

bool Chat::isAll_members_are_administrators() const {
    return all_members_are_administrators;
}

void Chat::setAll_members_are_administrators(bool all_members_are_administrators) {
    Chat::all_members_are_administrators = all_members_are_administrators;
}

const ChatPhoto &Chat::getPhoto() const {
    return photo;
}

void Chat::setPhoto(const ChatPhoto &photo) {
    Chat::photo = photo;
}

const std::string &Chat::getDescription() const {
    return description;
}

void Chat::setDescription(const std::string &description) {
    Chat::description = description;
}

const std::string &Chat::getInvite_link() const {
    return invite_link;
}

void Chat::setInvite_link(const std::string &invite_link) {
    Chat::invite_link = invite_link;
}

const Message &Chat::getPinnedMessage() const {
    return pinnedMessage;
}

void Chat::setPinnedMessage(const Message &pinnedMessage) {
    Chat::pinnedMessage = pinnedMessage;
}
