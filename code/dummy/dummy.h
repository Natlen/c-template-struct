#ifndef DUMMY_H
#define DUMMY_H

#include "c_template_struct.h"

TEMPLATE_STRUCT_DECL(Dummy, 
	int m_x; double m_y; void* m_z, 
	int x, double y, void* z);

#endif