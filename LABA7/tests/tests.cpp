#include "gtest/gtest.h"
#include "../StudentAfterSecondSession.h"

#include <vector>

TEST(Student, getters_test) {
  Student student("Roman", 1, 2, 1);
  ASSERT_EQ(student.GetName(), "Roman");
  ASSERT_EQ(student.GetCourse(), 1);
  ASSERT_EQ(student.GetGroup(), 2);
  ASSERT_EQ(student.GetRecordBookNumber(), 1);
}

TEST(Student, setters_test) {
  Student student("Misha", 5, 3, 2);
  student.SetGroup(1);
  ASSERT_EQ(student.GetGroup(), 1);
  student.SetCourse(2);
  ASSERT_EQ(student.GetCourse(), 2);
  student.SetName("Misha");
  ASSERT_EQ(student.GetName(), "Misha");
}

TEST(Student, output_test) {
  Student Masha("Masha", 1, 5, 9);
  testing::internal::CaptureStdout();
  std::cout << Masha;
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_TRUE(output == "Student Masha, group 5, course 1");
}

TEST(SATFS, getters_test) {
StudentAfterFirstSession student1("Misha", 2, 4, 1, std::vector<int>({1, 2, 3, 4}));
StudentAfterFirstSession student2("Masha", 1, 4, 1, std::vector<int>({5, 6, 4, 4}));
StudentAfterFirstSession student3("Roman", 2, 3, 1, std::vector<int>({1, 1, 1, 1}));
ASSERT_EQ(GetMeanMarkOfGroup(4, std::vector<StudentAfterFirstSession>({student1, student2})), 29.0/8);
ASSERT_EQ(GetMeanMarkOfGroup(3, std::vector<StudentAfterFirstSession>({student1, student2})), 1);
}

TEST(StudentAfterSecondSession, set_mark) {
StudentAfterSecondSession student("Name", 3, 4, 2,
                 std::vector<int>{9, 9, 9, 9},
                 std::vector<int>{9, 9, 9, 9, 9});
student.SetFirstSessionMarks(std::vector<int>({1, 2, 3}));
ASSERT_EQ(student.GetFirstSessionMarks(), std::vector<int>({1, 2, 3}));
}











TEST(SATSS, get_mark_except_cases) {
EXPECT_ANY_THROW(SATSS Bakhshi1("Bakhshi", 4, 2,
std::vector<unsigned>{9, 9, 9, 9},
std::vector<unsigned>{9, 9, 9, 9, 11}));
EXPECT_ANY_THROW(SATSS Bakhshi2("Bakhshi", 4, 2,
std::vector<unsigned>{9, 9, 9, 9},
std::vector<unsigned>{9, 9, 9, 9}));
EXPECT_ANY_THROW(SATSS Bakhshi3("Bakhshi", 4, 2,
std::vector<unsigned>{9, 9, 9, 9},
std::vector<unsigned>{9, 9, 9, 0, 9}));
SATSS Bakhshi("Bakhshi",
              4,
              2,
              std::vector<unsigned>{9, 9, 9, 9},
              std::vector<unsigned>{9, 9, 9, 9, 9});
ASSERT_EQ(Bakhshi.getMark(Student::kChemistry, 1), -1);
ASSERT_EQ(Bakhshi.getMark(Student::kSomething, 2), -1);
ASSERT_EQ(Bakhshi.getMark(Student::kChemistry, 3), -1);

}

TEST(SATSS, set_mark_throw) {
SATSS Kushagra("Kushagra", 2, 2, std::vector<unsigned>{9, 9, 9, 9},
               std::vector<unsigned>{9, 9, 9, 9, 9});
EXPECT_ANY_THROW(Kushagra.setMark(Student::kMath, 1, 3));
EXPECT_ANY_THROW(Kushagra.setMark(Student::kMath, 0, 3));
EXPECT_ANY_THROW(Kushagra.setMark(Student::kMath, 1, 0));
EXPECT_ANY_THROW(Kushagra.setMark(Student::kMath, 1, 3));
}

TEST(SATSS, ostream_operator) {
SATSS Mohammed("Mohammed", 4, 2,
               std::vector<unsigned>{2, 4, 6, 8},
               std::vector<unsigned>{1, 2, 3, 4, 5});
testing::internal::CaptureStdout();
std::cout << Mohammed;
std::string output = testing::internal::GetCapturedStdout();
ASSERT_TRUE(output == "Student after the 2nd session Mohammed, group 2, course 4, average mark is 3.88");
}

TEST(DoubleToStringWithPrecision, general_test) {
std::string str = DoubleToStringWithPrecision(2.351, 1);
ASSERT_EQ(str, "2.3");
str = DoubleToStringWithPrecision(1.0 / 3, 5);
ASSERT_EQ(str, "0.33333");
}

TEST(Students, UniqueID_test) {
Student A("A", 1, 1);
Student B("A", 1, 1);
ASSERT_TRUE(A.studentID() != B.studentID());
}