#include <iostream>
#include <vector>
#include <math.h>

#include "ComponentManager.h"

Transform *transformComponents = new Transform[100];
Sprite *spriteComponents = new Sprite[100];

void addComponent(Entity e, Transform component, char *componentType)
{
    // switch (componentType)
    // {
    // case "transform":
    transformComponents[e.id] = component;
    changeComponentBits(e.id);
    //     break;
    // case "sprite":
    //     spriteComponents[e.id] = component;
    //     e.componentBits = e.componentBits | (unsigned)pow(2, 1);
    //     break;
    // default:
    //     std::cout << "No component added. Make sure to input a valid component to add." << std::endl;
    //     break;
    // }
}

// template <class Component>
// void removeComponent(Entity e, char *componentType)
// {
//     switch (componentType)
//     {
//     case "transform":
//         e.componentBits = e.componentBits ^ (unsigned)pow(2, 0);
//         break;
//     case "sprite":
//         e.componentBits = e.componentBits ^ (unsigned)pow(2, 1);
//         break;
//     default:
//         std::cout << "No component removed. Make sure to input a valid component to remove." << std::endl;
//         break;
//     }
// }