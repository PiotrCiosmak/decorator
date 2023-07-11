#include "../include/ConcreteDecoratorB.hpp"

ConcreteDecoratorB::ConcreteDecoratorB(const std::shared_ptr<Component>& new_component)
        : Decorator{new_component}
{}

std::string ConcreteDecoratorB::operation() const
{
    return "ConcreteDecoratorB(" + Decorator::operation() + ")";
}

