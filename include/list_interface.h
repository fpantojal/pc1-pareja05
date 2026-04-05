#pragma once

#include <cstddef>

template <typename T>
class ListInterface {
    public:
        virtual size_t size() const = 0;
        virtual const T& operator[](size_t index) const = 0;
};