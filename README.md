This project uses macros to declare a tempalte-like (mimics the c equivalent of template in c++) struct and its basic functionality, considering OOC design.

for ussage see -
Dummy/
  - dummy.h
  - dummy.c


1. create your struct's .h & .c files.
2. within you .h file - call TEMPLATE_SRUCT_DECL(struct_name, type1 arg1**;** typeN argN, type1 arg1**,** typeN argN)
3. the macro will expand into a declaration of your struct and basic OOC functions.

The Struct name is S<struct_name> and its type definition is T<struct_name>
The related functions names will begin with <struct_name>__
