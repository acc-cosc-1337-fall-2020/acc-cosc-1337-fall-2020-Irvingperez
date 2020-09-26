//cpp
#include "decision.h"

using std::string;

string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;
    if(grade > 90 && grade < 100)
    {
        letter_grade = "A";

    }
    else if (grade > 79 && grade < 90)
    {
        letter_grade = "B";

    }
    else if (grade > 69 && grade <80)
    {
        letter_grade = "C";

    }
    else if (grade > 59 && grade <70)
    {
        letter_grade = "D";

    }
    else
    {
        letter_grade = "F";
    }
    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
    std::string grade_switch;
    grade = grade / 10;

    switch(grade)
    {
      case 9:
      grade_switch = "A";
      break;
      case 10:
      grade_switch = "A";
      break;
      case 8:
      grade_switch = "B";
      break;
      case 7:
      grade_switch = "C";
      break;
      case 6:
      grade_switch = "D";
      break;
      default:
      grade_switch = "F";
      break;

      return grade_switch;


    }
}