#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"
#include <vector>

class TAArray {
private:
    std::vector<TextArea*> textAreas;

public:
    TAArray();
    ~TAArray();

    void add(TextArea* ta);
    bool add(TextArea* ta, int index);
    TextArea* remove(int index);
    TextArea* remove(const std::string& id);
    TextArea* get(int index) const;
    TextArea* get(const std::string& id) const;
    int getSize() const;
};

#endif
