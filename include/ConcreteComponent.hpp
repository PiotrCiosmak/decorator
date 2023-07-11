#pragma once

#include "Component.hpp"

class ConcreteComponent : public Component
{
public:
    [[nodiscard]] std::string operation() const override;
};
