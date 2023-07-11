#pragma once

#include "Decorator.hpp"

class ConcreteDecoratorB : public Decorator
{
public:
    explicit ConcreteDecoratorB(const std::shared_ptr<Component>& new_component);
    [[nodiscard]] std::string operation() const override;
};
