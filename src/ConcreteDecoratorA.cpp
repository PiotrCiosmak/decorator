#include "../include/ConcreteDecoratorA.hpp"

ConcreteDecoratorA::ConcreteDecoratorA(const std::shared_ptr<Component>& new_component)
        : Decorator{new_component}
{}

std::string ConcreteDecoratorA::operation() const
{
    return "ConcreteDecoratorA(" + Decorator::operation() + ")";
}

