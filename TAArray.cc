#include "TAArray.h"

// Constructor
TAArray::TAArray() {}

// Destructor
TAArray::~TAArray() {
    for (TextArea* ta : textAreas) {
        delete ta;
    }
    textAreas.clear();
}

// Add a TextArea at the end
void TAArray::add(TextArea* ta) {
    textAreas.push_back(ta);
}

// Add a TextArea at a specific index
bool TAArray::add(TextArea* ta, int index) {
    if (index < 0 || index > textAreas.size()) {
        return false;
    }
    textAreas.insert(textAreas.begin() + index, ta);
    return true;
}

// Remove by index
TextArea* TAArray::remove(int index) {
    if (index < 0 || index >= textAreas.size()) {
        return nullptr;
    }
    TextArea* ta = textAreas[index];
    textAreas.erase(textAreas.begin() + index);
    return ta;
}

// Remove by ID
TextArea* TAArray::remove(const std::string& id) {
    for (auto it = textAreas.begin(); it != textAreas.end(); ++it) {
        if ((*it)->getId() == id) {
            TextArea* ta = *it;
            textAreas.erase(it);
            return ta;
        }
    }
    return nullptr;
}

// Get by index
TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= textAreas.size()) {
        return nullptr;
    }
    return textAreas[index];
}

// Get by ID
TextArea* TAArray::get(const std::string& id) const {
    for (TextArea* ta : textAreas) {
        if (ta->getId() == id) {
            return ta;
        }
    }
    return nullptr;
}

// Get size
int TAArray::getSize() const {
    return textAreas.size();
}

