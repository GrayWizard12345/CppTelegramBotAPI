cmake_minimum_required(VERSION 3.7)
project(TelegramBotAPI)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Types/User.cpp Types/User.h Types/Chat.cpp Types/Chat.h Types/ChatPhoto.cpp Types/ChatPhoto.h Types/Message.cpp Types/Message.h Types/MessageEntity.cpp Types/MessageEntity.h Types/Audio.cpp Types/Audio.h Types/Document.cpp Types/Document.h Types/Game.cpp Types/Game.h Types/PhotoSize.cpp Types/PhotoSize.h Types/Sticker.cpp Types/Sticker.h Types/Video.cpp Types/Video.h Types/Voice.cpp Types/Voice.h Types/VideoNote.cpp Types/VideoNote.h Types/Contact.cpp Types/Contact.h Types/Location.cpp Types/Location.h Types/Venue.cpp Types/Venue.h Types/Invoice.cpp Types/Invoice.h Types/SuccessfulPayment.cpp Types/SuccessfulPayment.h)
add_executable(TelegramBotAPI ${SOURCE_FILES})