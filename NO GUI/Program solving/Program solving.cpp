#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream> 
#include <fstream>
using namespace std;

class Course {
public:
    Course(string code, string name, string creditHours,
        string prereqs, string major, string specialty, string lecday, int lecperiod, string labday, int labperiod)
    {
        code_ = code;
        name_ = name;
        creditHours_ = creditHours;
        prerequisiteCourses =  prereqs ;
        major_ = major;
        specialty_ = specialty;
        lecday_ = lecday;
        lecperiod_ = lecperiod;
        labday_ = labday;
        labperiod_ = labperiod;

    }

    string getCode() const
    {
        return code_;
    }
    string getlecday() const
    {
        return lecday_;
    }
    string getlabday() const
    {
        return labday_;
    }
    string getName() const
    {
        return name_;
    }
    string getCreditHours() const
    {
        return creditHours_;
    }
    int getlecperiod() const
    {
        return lecperiod_;
    }
    int getlabperiod() const
    {
        return labperiod_;
    }
   string getPrereqs() const
    {
        return prerequisiteCourses;
    }
    string getMajor() const
    {
        return major_;
    }
    string getSpecialty() const
    {
        return specialty_;
    }
 
private:
    string code_;
    string name_;
    string creditHours_;
    string prerequisiteCourses;
    string major_;
    string specialty_;
    string lecday_;
    int lecperiod_;
    string labday_;
    int labperiod_;
};


