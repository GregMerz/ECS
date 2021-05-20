#include <iostream>
#include <stdlib.h>
#include <vector>

#include "EntityManager.h"

Entity *entities = new Entity[100];
std::vector<unsigned> availableEntities;
unsigned count = 0;
unsigned nextId = 0;

void create()
{
    unsigned id;

    if (!availableEntities.empty())
    {
        id = availableEntities.back();
        availableEntities.pop_back();
    }
    else
    {
        id = nextId;
        nextId++;
    }

    Entity entity(id);
    entities[id] = entity;
    count++;
}

void remove(Entity entity)
{
    unsigned id = entity.id;
    availableEntities.push_back(id);

    entities[id].alive = false;
    count--;
}

Entity get(unsigned id)
{
    return entities[id];
}