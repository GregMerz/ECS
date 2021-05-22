#include <iostream>
#include <stdlib.h>

#include "EntityManager.h"
#include "ComponentManager.h"
#include "SystemManager.h"

int main()
{
    for (int i = 0; i < 10; i++)
    {
        create();
    }

    char *component = new char[9];
    component[0] = 't';
    component[1] = 'r';
    component[2] = 'a';
    component[3] = 'n';
    component[4] = 's';
    component[5] = 'f';
    component[6] = 'o';
    component[7] = 'r';
    component[8] = 'm';
    component[9] = '\0';

    Transform transform(1.0f, 0.1f, 2.0f);

    addComponent(get(4), transform, component);

    create();
}