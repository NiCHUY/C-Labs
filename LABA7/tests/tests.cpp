#include "gtest/gtest.h"
#include "../StudentAfterSecondSession.h"

#include <vector>

TEST(Student, Getters) {
  Student student("Roman", 1, 2, 1);
  ASSERT_EQ(student.GetName(), "Roman");
  ASSERT_EQ(student.GetCourse(), 1);
  ASSERT_EQ(student.GetGroup(), 2);
  ASSERT_EQ(student.GetRecordBookNumber(), 1);
}

TEST(Student, Setters) {
  Student student("Misha", 5, 3, 2);
  student.SetGroup(1);
  ASSERT_EQ(student.GetGroup(), 1);
  student.SetCourse(2);
  ASSERT_EQ(student.GetCourse(), 2);
  student.SetName("Misha");
  ASSERT_EQ(student.GetName(), "Misha");
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

TEST(Student, OutputToStream) {
  Student masha("Masha", 1, 5, 9);
  testing::internal::CaptureStdout();
  std::cout << masha;
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(
      output,
      "Student:\n\tName: Masha\n\tCourse: 1\n\tGroup: 5\n\tRecord book number: 9\n\tId: " +
      std::to_string(masha.GetId()) + "\n");

  StudentAfterFirstSession masha2(masha);
  masha2.SetFirstSessionMarks(std::vector<int>({3, 6, 9}));
  testing::internal::CaptureStdout();
  std::cout << masha2;
  output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(
      output,
      "Student:\n\tName: Masha\n\tCourse: 1\n\tGroup: 5\n\tRecord book number: 9\n\tId: " + std::to_string(masha2.GetId()) +
      "\n\tMarks for first session: " + ToString(masha2.GetFirstSessionMarks()) +
      "\n\tMean mark: " + std::to_string(masha2.GetMeanMark()) + "\n");

  StudentAfterSecondSession masha3(masha2);
  masha3.SetSecondSessionMarks(std::vector<int>({9, 11, 110}));
  testing::internal::CaptureStdout();
  std::cout << masha3;
  output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(
      output,
      "Student:\n\tName: Masha\n\tCourse: 1\n\tGroup: 5\n\tRecord book number: 9\n\tId: " + std::to_string(masha3.GetId()) +
      "\n\tMarks for first session: " + ToString(masha3.GetFirstSessionMarks()) +
      "\n\tMarks for second session: " + ToString(masha3.GetSecondSessionMarks()) +
      "\n\tMean mark: " + std::to_string(masha3.GetMeanMark()) + "\n");
}

TEST(StudentAfterFirstSession, MeanMarkOfGroup) {
  StudentAfterFirstSession student1("Misha", 2, 4, 1, std::vector<int>({1, 2, 3, 4}));
  StudentAfterFirstSession student2("Masha", 1, 4, 1, std::vector<int>({5, 6, 4, 4}));
  StudentAfterFirstSession student3("Roman", 2, 3, 1, std::vector<int>({1, 1, 1, 1}));

  ASSERT_EQ(GetMeanMarkOfGroup(4, std::vector<StudentAfterFirstSession>({student1, student2, student3})), 29.0/8);
  ASSERT_EQ(GetMeanMarkOfGroup(3, std::vector<StudentAfterFirstSession>({student1, student2, student3})), 1);
}

TEST(StudentAfterSecondSession, SetMarks) {
  StudentAfterSecondSession student("Name",
                                    3,
                                    4,
                                    2,
                                    std::vector<int>{9, 9, 9, 9},
                                    std::vector<int>{9, 9, 9, 9, 9});

  ASSERT_EQ(student.GetFirstSessionMarks(), std::vector<int>({9, 9, 9, 9}));
  ASSERT_EQ(student.GetSecondSessionMarks(), std::vector<int>({9, 9, 9, 9, 9}));

  student.SetFirstSessionMarks(std::vector<int>({1, 2, 3}));
  ASSERT_EQ(student.GetFirstSessionMarks(), std::vector<int>({1, 2, 3}));

  student.SetSecondSessionMarks(std::vector<int>({1, 2, 3, 4}));
  ASSERT_EQ(student.GetSecondSessionMarks(), std::vector<int>({1, 2, 3, 4}));
}

TEST(Students, UniqueID) {
  Student a("A", 1, 1, 1);
  Student b("A", 1, 1, 1);
  ASSERT_TRUE(a.GetId() != b.GetId());
}
