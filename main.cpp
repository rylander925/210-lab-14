/*
COMSC-210 | Lab 14 | Rylan Der
IDE Used: Visual Studio Code
*/

#include <iostream>

using namespace std;

class Color {
    public:
        //getters & setters
        void setR(int r) { this->r = r; }
        void setG(int g) { this->g = g; }
        void setB(int b) { this->b = b; }
        int getR() const { return r; }
        int getG() const { return g; }
        int getB() const { return b; }

        /**
         * Prints color RGB values
         */
        void print();

    private:
        int r;
        int g;
        int b;
};

int main() {
    Color red, orange, yellow, green, blue, purple, white, black;
    red.setR(255);

    orange.setR(255);
    orange.setG(150);

    yellow.setR(200);
    yellow.setG(255);

    green.setG(255);

    blue.setB(255);

    purple.setR(175);
    purple.setB(175);

    white.setR(255);
    white.setG(255);
    white.setB(255);

    red.print();
    orange.print();
    yellow.print();
    green.print();
    blue.print();
    purple.print();
    white.print();
    black.print();
}

void Color::print() {
    cout << "R: " << r << endl;
    cout << "G: " << g << endl;
    cout << "B: " << b << endl;
    cout << endl;
}