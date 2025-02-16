#include "TAArray.h"

// Default constructor
TAArray::TAArray() {}

// Destructor
TAArray::~TAArray() {
    for (TextArea* ta : array) {
        delete ta;
    }
}

// Add at the back
void TAArray::add(TextArea* ta) {
    array.push_back(ta);
}

// Add at index
bool TAArray::add(TextArea* ta, int index) {
    if (index < 0 || index > array.size()) return false;
    array.insert(array.begin() + index, ta);
    return true;
}

// Remove by index
TextArea* TAArray::remove(int index) {
    if (index < 0 || index >= array.size()) return nullptr;
    TextArea* removed = array[index];
    array.erase(array.begin() + index);
    return removed;
}

// Remove by id
TextArea* TAArray::remove(const std::string& id) {
    for (auto it = array.begin(); it != array.end(); ++it) {
        if ((*it)->getId() == id) {
            TextArea* removed = *it;
            array.erase(it);
            return removed;
        }
    }
    return nullptr;
}

// Get by index
TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= array.size()) return nullptr;
    return array[index];
}

// Get by id
TextArea* TAArray::get(const std::string& id) const {
    for (TextArea* ta : array) {
        if (ta->getId() == id) return ta;
    }
    return nullptr;
}

// Get size
int TAArray::getSize() const {
    return array.size();
}
