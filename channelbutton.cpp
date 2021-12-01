#include "channelbutton.h"

ChannelButton::ChannelButton(QWidget* parent) : QPushButton(parent) {}

void ChannelButton::mediator() {
    emit clicked(text());
}
