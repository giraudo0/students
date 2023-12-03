// group.cpp
#include "group.h"

group::group()
{
  id_group = 0;
  students_quantity = 0;
}

group::group(int _id_group, int _students_quantity)
{
  id_group = _id_group;
  students_quantity = _students_quantity;
}

int group::get_id_group()
{
  return id_group;
}

int group::get_students_quantity()
{
  return students_quantity;
}

void group::set_id_group(int _id_group)
{
  id_group = _id_group;
}

void group::set_students_quantity(int _students_quantity)
{
  students_quantity = _students_quantity;
}
