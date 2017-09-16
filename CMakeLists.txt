cmake_minimum_required(VERSION 3.7)
project(TelegramBotAPI)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Types/Sources/User.cpp Types/Headers/User.h Types/Sources/Chat.cpp Types/Headers/Chat.h Types/Sources/ChatPhoto.cpp Types/Headers/ChatPhoto.h Types/Sources/Message.cpp Types/Headers/Message.h Types/Sources/MessageEntity.cpp Types/Headers/MessageEntity.h Types/Sources/Audio.cpp Types/Headers/Audio.h Types/Sources/Document.cpp Types/Headers/Document.h Types/Sources/Game.cpp Types/Headers/Game.h Types/Sources/PhotoSize.cpp Types/Headers/PhotoSize.h Types/Sources/Sticker.cpp Types/Headers/Sticker.h Types/Sources/Video.cpp Types/Headers/Video.h Types/Sources/Voice.cpp Types/Headers/Voice.h Types/Sources/VideoNote.cpp Types/Headers/VideoNote.h Types/Sources/Contact.cpp Types/Headers/Contact.h Types/Sources/Location.cpp Types/Headers/Location.h Types/Sources/Venue.cpp Types/Headers/Venue.h Types/Sources/Invoice.cpp Types/Headers/Invoice.h Types/Sources/SuccessfulPayment.cpp Types/Headers/SuccessfulPayment.h)
add_executable(TelegramBotAPI ${SOURCE_FILES})