#ifndef OOC_TEMPLATE_STRUCT_H
#define OOC_TEMPLATE_STRUCT_H

/*
    @name:          
    @brief:         
    @param[in]:     
    @param[in]:     
    @param[in]:     
    @param[out]:    
    @return:        
    @pre:           
    @post:          
*/

/*
    @name:          TEMPLATE_STRUCT_DECL
    @brief:         macro expanding into an OOC designed structure declaration.
    @param[in]:     struct_name -   desired structure's name >> without '"'.
    @param[in]:     data_memebers - structure's data members separated by ';' >> ex - "int m_a; double m_b".
    @param[in]:     ... -           structure's data parameters separated by ',' >> ex - "int a, double b".
    @param[out]:    none.
    @return:        void.
    @pre:           none.
    @post:          none.
*/
#define TEMPLATE_STRUCT_DECL(struct_name, data_memebers, ...)   \
    typedef struct S##struct_name{ \
        data_memebers;    \
    }T##struct_name;   \
    \
    TEMPLATE_STRUCT_FUNC_DECL(struct_name, __VA_ARGS__);   \


/*
    @name:          TEMPLATE_STRUCT_FUNC_DECL
    @brief:         macro expanding into an OOC designed structure related basic OO functions declaration.
    @param[in]:     type - structure's type name
    @param[in]:     ... - structure's data parameters separated by ',' >> ex - "int a, double b".
    @param[out]:    none.
    @return:        none.
    @pre:           none.
    @post:          none.
*/
#define TEMPLATE_STRUCT_FUNC_DECL(type, ...) \
    T##type* type##__constructor(__VA_ARGS__);    \
    T##type* type##__copy_constructor(T##type* other); \
    T##type* type##__move_constructor(T##type** other); \
    T##type* type##__distructor(T##type** this);  \
    T##type* type__##equ(T##type* this, T##type* other);   \
    inline T##type* new__##type() { return malloc(sizeof(T##type)); };  \

#endif