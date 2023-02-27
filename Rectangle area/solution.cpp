//https://www.hackerrank.com/challenges/rectangle-area/problem?isFullScreen=true
#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int width,height;
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea : public Rectangle{
    public:
    void read_input(){
       cin>>width;
       cin>>height;
    }
    void display(){
        cout<<width*height;
    }
    
};
