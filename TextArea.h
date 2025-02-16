#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <iostream>
#include <string>
#include "RGB.h"
#include "defs.h"

class TextArea {
private:
    Rectangle rect;
    std::string text, id;
    RGB fill, border;

public:
    // Constructor with Rectangle
    TextArea(Rectangle rect, std::string id, std::string text,
             RGB fill = RGB::WHITE(), RGB border = RGB::BLACK())
        : rect(rect), id(id), text(text), fill(fill), border(border) {}

    // Getters
    int getX() const { return rect.x; }
    int getY() const { return rect.y; }
    int getWidth() const { return rect.width; }
    int getHeight() const { return rect.height; }
    std::string getId() const { return id; }
    std::string getText() const { return text; }

    // Print function
    void print() const {
        std::cout << "TextArea id: " << id << std::endl;
        std::cout << "Preferred location: " << rect.x << ", " << rect.y << std::endl;
        std::cout << "Size: " << rect.width << ", " << rect.height << std::endl;
        std::cout << "Text: " << text << std::endl;
    }
};

#endif
