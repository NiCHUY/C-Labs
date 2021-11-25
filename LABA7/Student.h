#ifndef UNTITLED4_STUDENT_H
#define UNTITLED4_STUDENT_H

#include <iostream>

class Student {
public:
    Student() = delete;

    Student(char* name, int course, int group, int record_book_number);
    Student(const Student& student);

    char *GetName();

    void SetName(char *name);

    int GetCourse() const;

    void SetCourse(int course);

    int GetGroup() const;

    void SetGroup(int group);

    int GetRecordBookNumber() const;

    int GetId() const;

protected:
    char* name_;
    int course_;
    int group_;
    const int kRecordBookNumber_;
    const int id = next_id_++;

    static int next_id_;
};

#endif //UNTITLED4_STUDENT_H