bool isPeriodBusy(double existingPeriod, double newPeriod, double duration) {
    double existingEnd = existingPeriod + duration;
    double newEnd = newPeriod + duration;

if ((newPeriod >= existingPeriod && newPeriod < existingEnd) ||
    (existingPeriod >= newPeriod && existingPeriod < newEnd)) {
    return true;
}

return false;
}
bool isdigit2(string x) {
    for (char c : x) {
        if (!isdigit(c)) 
            return false;
        return true;
    }
 
}
//---------------------------------------------------------
int main()
{
    ofstream type("Student2.txt", ios::app);
    ifstream read("Student.txt");
    ifstream read2("Finish.txt");
    unordered_map<string, Course*> courses;
    bool program = true;
    vector<Course*> allCourses;

    string fullid2[6], name[6], gpa[6], credithours[6];
    for (int i = 0; i < 6; i++) {
        getline(read, fullid2[i]);
        getline(read, name[i]);
        getline(read, gpa[i]);
        getline(read, credithours[i]);
    }
    vector<vector<string>> finishedPrerequisites(6);
    finishedPrerequisites[0] = { "--" };
    finishedPrerequisites[1] = { "SWE 110" };
    finishedPrerequisites[2] = { "SWE 110", "SWE 111" };
    finishedPrerequisites[3] = { "SWE 110", "SWE 111", "SWE 211" };
    finishedPrerequisites[4] = { "SWE 110", "SWE 111", "SWE 211", "SWE 320" };
    finishedPrerequisites[5] = { "SWE 110", "SWE 111", "SWE 211" };

    bool isValidCourse;
    while (program) {
        int pin;
        string YID, ID, pintest;
        cout << "Hello , May you please enter the password : ";
        cin >> pin;
        if (cin.fail()) {
            cout << "Wrong Input" << std::endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter the password again: ";
            cin >> pin;
       }

        if (pin != 1234) {
            cout << "Hello, Student May you please enter your year followed by your id" << endl;
            cout << "Year ID : ";
            cin >> YID;
           
            cout << "ID : ";
            cin >> ID;
            string fullid = YID + '/' + ID;
            string name1, id1, gpa1, ch1;
            int checker = 0;

            bool idfound = false, idcheck = false;
            for (int i = 0; i < 6; i++) {
                {
                    if (fullid == fullid2[i]) {
                        cout << "Your ID : " << fullid2[i] << "  Your Name : " << name[i] << "\nYour GPA : " << gpa[i] << "  CreditHours Completed : " << credithours[i] << endl;
                        name1 = name[i];
                        gpa1 = gpa[i];
                        id1 = fullid2[i];
                        ch1 = credithours[i];
                        checker = i;

                        idfound = true;
                        idcheck = true;
                        break;
                    }

                }

            }
            if (!idcheck) {
                cout << "ID incorrect " << endl;
            }
//---------------------------------------------------------
            if (idfound) {
                cout << "The courses will be displayed infront of you please start choosing the courses to make your schedule" << endl;
                int courseIndex = 1;
                bool anyCourseAdded = false;
                for (auto it = courses.begin(); it != courses.end(); ++it) {
                    if (!it->second) {
                        continue;
                    }
                    if (isValidCourse) {
                        cout << "Course " << courseIndex << " Code " << it->first << ", Course Name " << it->second->getName() << ", Course Lec Day& Period " << it->second->getlecday() << " From " << it->second->getlecperiod() << " To " << (it->second->getlecperiod() + 1.5) << ", Course Lab Day& Period " << it->second->getlabday() << " From " << it->second->getlabperiod() << " To " << (it->second->getlabperiod() + 2) << " PreRequsite : " << it->second->getPrereqs() << endl;
                        courseIndex++;
                        anyCourseAdded = true;
                    }
                  

                }
                if (!anyCourseAdded) {
                    cout << "Instructor has not added any courses yet." << endl;
                    break;
                }
                
                bool validSelection = false;
                while (!validSelection) {
                    bool hasFinishedPrerequisite = false;
                    bool valid = true;
                    cout << "Enter the number of the course you want to select: ";
                    int selectedCourse;
                    cin >> selectedCourse;

                    if (selectedCourse >= 1 && selectedCourse <= courses.size()) {
                        auto it = courses.begin();
                        advance(it, selectedCourse - 1);
                        string selectedCourseCode = it->first;
                        Course* selectedCoursePtr = it->second;
                        string prerequisiteToCheck = it->second->getPrereqs();
                        if (!hasFinishedPrerequisite) {
                            for (const auto& prerequisite : finishedPrerequisites[checker]) {
                                if (prerequisite == prerequisiteToCheck) {
                                    hasFinishedPrerequisite = true;
                                    break;
                                }
                                else {
                                    cout << "Student has not finished prerequisite " << prerequisiteToCheck << endl;
                                }
                            }
                        }
                        if (selectedCourseCode.find("210"||"211") != string::npos && stoi(ch1) < 33) {
                            cout << "You are not eligible to take this course since it is for the year above you." << endl;
                            valid = false;
                        }
                        else if (selectedCourseCode.find("311"||"320"||"330") != string::npos && (stoi(ch1) < 33 || stoi(ch1) > 66)) {
                            cout << "You are not eligible to take this course since it is for the year above you." << endl;
                            valid = false;

                        }
                        else if (selectedCourseCode.find("413"||"491A"||"420") != string::npos && (stoi(ch1) < 66 || stoi(ch1) >= 99)) {
                            cout << "You are not eligible to take this course since it is for the year above you." << endl;
                            valid = false;
                        }
                      if(valid&& hasFinishedPrerequisite){
                            cout << "Selected Course Code: " << selectedCourseCode << ", Name: " << selectedCoursePtr->getName() << ", Course Lec Day & Period: " << it->second->getlecday() << " From " << it->second->getlecperiod() << " To " << (it->second->getlecperiod() + 1.5) << ", Course Lab Day & Period: " << it->second->getlabday() << " From " << it->second->getlabperiod() << " To " << (it->second->getlabperiod() + 2) << endl;
                            type << "Student's Name: " << name1 << "\nStudent's ID: " << id1 << "\nStudent's GPA: " << gpa1 << "\nSelected Course: Code " << selectedCourseCode << "\nName: " << selectedCoursePtr->getName() << "\nCourse Lec Day & Period: " << it->second->getlecday() << " From " << it->second->getlecperiod() << " To " << (it->second->getlecperiod() + 1.5) << "\nCourse Lab Day & Period: " << it->second->getlabday() << " From " << it->second->getlabperiod() << " To " << (it->second->getlabperiod() + 2) <<"\n---------------------------------------- New Student ----------------------------------------\n"<< endl;
                            validSelection = true;
                        }
                    }
                    else {
                        cout << "Invalid course selection." << endl;
                    }

                }
            }
        }
        //---------------------------------------------------------
        else {
            int pin1 = 1, check = 0;

            cout << "Welcome , Instructor " << endl;

            if (pin1 == 1) {
                ifstream read("CS.txt");
                ofstream type("Schedule.txt");
                int pin2;
                cout << "Please Enter your password :";
                cin >> pin2;
                while (pin2 != 2528) {
                    cout << "Incorrect password" << endl;
                    cin >> pin2;
                }
                while (pin2 == 2528) {
                    string courseCode, courseName, prerequisiteCourseCodes, specializationMajor, specializationSpeciality, lecday, labday, creditHours;
                    int pin3, lecperiod, labperiod;
                    if (check == 0) {
                        cout << " Welcome Dr Taraggy\n Press 1 To add lec&lab time \n Press 2 To check the courses in the schedule\n Press 3 To logout\n Press 4 To Terminate the program" << endl;
                        check++;
                    }
                    else if (check == 1) {
                        cout << " What else would you like to do ?\n Press 1 To add lec&lab time \n Press 2 To check the courses in the schedule\n Press 3 To logout\n Press 4 To Terminate the program" << endl;
                    }

                    cin >> pin3;
                    if (pin3 == 1) {
                        string looper;

                        getline(read, looper);

                        cout << "Please Add Date and Time for each of the following courses : " << endl;
                        for (int i = 1; i <= 4; i++) {
                            cin.ignore();

                            cout << "course name : ";
                            getline(read, courseName);
                            cout << courseName << endl;

                            cout << "course code : ";
                            getline(read, courseCode);
                            cout << courseCode << endl;

                            cout << "credit hours : ";
                            getline(read, creditHours);
                            cout << creditHours << endl;

                            cout << "prerequisite course code(s) : ";
                            getline(read, prerequisiteCourseCodes);
                            cout << prerequisiteCourseCodes << endl;

                            cout << "specialization major : ";
                            getline(read, specializationMajor);
                            cout << specializationMajor << endl;

                            cout << "specialization speciality : ";
                            getline(read, specializationSpeciality);
                            cout << specializationSpeciality << endl;

                            cout << "Enter the Lecture Day : ";
                            getline(cin, lecday);


                            cout << "Enter the Lab Day : ";
                            getline(cin, labday);

                            cout << "Enter the Lecture Time : ";
                            cin >> lecperiod;
                            while (cin.fail()) {
                                cin.clear(); cin.ignore(512, '\n');
                                cout << "Wrong Input \n";
                                cin >> lecperiod;
                            }

                            cout << "Enter the Lab Time : ";
                            cin >> labperiod;
                            while (cin.fail()) {
                                cin.clear(); cin.ignore(512, '\n');
                                cout << "Wrong Input \n";
                                cin >> labperiod;
                            }
                            //---------------------------------------------------------
                            Course* course = new Course(courseCode, courseName, creditHours, prerequisiteCourseCodes, specializationMajor, specializationSpeciality, lecday, lecperiod, labday, labperiod);
                            for (int i = 1; i <= stoi(looper); i++) {
                  

                                Course* course = new Course(courseCode, courseName, creditHours, prerequisiteCourseCodes, specializationMajor, specializationSpeciality, lecday, lecperiod, labday, labperiod);
                                courses[courseCode] = course;

                     
                            }
                            isValidCourse = true;
                            for (Course* existingCourse : allCourses) {
                                if ((existingCourse->getlecday() == lecday && isPeriodBusy(existingCourse->getlecperiod(), lecperiod, 1.5)) ||
                                    (existingCourse->getlabday() == labday && isPeriodBusy(existingCourse->getlabperiod(), labperiod, 2)) ||
                                    (existingCourse->getlecday() == labday && existingCourse->getlecperiod() == labperiod) ||
                                    (existingCourse->getlabday() == lecday && existingCourse->getlabperiod() == lecperiod))
                                {
                                    cout << "Lecture or Lab time clashes with an existing course." << endl;
                                    isValidCourse = false;
                                    break;
                                }
                                
                            }

                            if (isValidCourse) 
                            {
                                allCourses.push_back(course);
                              
                            }
                            type << "Course Name : " << courseName << " Course Code : " << courseCode << endl;
                            type << "Lecture day : " << lecday << "     " << " Lecture Time : " << lecperiod << endl;
                            type << "Lab day :" << labday << "     " << " Lab Time : " << labperiod << endl;
                            type << "---------------------------------------- New Course ----------------------------------------\n";

                        }
                    }
                    //---------------------------------------------------------
                    else if (pin3 == 2) {
                        string queryCourseCode;
                        vector<Course*> queriedCourses;
                        bool courseFound = false;
                        do {
                            cout << "Enter a course code to get information about the course: ";
                            cin.get();
                            getline(cin >> ws, queryCourseCode);
                            Course* queryCourse = courses[queryCourseCode];
                            if (queryCourse != nullptr) {
                                cout << "Course code: " << queryCourse->getCode() << endl;
                                cout << "Course name: " << queryCourse->getName() << endl;
                                cout << "Credit hours: " << queryCourse->getCreditHours() << endl;
                                cout << "Prerequisite course code(s): " << queryCourse->getPrereqs() << endl;
                                cout << "Specialization major: " << queryCourse->getMajor() << endl;
                                cout << "Specialization speciality: " << queryCourse->getSpecialty() << endl;
                                cout << "Lecture Day: " << queryCourse->getlecday() << endl;
                                cout << "Lecture Period: " << queryCourse->getlecperiod() << endl;
                                cout << "Lab Day: " << queryCourse->getlabday() << endl;
                                cout << "Lab Period: " << queryCourse->getlabperiod() << endl;
                                queriedCourses.push_back(queryCourse);
                                courseFound = true;
                            }
                            else {
                                int pin5;

                                cout << "Course not found. Please re-enter the course code.\nTo reenter Type 1\nTo go back Type 2" << endl;
                                cin >> pin5;
                                if (pin5 == 2)
                                    break;

                            }
                        } while (!courseFound);
                    }
                    else if (pin3 == 3) {
                        break;

                    }
                    else if (pin3 == 4) {
                        cout << "Good Bye!!";
                        exit(1);

                    }

                }
            }
        }
    }

}

