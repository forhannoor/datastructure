#include "itemtype.h"

ItemType::ItemType()
{
    value = 0;
}

void ItemType::initialize(int v)
{
    value = v;
}

void ItemType::print()
{
    printf("%d ", value);
}

int ItemType::getValue()
{
    return value;
}