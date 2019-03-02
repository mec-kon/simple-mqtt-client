#include <iostream>
#include "Mqtt.h"

int main() {

    vector<string> subscription_topic_list;
    subscription_topic_list.push_back("subscribe/test");
    subscription_topic_list.push_back("subscribe/test2");

    Mqtt *mqtt = new Mqtt("pc-client", "publish/test", subscription_topic_list, "192.168.1.141", 1883);
    mqtt->publish("publish works");
    mqtt->subscribe();

    cout << "type quit to quit" << endl;
    string in;
    do {
     cin >> in;
    }while (in != "quit");

    delete mqtt;

    return 0;
}