#include <iostream>
#include <numeric> // Required for std::accumulate

using namespace std;

int main() {
    int numOfStudents;

    // Prompt the user for the array size
    cout << "Enter the total number of students: ";
    cin >> numOfStudents;

    // Input validation for positive number of students
    while (numOfStudents < 1) {
        cout << "Number of students must be positive. Please enter again: ";
        cin >> numOfStudents;
    }

    // Dynamically allocate memory for the array of exam marks
    int* studentMarks = new int[numOfStudents];

    // Loop for the user to enter student marks one after the other
    cout << "Enter the exam mark for each student: " << endl;
    for (int i = 0; i < numOfStudents; ++i) {
        cout << "Student " << (i + 1) << " mark: ";
        cin >> studentMarks[i];
    }

    // Loop for the calculation of total marks
    long totalMarks = 0;
    for (int i = 0; i < numOfStudents; ++i) {
        totalMarks += studentMarks[i];
    }

    // Calculation of the average mark
    double averageMark = static_cast<double>(totalMarks) / numOfStudents;

    // Console out the average mark
    cout << endl;
    cout << "The average exam mark is: " << averageMark << endl;

    // Deletion of the dynamic memory allocated and resetting pointer to Null
    delete[] studentMarks;
    studentMarks = nullptr;

    return 0;
}
