#include "../include/Decorator.hpp"

Decorator::Decorator(const std::shared_ptr<Component>& new_component) : component{new_component}
{}

std::string Decorator::operation() const
{
    return this->component->operation();
}
