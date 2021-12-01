#ifndef CHANNELBUTTON_H
#define CHANNELBUTTON_H

#include <QPushButton>

class ChannelButton : public QPushButton
{
    Q_OBJECT
public:
    ChannelButton(QWidget* parent);
    virtual ~ChannelButton() = default;

public slots:
    void mediator();

signals:
    void clicked(const QString&);
};

#endif // CHANNELBUTTON_H
