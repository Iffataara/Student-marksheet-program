#include <iostream>
using namespace std;
struct student
{
  string name;
  int totalSubjects;
  float marks[20];
  int rollno;
};

string sub[3] = {"Maths", "Science", "English"};


void printStudentDetails(student students[], int totalStudents)
{

  for (int i = 0; i < totalStudents; i++)
  {
  	float sum = 0;
    cout << "Student name : " << students[i].name << endl;
    cout << "Marks :" << endl;
    for (int j = 0; j < 3;j++)
    {
      cout << students[i].marks[j] << endl;
      sum+=students[i].marks[j];
    }
      cout<<"Total marks: "<<sum<<endl;
  }
}
int main()
{
  int totalStudents;
  cout << "Enter total number of students : ";
  cin >> totalStudents;

  student studentArray[totalStudents];

  for (int i = 0; i < totalStudents; i++)
  {
    cout << "Enter the name of student " << (i + 1) << " : " << endl;
    cin >> studentArray[i].name;
    cout << "Enter your Roll no: ";
    cin >> studentArray[i].rollno;
    for (int j = 0; j <3;j++)
    {
      cout << "Enter marks for subject " << (j + 1) << " : " << endl;
      cin >> studentArray[i].marks[j];
    }
  }
  printStudentDetails(studentArray, totalStudents);
}
