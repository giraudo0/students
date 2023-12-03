// main.cpp
#include "student.h"
#include "group.h"

int main(void)
{
  cout << "-- -- Sistema Escolar -- --" << endl;

  //student student0(222, "David Coperfield", "dcoper@yahoo.com");
  //cout << student0.get_id() << endl;
  //cout << student0.get_name() << endl;
  //cout << student0.get_email() << endl;
  //cout << endl;

  student student1;
  //cout << student1.get_id() << endl;
  //student1.set_id(111);
  //cout << student1.get_id() << endl;
  //cout << student1.get_name() << endl;
  //student1.set_name("Sharon Stone");
  //cout << student1.get_name() << endl;
  //cout << student1.get_email() << endl;
  //student1.set_email("sstone@gmail.com");
  //cout << student1.get_email() << endl;

  student1.set_ratings({8, 9, 7, 10, 6, 8, 9, 8});
  student1.print_ratings();
  //cout << student1.average_rating() << endl;
  //cout << student1.approved_courses() << endl;
  //cout << student1.failed_courses() << endl;
  //cout << student1.best_rating() << endl;
  //cout << student1.worst_rating() << endl;
  cout << "¿Estudiante regular?: ";
  cout << student1.student_regular() << endl;

  //group group0;
  //cout << group0.get_id_group() << endl;
  //group0.set_id_group(401);
  //cout << group0.get_id_group() << endl;
  //cout << group0.get_students_quantity() << endl;
  //group0.set_students_quantity(25);
  //cout << group0.get_students_quantity() << endl;
  //cout << endl;

  //group group1(501, 30);
  //cout << group1.get_id_group() << endl;
  //cout << group1.get_students_quantity() << endl;

  return 0;
}
