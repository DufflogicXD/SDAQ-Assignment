#include <iostream>
#include <vector>

using namespace std;

class User
{
private:
    string username;
    string password;
public:
    virtual string getUsername() = 0;
    virtual void setUsername(string uName) = 0;
    virtual string getPassword() = 0;
    virtual void setPassword(string pWord) = 0;
    virtual createEvent() =0;                          //************************
};

class Student: public User
{
public:
    string getUsername();
    void setUsername(string uName);
    string getPassword();
    void setPassword(string pWord);
    createEvent();                                  //************************
};

class Lecturer: public User
{
public:
    createCommonEvent();                          //************************
    string getUsername();
    void setUsername(string uName);
    string getPassword();
    void setPassword(string pWord);
    createEvent();
};

class DigitalDiary
{
private:
    string inputPassword;
    string inputUsername;
public:
    string getUsername();
    void setUsername(string uName);
    string getPassword();
    void setPassword(string pWord);
    void promptLogin();
    getUserLoginDetails();                      //************************
    bool validateLogin();                       //************************
};

class Event
{
private:
    int day, month, year, secondsTime;
public:
    virtual int getDay() =0;
    virtual int getMonth() =0;
    virtual int getYear() =0;
    virtual void setDay(int) =0;
    virtual void setMonth(int) =0;
    virtual void setYear(int) =0;
    virtual createNotif() =0;                              //************************
};

class Personal: public Event
{


};

class Repeated: public Event
{
private:
    vector <string> dates;
    vector <string> secondsTime;
public:
    string getDates();
    void setDates(string);
    string getSecondsTime();
    void setSecondsTime(string);
};

class Common: public Event
{
private:
public:
    rejectStudentEventCreation();
};

class Module
{
private:
    vector <Student> studentList;
    Lecturer L;
public:
    Student getStudentList();
    Lecturer getLecturer();
};

class Timer
{
private:
    int secondsTime;
public:
    startTimer();
    checkTime();
    void setTime(int);
    int getTime();
    createTimerNotif();
};

class Notification
{
private:
    string notifToDisplay;
public:
    displayNotif();
};

class Calander
{
private:
    int day, month, year, secondsTime;
public:
    int getDay();
    int getMonth();
    int getYear();
    int getSecondsTime();
    void setSecondsTime();
    void setDay(int);
    void setMonth(int);
    void promptEventChoice();
    void promptEventDate();
    void promptEventClash();
    void promptEventTime();
    bool checkEventClash();
    void addEventToCalander();
    void writeConformationToScreen();
    void beginTimer();
    bool promptForCancOrCont();
};





int main()
{
    Student s;
    return 0;
}
