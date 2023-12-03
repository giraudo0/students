// student.h
#pragma once
#include <iostream>
#include <vector>
using namespace std;

class student
{
  private:
    int id;
    string name;
    string email;
    vector<double> ratings;
  public:
    student();
    student(int _id, string _name, string _email);
    int get_id();
    string get_name();
    string get_email();
    void set_id(int _id);
    void set_name(string _name);
    void set_email(string _email);
    void set_ratings(vector<double> _ratings);
    void print_ratings();
    double average_rating();
    int approved_courses();
    int failed_courses();
    double best_rating();
    double worst_rating();
};
