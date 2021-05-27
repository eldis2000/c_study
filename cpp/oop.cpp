#include<iostream>
#include<list>

using namespace std;

class YouTubeChannel {
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name : " << Name << endl;
        cout << "OwnerName : " << OwnerName << endl;
        cout << "SubscribersCount : " << SubscribersCount << endl;
        cout << "Videos : " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
};

int main()
{
    YouTubeChannel ytChannel("CodeBeauty", "tschoi");
    ytChannel.PublishedVideoTitles.push_back("C++");
    ytChannel.PublishedVideoTitles.push_back("HTML");
    ytChannel.PublishedVideoTitles.push_back("JAVA");

    YouTubeChannel ytChannel2("NewGame", "eldis");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();
}
