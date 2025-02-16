#include "TextArea.h"

// Constructor
TextArea::TextArea(Rectangle rect, std::string id, std::string text, RGB fill, RGB border)
    : rect(rect), id(id), text(text), fill(fill), border(border) {}

// Getters
int TextArea::getX() const { return rect.x; }
int TextArea::getY() const { return rect.y; }
int TextArea::getWidth() const { return rect.width; }
int TextArea::getHeight() const { return rect.height; }
std::string TextArea::getId() const { return id; }
std::string TextArea::getText() const { return text; }

// Print function
void TextArea::print() const {
    std::cout << "TextArea id: " << id << std::endl;
    std::cout << "Preferred location: " << rect.x << ", " << rect.y << std::endl;
    std::cout << "Size: " << rect.width << ", " << rect.height << std::endl;
    std::cout << "Text: " << text << std::endl;
}
