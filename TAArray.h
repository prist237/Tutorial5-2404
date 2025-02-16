#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"
#include <vector>

class TAArray {
private:
    std::vector<TextArea*> array;

public:
    // Constructor
    TAArray() {}

    // Destructor
    ~TAArray() {
        for (TextArea* ta : array) {
            delete ta;
        }
    }

    // Add at the back
    void add(TextArea* ta) {
        array.push_back(ta);
    }

    // Add at index
    bool add(TextArea* ta, int index) {
        if (index < 0 || index > array.size()) return false;
        array.insert(array.begin() + index, ta);
        return true;
    }

    // Remove by index
    TextArea* remove(int index) {
        if (index < 0 || index >= array.size()) return nullptr;
        TextArea* removed = array[index];
        array.erase(array.begin() + index);
        return removed;
    }

    // Remove by id
    TextArea* remove(const std::string& id) {
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
    TextArea* get(int index) const {
        if (index < 0 || index >= array.size()) return nullptr;
        return array[index];
    }

    // Get by id
    TextArea* get(const std::string& id) const {
        for (TextArea* ta : array) {
            if (ta->getId() == id) return ta;
        }
        return nullptr;
    }

    // Get size
    int getSize() const {
        return array.size();
    }
};

#endif
