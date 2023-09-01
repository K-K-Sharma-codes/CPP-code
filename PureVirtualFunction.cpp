#include<iostream>
using namespace std;
class Jack{
    protected:
    string title;
    float rating;
    public:
    Jack(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display() = 0;// do- nothing function-> pure virtual function
};
class JackVideo: public Jack{
    float VideoLength;
    public:
    JackVideo(string s, float r, float vl):Jack(s, r){
        VideoLength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<< " out of 5 stars "<<endl;
        cout<<"Length of this video is: "<<VideoLength<<" minutes "<<endl;
    }

};
class JackText: public Jack
{
    int words;
    public:
    JackText(string s, float r, int wc):Jack(s, r){
        words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<< " out of 5 stars "<<endl;
        cout<<"No. of words in this text tutorial is: "<<words<<" words "<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // For video
    title = "Art Integrated Project";
    vlen = 4.56;
    rating = 4.89;
    JackVideo aipVideo(title, rating, vlen);
    //aipVideo.display();
    // For text
    title = "Art Integrated Text";
    words = 433;
    rating = 4.19;
    JackText aipText(title, rating, words);
    //aipText.display();

    Jack * tuts[2];
    tuts[0] = &aipVideo;
    tuts[1] = &aipText;

    tuts[0] -> display();
    tuts[1] -> display();

    return 0;
    
}