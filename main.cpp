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

}

void Color::print() {
    cout << "R: " << r << endl;
    cout << "G: " << g << endl;
    cout << "B: " << b << endl;
}