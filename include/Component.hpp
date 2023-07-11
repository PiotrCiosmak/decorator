#pragma once

#include <string>

class Component
{
public:
    [[nodiscard]] virtual std::string operation() const = 0;
    virtual ~Component() = default;
};
