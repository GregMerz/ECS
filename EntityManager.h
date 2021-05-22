#ifndef ENTITYMANAGER
#define ENTITYMANAGER

struct Entity
{
    unsigned id;
    bool alive;
    unsigned componentBits;

    Entity() : alive(false), componentBits(0){};
    Entity(unsigned m_id) : id(m_id), alive(true), componentBits(0){};
};

void create();

void remove(Entity entity);

Entity get(unsigned id);

void changeComponentBits(unsigned id);

#endif