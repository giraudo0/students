// student.cpp
#include "student.h"

student::student()
{
  id = 0;
  name = "";
  email = "";
}

student::student(int _id, string _name, string _email)
{
  id = _id;
  name = _name;
  email = _email;
}

int student::get_id()
{
  return id;
}

string student::get_name()
{
  return name;
}

string student::get_email()
{
  return email;
}

void student::set_id(int _id)
{
  id = _id;
}

void student::set_name(string _name)
{
  name = _name;
}

void student::set_email(string _email)
{
  email = _email;
}

void student::set_ratings(vector<double> _ratings)
{
  ratings = _ratings;
}

void student::print_ratings()
{
  for(double rate: ratings)
    cout << rate << " ";
  cout << endl;
}

double student::average_rating()
{
  double _average = 0.0;
  for(double rate: ratings)
    _average += rate;
  _average /= ratings.size();
  return _average;
}

int student::approved_courses()
{
  int _approved = 0;
  for(double rate: ratings)
  {
    if(rate >=7)
      _approved++;
  }
  return _approved;
}

int student::failed_courses()
{
  int _failed = 0;
  for(double rate: ratings)
  {
    if(rate <7)
      _failed++;
  }
  return _failed;
}

double student::best_rating()
{
  double _best = ratings[0];
  for(int i=1; i < ratings.size(); i++)
  {
    if(ratings[i] > _best)
      _best = ratings[i];
  }
  return _best;
}

double student::worst_rating()
{
  double _worst = ratings[0];
  for(int i=1; i < ratings.size(); i++)
  {
    if(ratings[i] < _worst)
      _worst = ratings[i];
  }
  return _worst;
}
