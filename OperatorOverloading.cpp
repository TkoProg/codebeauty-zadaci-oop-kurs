#include <iostream>
#include <string>
#include <list>

using namespace std;

class YouTubeChannel {
public:
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==(const YouTubeChannel &channel) const { // const goes here because we NEED to make sure that the program won't change this, only check
        return this->Name==channel.Name;
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
    COUT<<"Name: "<<ytChannel.Name<<endl;
    COUT<<"Subscribers: "<<ytChannel.SubscribersCount<<endl;
    return COUT;
}

class MyCollection {
public:
    list<YouTubeChannel> myChannels;
    void operator+=(YouTubeChannel& channel) {
        this->myChannels.push_back(channel);
    }
    void operator-=(YouTubeChannel& channel) {
        this->myChannels.remove(channel);
    }
};

ostream &operator<<(ostream& COUT, MyCollection &myCollection) {
    for(YouTubeChannel ytChannel:myCollection.myChannels)
        cout<<ytChannel<<endl;
    return COUT;
}

int main() {
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
    YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);
    // cout<<yt1<<yt2;
    // operator<<(cout, yt1);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout<<myCollection;

    return 0;
}