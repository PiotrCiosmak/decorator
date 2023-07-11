#pragma once

#include <memory>
#include "Component.hpp"

class Decorator : public Component
{
public:
    explicit Decorator(const std::shared_ptr<Component>& new_component);
    [[nodiscard]] std::string operation() const override;

protected:
    std::shared_ptr<Component> component;
};
