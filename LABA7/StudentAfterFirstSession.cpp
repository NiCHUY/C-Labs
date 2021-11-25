#include "StudentAfterFirstSession.h"

#include <string>
#include <vector>

namespace {
    int kMarkCount = 4;
}

StudentAfterFirstSession::StudentAfterFirstSession(char *name, int course, int group, int record_book_number)
        : Student(name, course, group, record_book_number), first_session_marks_(std::vector<int>(kMarkCount)) {}

StudentAfterFirstSession::StudentAfterFirstSession(char* name, int course, int group, int record_book_number, const std::vector<int>& marks)
        : Student(name, course, group, record_book_number), first_session_marks_(marks) {}

StudentAfterFirstSession::StudentAfterFirstSession(const Student& student)
        : StudentAfterFirstSession(student.name_, student.course_, student.group_, student.kRecordBookNumber_) {}

StudentAfterFirstSession::StudentAfterFirstSession(const StudentAfterFirstSession& student)
        : Student(student), first_session_marks_(std::vector<int>(kMarkCount)) {}

const std::vector<int> &StudentAfterFirstSession::GetFirstSessionMarks() const {
    return first_session_marks_;
}

void StudentAfterFirstSession::SetFirstSessionMarks(const std::vector<int> &firstSessionMarks) {
    first_session_marks_ = firstSessionMarks;
}

double StudentAfterFirstSession::GetMeanOfMarks() const {
    double marks_sum = 0;
    for (int i : first_session_marks_) {
        marks_sum += i;
    }
    return marks_sum / first_session_marks_.size();
}

namespace {
    std::string ToString(std::vector<int> vector) {
        std::string result;
        for (int i : vector) {
            result += std::to_string(i) + ", ";
        }
        result.pop_back();
        result.pop_back();

        return result;
    }
}

std::ostream &operator<<(std::ostream &out, const StudentAfterFirstSession &student) {
    out << "Student:" << "\n\t";
    out << "Name: " << student.GetName() << "\n\t";
    out << "Course: " << student.GetCourse() << "\n\t";
    out << "Group: " << student.GetGroup() << "\n\t";
    out << "Record book number: " << student.GetRecordBookNumber() << "\n\t";
    out << "Id: " << student.GetId() << "\n\t";
    out << "Marks for first session: " << ToString(student.GetFirstSessionMarks()) << "\n";
    return out;
}
