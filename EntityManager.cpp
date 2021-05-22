#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

#include "EntityManager.h"

// Initial amount of entities you can make
Entity *entities = new Entity[100];
// If entity gets destroyed, add its id to be available for creating new entity
std::vector<unsigned> availableId;
// How many entities you actually have
unsigned count = 0;

void create()
{
    unsigned id;

    if (!availableId.empty())
    {
        id = availableId.back();
        availableId.pop_back();
        entities[id].alive = true;
    }
    else
    {
        id = count;
        Entity entity(id);
        entities[id] = entity;
        count++;
    }
}

void remove(Entity entity)
{
    unsigned id = entity.id;
    availableId.push_back(id);

    entities[id].alive = false;
    count--;
}

Entity get(unsigned id)
{
    return entities[id];
}

void changeComponentBits(unsigned id)
{
    entities[id].componentBits = entities[id].componentBits ^ (unsigned)pow(2, 0);
}