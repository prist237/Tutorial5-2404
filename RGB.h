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

    static RGB WHITE() { return RGB(255, 255, 255); }
    static RGB BLACK() { return RGB(0, 0, 0); }
    static RGB RED() { return RGB(255, 0, 0); }
    static RGB GREEN() { return RGB(0, 255, 0); }
    static RGB BLUE() { return RGB(0, 0, 255); }
};

#endif
