#pragma once

#include "list_interface.h"
#include <initializer_list>
#include <vector>

namespace CC232 {
    template <typename T>
    class vector: public ListInterface<T> {
        std::vector<T> vec;
        public:
            vector() = default;
            vector(std::vector<T>& v): vec(v) {}
            vector(std::initializer_list<T> init): vec(init) {}

            size_t size() const override {
                return vec.size();
            }
            const T& operator[](size_t index) const override {
                return vec[index];
            }
    };
}