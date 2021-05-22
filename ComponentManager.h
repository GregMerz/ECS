#ifndef COMPONENTMANAGER
#define COMPONENTMANAGER

#include "EntityManager.h"

struct Transform
{
    float x;
    float y;
    float z;

    Transform() : x(0.0f), y(0.0f), z(0.0f){};
    Transform(float m_x, float m_y, float m_z) : x(m_x), y(m_y), z(m_z){};
};

struct Sprite
{
};

void addComponent(Entity e, Transform component, char *componentType);

// template <class Component>
// void removeComponent(Entity e, char *componentType);

#endif