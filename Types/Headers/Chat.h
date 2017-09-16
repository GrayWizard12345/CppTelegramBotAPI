//
// Created by hamlet on 9/16/17.
//
#pragma once
#include <string>
#include "ChatPhoto.h"
#include "Message.h"

#ifndef TELEGRAMBOTAPI_CHAT_H
#define TELEGRAMBOTAPI_CHAT_H


class Chat {
    long long id;
    std::string type;
    std::string title;
    std::string username;
    std::string first_name;
    std::string last_name;
    bool all_members_are_administrators;
    ChatPhoto photo;
    std::string description;
    std::string invite_link;
public:
    long long int getId() const;

    void setId(long long int id);

    const std::string &getType() const;

    void setType(const std::string &type);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);

    const std::string &getFirst_name() const;

    void setFirst_name(const std::string &first_name);

    const std::string &getLast_name() const;

    void setLast_name(const std::string &last_name);

    bool isAll_members_are_administrators() const;

    void setAll_members_are_administrators(bool all_members_are_administrators);

    const ChatPhoto &getPhoto() const;

    void setPhoto(const ChatPhoto &photo);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    const std::string &getInvite_link() const;

    void setInvite_link(const std::string &invite_link);

    const Message &getPinnedMessage() const;

    void setPinnedMessage(const Message &pinnedMessage);

private:
    Message pinnedMessage;

};


#endif //TELEGRAMBOTAPI_CHAT_H
