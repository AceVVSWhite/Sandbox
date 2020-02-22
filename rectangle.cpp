#include <iostream>

using namespace std;


 /* Create classes Rectangle and RectangleArea
 */
using namespace std;

class Rectangle{
public:
void display();
protected:
int width;
int height; 
private:
};

class RectangleArea : public Rectangle{
public:
void read_input();
void display();
void setHW();
protected:
private:
int w;
int h;
};

void Rectangle :: display(){
cout << height << " " 
     << width << endl;
}

void RectangleArea :: read_input(){
height = 1;
width = 1;

int height_temp = 0;
int width_temp = 0;

cin >> height_temp >> width_temp;

 if (height_temp >= 1 && height_temp <= 100){
 height = height_temp;
 }

 if (width_temp >= 1 && width_temp <= 100){
 width = width_temp;
 }

 setHW();
}

void RectangleArea :: setHW(){
h = height;
w = width;
}

void RectangleArea :: display(){
cout << h * w << endl;
}



int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
