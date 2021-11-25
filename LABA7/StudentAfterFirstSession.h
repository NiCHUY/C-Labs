#ifndef UNTITLED4_STUDENTAFTERFIRSTSESSION_H
#define UNTITLED4_STUDENTAFTERFIRSTSESSION_H

#include <vector>

#include "Student.h"

class StudentAfterFirstSession : public Student {
public :
    StudentAfterFirstSession() = delete;

    StudentAfterFirstSession(char* name, int course, int group, int record_book_number);
    StudentAfterFirstSession(char* name, int course, int group, int record_book_number, const std::vector<int>& marks);
    explicit StudentAfterFirstSession(const Student& student);
    StudentAfterFirstSession(const StudentAfterFirstSession& student);

    const std::vector<int> &GetFirstSessionMarks() const;

    void SetFirstSessionMarks(const std::vector<int> &firstSessionMarks);

    virtual double GetMeanOfMarks() const;

protected:
    std::vector<int> first_session_marks_;
};

double GetMeanMarkOfGroup(int group, const std::vector<StudentAfterFirstSession*>& students) {
    double marks_sum = 0;
    int students_count = 0;
    for (const StudentAfterFirstSession* student : students) {
        if (student->GetGroup() != group) continue;

        marks_sum += student->GetMeanOfMarks();
        ++students_count;
    }

    return marks_sum / students_count;
}

double GetMeanMark(std::vector<StudentAfterFirstSession*> students) {
    double marks_sum = 0;
    int students_count = 0;
    for (const StudentAfterFirstSession* student : students) {
        marks_sum += student->GetMeanOfMarks();
        ++students_count;
    }

    return marks_sum / students_count;
}


#endif //UNTITLED4_STUDENTAFTERFIRSTSESSION_H
