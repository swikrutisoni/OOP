#include <iostream>
using namespace std;

class MessageService {
public:
    virtual void sendMessage() = 0;
};

class Email : public MessageService {
public:
    void sendMessage() override {
        cout << "Sending Email";
    }
};

class SMS : public MessageService {
public:
    void sendMessage() override {
        cout << "Sending SMS";
    }
};

class Notification {
    MessageService* service;

public:
    Notification(MessageService* s) {
        service = s;
    }

    void notify() {
        service->sendMessage();
    }
};

int main() {
    Email e;
    Notification n(&e);
    n.notify();

    return 0;
}