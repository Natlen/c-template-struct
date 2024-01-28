#include <stdlib.h>

#include "Dummy.h"

TDummy* Dummy__constructor(int x, double y, void* z)
{
    TDummy* this = new__Dummy();
    this->m_x = x;
    this->m_y = y;
    this->m_z = z;
    return this;
}

TDummy* Dummy__copy_constructor(TDummy* other)
{
    TDummy* this = new__Dummy();
    this->m_x = other->m_x;
    this->m_y = other->m_y;
    this->m_z = other->m_z;
    return this;
}

TDummy* Dummy__move_constructor(TDummy** other)
{
    TDummy* this = *other;
    *other = NULL;
    return this;
}

TDummy* Dummy__distructor(TDummy** this)
{
    free((*this)->m_z);
    free(*this);
    *this = NULL;
    return NULL;
}