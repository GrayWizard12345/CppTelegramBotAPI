//
// Created by hamlet on 9/16/17.
//

#include "Message.h"

long long int Message::getMessage_id() const {
    return message_id;
}

void Message::setMessage_id(long long int message_id) {
    Message::message_id = message_id;
}

const User &Message::getFrom() const {
    return from;
}

void Message::setFrom(const User &from) {
    Message::from = from;
}

long long int Message::getDate() const {
    return date;
}

void Message::setDate(long long int date) {
    Message::date = date;
}

const Chat &Message::getChat() const {
    return chat;
}

void Message::setChat(const Chat &chat) {
    Message::chat = chat;
}

const User &Message::getForward_from() const {
    return forward_from;
}

void Message::setForward_from(const User &forward_from) {
    Message::forward_from = forward_from;
}

const Chat &Message::getForword_from_chat() const {
    return forword_from_chat;
}

void Message::setForword_from_chat(const Chat &forword_from_chat) {
    Message::forword_from_chat = forword_from_chat;
}

long long int Message::getForword_from_message_id() const {
    return forword_from_message_id;
}

void Message::setForword_from_message_id(long long int forword_from_message_id) {
    Message::forword_from_message_id = forword_from_message_id;
}

const string &Message::getForward_signature() const {
    return forward_signature;
}

void Message::setForward_signature(const string &forward_signature) {
    Message::forward_signature = forward_signature;
}

long long int Message::getForward_date() const {
    return forward_date;
}

void Message::setForward_date(long long int forward_date) {
    Message::forward_date = forward_date;
}

const Message &Message::getReply_to_message() const {
    return reply_to_message;
}

void Message::setReply_to_message(const Message &reply_to_message) {
    Message::reply_to_message = reply_to_message;
}

long long int Message::getEdit_date() const {
    return edit_date;
}

void Message::setEdit_date(long long int edit_date) {
    Message::edit_date = edit_date;
}

const string &Message::getAuthor_signature() const {
    return author_signature;
}

void Message::setAuthor_signature(const string &author_signature) {
    Message::author_signature = author_signature;
}

const string &Message::getText() const {
    return text;
}

void Message::setText(const string &text) {
    Message::text = text;
}

const vector &Message::getEntities() const {
    return entities;
}

void Message::setEntities(const vector &entities) {
    Message::entities = entities;
}

const Audio &Message::getAudio() const {
    return audio;
}

void Message::setAudio(const Audio &audio) {
    Message::audio = audio;
}

const Document &Message::getDocumnet() const {
    return documnet;
}

void Message::setDocumnet(const Document &documnet) {
    Message::documnet = documnet;
}

const Game &Message::getGame() const {
    return game;
}

void Message::setGame(const Game &game) {
    Message::game = game;
}

const vector &Message::getPhoto() const {
    return photo;
}

void Message::setPhoto(const vector &photo) {
    Message::photo = photo;
}

const Sticker &Message::getSticker() const {
    return sticker;
}

void Message::setSticker(const Sticker &sticker) {
    Message::sticker = sticker;
}

const Video &Message::getVideo() const {
    return video;
}

void Message::setVideo(const Video &video) {
    Message::video = video;
}

const Voice &Message::getVoice() const {
    return voice;
}

void Message::setVoice(const Voice &voice) {
    Message::voice = voice;
}

const VideoNote &Message::getVideo_note() const {
    return video_note;
}

void Message::setVideo_note(const VideoNote &video_note) {
    Message::video_note = video_note;
}

const string &Message::getCaption() const {
    return caption;
}

void Message::setCaption(const string &caption) {
    Message::caption = caption;
}

const Contact &Message::getContact() const {
    return contact;
}

void Message::setContact(const Contact &contact) {
    Message::contact = contact;
}

const Location &Message::getLocation() const {
    return location;
}

void Message::setLocation(const Location &location) {
    Message::location = location;
}

const Venue &Message::getVenue() const {
    return venue;
}

void Message::setVenue(const Venue &venue) {
    Message::venue = venue;
}

const vector &Message::getNew_chat_members() const {
    return new_chat_members;
}

void Message::setNew_chat_members(const vector &new_chat_members) {
    Message::new_chat_members = new_chat_members;
}

const User &Message::getLeft_chat_member() const {
    return left_chat_member;
}

void Message::setLeft_chat_member(const User &left_chat_member) {
    Message::left_chat_member = left_chat_member;
}

const string &Message::getNew_chat_title() const {
    return new_chat_title;
}

void Message::setNew_chat_title(const string &new_chat_title) {
    Message::new_chat_title = new_chat_title;
}

const vector &Message::getNew_chat_photo() const {
    return new_chat_photo;
}

void Message::setNew_chat_photo(const vector &new_chat_photo) {
    Message::new_chat_photo = new_chat_photo;
}

bool Message::isDelete_chat_photo() const {
    return delete_chat_photo;
}

void Message::setDelete_chat_photo(bool delete_chat_photo) {
    Message::delete_chat_photo = delete_chat_photo;
}

bool Message::isGroup_chat_created() const {
    return group_chat_created;
}

void Message::setGroup_chat_created(bool group_chat_created) {
    Message::group_chat_created = group_chat_created;
}

bool Message::isSuppergroup_chat_created() const {
    return suppergroup_chat_created;
}

void Message::setSuppergroup_chat_created(bool suppergroup_chat_created) {
    Message::suppergroup_chat_created = suppergroup_chat_created;
}

bool Message::isChannel_chat_created() const {
    return channel_chat_created;
}

void Message::setChannel_chat_created(bool channel_chat_created) {
    Message::channel_chat_created = channel_chat_created;
}

long long int Message::getMigrate_to_chat_id() const {
    return migrate_to_chat_id;
}

void Message::setMigrate_to_chat_id(long long int migrate_to_chat_id) {
    Message::migrate_to_chat_id = migrate_to_chat_id;
}

long long int Message::getMigrate_from_chat_id() const {
    return migrate_from_chat_id;
}

void Message::setMigrate_from_chat_id(long long int migrate_from_chat_id) {
    Message::migrate_from_chat_id = migrate_from_chat_id;
}

const Message &Message::getPinned_message() const {
    return pinned_message;
}

void Message::setPinned_message(const Message &pinned_message) {
    Message::pinned_message = pinned_message;
}

const Invoice &Message::getInvoice() const {
    return invoice;
}

void Message::setInvoice(const Invoice &invoice) {
    Message::invoice = invoice;
}

const SuccessfulPayment &Message::getSuccessfulPayment() const {
    return successfulPayment;
}

void Message::setSuccessfulPayment(const SuccessfulPayment &successfulPayment) {
    Message::successfulPayment = successfulPayment;
}
