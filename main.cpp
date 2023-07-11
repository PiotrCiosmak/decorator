#include <iostream>
#include <memory>
#include "include/Component.hpp"
#include "include/ConcreteComponent.hpp"
#include "include/ConcreteDecoratorA.hpp"
#include "include/ConcreteDecoratorB.hpp"

void clientCode(const std::shared_ptr<Component>& component);

int main()
{
    std::shared_ptr<Component> simple_component = std::make_shared<ConcreteComponent>();
    std::cout << "Client: I've got a simple component:" << std::endl;
    clientCode(simple_component);

    std::shared_ptr<Component> decorator1 = std::make_shared<ConcreteDecoratorA>(simple_component);
    std::shared_ptr<Component> decorator2 = std::make_shared<ConcreteDecoratorB>(decorator1);
    std::cout << "\n\nClient: Now I've got a decorated component:" << std::endl;
    clientCode(decorator2);
}

void clientCode(const std::shared_ptr<Component>& component)
{
    std::cout << "RESULT: " << component->operation();
}