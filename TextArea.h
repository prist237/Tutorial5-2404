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
    TextArea(Rectangle rect, std::string id, std::string text,
             RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());

    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;
    std::string getId() const;
    std::string getText() const;
    
    void print() const;
};

#endif
