#pragma once

#include "Decorator.hpp"

class ConcreteDecoratorA : public Decorator
{
public:
    explicit ConcreteDecoratorA(const std::shared_ptr<Component>& new_component);
    [[nodiscard]] std::string operation() const override;
};
