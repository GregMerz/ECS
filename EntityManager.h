#ifndef ENTITYMANAGER
#define ENTITYMANAGER

struct Entity
{
    unsigned id;
    bool alive;

    Entity() : alive(false){};
    Entity(unsigned m_id) : id(m_id), alive(true){};
};

void create();

void remove(Entity entity);

Entity get(unsigned id);

#endif