#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Rating : " << rating << "out of 5 stars" << endl;
        cout << "Lenght of this video is : " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Rating of this text tutorial : " << rating << " out of 5 stars" << endl;
        cout << "No of this words in text is : " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = " This is React tutorial...";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo video(title, rating, vlen);
    // video.display();

    // for CWH text
    title = " This is React tutorial text...";
    words = 500;
    rating = 4.19;
    CWHText text(title, rating, words);
    text.display();

    CWH* tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}