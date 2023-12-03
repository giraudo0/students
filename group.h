// group.h
#include "student.h"

class group
{
  private:
    int id_group;
    int students_quantity;
  public:
    group();
    group(int _id_group, int _students_quantity);
    int get_id_group();
    int get_students_quantity();
    void set_id_group(int _id_group);
    void set_students_quantity(int _students_quantity);
};
