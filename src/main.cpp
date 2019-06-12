#include <iostream>
#include "Mqtt.h"

int main() {

    /**
     *  List in which all subscription topics are stored that the broker should subscribe too
     */
    vector<string> subscription_topic_list;
    subscription_topic_list.push_back("subscribe/test");
    subscription_topic_list.push_back("subscribe/test2");

    /*
     * Create a new Client named "pc-client" that publishes on "publish/test".
     * This broker has the IP address "192.168.1.100" and the port 1883.
     * The username is set to "user" whith password "passw0rd"
     */
    Mqtt *mqtt = new Mqtt("pc-client", "publish/test", subscription_topic_list, "192.168.1.30", 1883, "user", "passw0rd");

    // If you don't want to use credentials, use this function
    // Mqtt *mqtt = new Mqtt("pc-client", "publish/test", subscription_topic_list, "192.168.1.30", 1883);

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
