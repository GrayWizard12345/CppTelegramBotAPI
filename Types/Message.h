//
// Created by hamlet on 9/16/17.
//
#pragma once
#include <string>
#include "User.h"
#include "Chat.h"
#include "MessageEntity.h"
#include "Audio.h"
#include "Document.h"
#include "Game.h"
#include "PhotoSize.h"
#include "Sticker.h"
#include "Video.h"
#include "Voice.h"
#include "VideoNote.h"
#include "Contact.h"
#include "Location.h"
#include "Venue.h"
#include "Invoice.h"
#include "SuccessfulPayment.h"
#include <vector>
#ifndef TELEGRAMBOTAPI_MESSAGE_H
#define TELEGRAMBOTAPI_MESSAGE_H

using std::string;
using std::vector;
class Message {
    long long message_id;
    User from;
    long long date;         //Unix time
    Chat chat;
    User forward_from;
    Chat forword_from_chat;
    long long forword_from_message_id;
    string forward_signature;
    long long forward_date;
    Message reply_to_message;
    long long edit_date;
    string author_signature;
    string text;
    vector entities<MessageEntity>;
    Audio audio;
    Document documnet;
    Game game;
    vector photo<PhotoSize>;
    Sticker sticker;
    Video video;
    Voice voice;
    VideoNote video_note;
    string caption;
    Contact contact;
    Location location;
    Venue venue;
    vector new_chat_members<User>;
    User left_chat_member;
    string new_chat_title;
    vector new_chat_photo<PhotoSize>;
    bool delete_chat_photo;
    bool group_chat_created;
    bool suppergroup_chat_created;
    bool channel_chat_created;
    long long migrate_to_chat_id;
    long long migrate_from_chat_id;
    Message pinned_message;
    Invoice invoice;
    SuccessfulPayment successfulPayment;
public:
    long long int getMessage_id() const;

    void setMessage_id(long long int message_id);

    const User &getFrom() const;

    void setFrom(const User &from);

    long long int getDate() const;

    void setDate(long long int date);

    const Chat &getChat() const;

    void setChat(const Chat &chat);

    const User &getForward_from() const;

    void setForward_from(const User &forward_from);

    const Chat &getForword_from_chat() const;

    void setForword_from_chat(const Chat &forword_from_chat);

    long long int getForword_from_message_id() const;

    void setForword_from_message_id(long long int forword_from_message_id);

    const string &getForward_signature() const;

    void setForward_signature(const string &forward_signature);

    long long int getForward_date() const;

    void setForward_date(long long int forward_date);

    const Message &getReply_to_message() const;

    void setReply_to_message(const Message &reply_to_message);

    long long int getEdit_date() const;

    void setEdit_date(long long int edit_date);

    const string &getAuthor_signature() const;

    void setAuthor_signature(const string &author_signature);

    const string &getText() const;

    void setText(const string &text);

    const vector &getEntities() const;

    void setEntities(const vector &entities);

    const Audio &getAudio() const;

    void setAudio(const Audio &audio);

    const Document &getDocumnet() const;

    void setDocumnet(const Document &documnet);

    const Game &getGame() const;

    void setGame(const Game &game);

    const vector &getPhoto() const;

    void setPhoto(const vector &photo);

    const Sticker &getSticker() const;

    void setSticker(const Sticker &sticker);

    const Video &getVideo() const;

    void setVideo(const Video &video);

    const Voice &getVoice() const;

    void setVoice(const Voice &voice);

    const VideoNote &getVideo_note() const;

    void setVideo_note(const VideoNote &video_note);

    const string &getCaption() const;

    void setCaption(const string &caption);

    const Contact &getContact() const;

    void setContact(const Contact &contact);

    const Location &getLocation() const;

    void setLocation(const Location &location);

    const Venue &getVenue() const;

    void setVenue(const Venue &venue);

    const vector &getNew_chat_members() const;

    void setNew_chat_members(const vector &new_chat_members);

    const User &getLeft_chat_member() const;

    void setLeft_chat_member(const User &left_chat_member);

    const string &getNew_chat_title() const;

    void setNew_chat_title(const string &new_chat_title);

    const vector &getNew_chat_photo() const;

    void setNew_chat_photo(const vector &new_chat_photo);

    bool isDelete_chat_photo() const;

    void setDelete_chat_photo(bool delete_chat_photo);

    bool isGroup_chat_created() const;

    void setGroup_chat_created(bool group_chat_created);

    bool isSuppergroup_chat_created() const;

    void setSuppergroup_chat_created(bool suppergroup_chat_created);

    bool isChannel_chat_created() const;

    void setChannel_chat_created(bool channel_chat_created);

    long long int getMigrate_to_chat_id() const;

    void setMigrate_to_chat_id(long long int migrate_to_chat_id);

    long long int getMigrate_from_chat_id() const;

    void setMigrate_from_chat_id(long long int migrate_from_chat_id);

    const Message &getPinned_message() const;

    void setPinned_message(const Message &pinned_message);

    const Invoice &getInvoice() const;

    void setInvoice(const Invoice &invoice);

    const SuccessfulPayment &getSuccessfulPayment() const;

    void setSuccessfulPayment(const SuccessfulPayment &successfulPayment);


};


#endif //TELEGRAMBOTAPI_MESSAGE_H
