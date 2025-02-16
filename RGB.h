#ifndef RGB_H
#define RGB_H

class RGB {
private:
    int red, green, blue;

public:
    RGB(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Declare (but don’t define) static methods
    static RGB WHITE();
    static RGB BLACK();
    static RGB RED();
    static RGB GREEN();
    static RGB BLUE();
};

#endif
