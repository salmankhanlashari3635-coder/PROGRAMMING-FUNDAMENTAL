#include <iostream>
#include "student_performance.h"
using namespace std;

int main()
{
    // Input attendance
    cout << "Enter calculus attendance: "; 
    cin >> cal_attend;
    cout << "Enter English attendance: ";
     cin >> eng_attend;
    cout << "Enter programming fundamental attendance: ";
     cin >> pf_attend;
    cout << "Enter discrete and structure attendance: "; 
    cin >> ds_attend;
    cout << "Enter life & learning attendance: "; 
    cin >> l_l_attend;

    // Input credit hours
    cout << "Enter calculus credit hours: "; 
    cin >> cal_cr;
    cout << "Enter English credit hours: "; 
    cin >> eng_cr;
    cout << "Enter programming fundamental credit hours: "; 
    cin >> pf_cr;
    cout << "Enter discrete and structure credit hours: "; 
    cin >> ds_cr;
    cout << "Enter life & learning credit hours: "; 
    cin >> l_l_cr;

  
  
if(cal_attend >= 75) { 
    cout << "Enter calculus marks: "; 
    cin >> cal_marks; 
} else { 
    cout << "Short attendance in calculus" << endl; 
    cal_marks = 0; 
}

if(eng_attend >= 75) { 
    cout << "Enter English marks: "; 
    cin >> eng_marks; 
} else { 
    cout << "Short attendance in English" << endl; 
    eng_marks = 0; 
}

if(pf_attend >= 75) { 
    cout << "Enter programming fundamental marks: "; 
    cin >> pf_marks; 
} else { 
    cout << "Short attendance in programming fundamental" << endl; 
    pf_marks = 0; 
}

if(ds_attend >= 75) { 
    cout << "Enter discrete and structure marks: "; 
    cin >> ds_marks; 
} else { 
    cout << "Short attendance in discrete and structure" << endl; 
    ds_marks = 0; 
}

if(l_l_attend >= 75) { 
    cout << "Enter life & learning marks: "; 
    cin >> l_l_marks; 
} else { 
    cout << "Short attendance in life & learning" << endl; 
    l_l_marks = 0; 
}


    // Calculate GPA and grade per subject inline
    if(cal_marks >= 85)      { cal_gp = 4.0; cal_grade = "A+"; }
    else if(cal_marks >= 80) { cal_gp = 3.7; cal_grade = "A"; }
    else if(cal_marks >= 75) { cal_gp = 3.3; cal_grade = "B+"; }
    else if(cal_marks >= 70) { cal_gp = 3.0; cal_grade = "B"; }
    else if(cal_marks >= 65) { cal_gp = 2.7; cal_grade = "B-"; }
    else if(cal_marks >= 60) { cal_gp = 2.3; cal_grade = "C+"; }
    else if(cal_marks >= 55) { cal_gp = 2.0; cal_grade = "C"; }
    else if(cal_marks >= 50) { cal_gp = 1.0; cal_grade = "D"; }
    else                     { cal_gp = 0.0; cal_grade = "F"; }

    if(eng_marks >= 85)      { eng_gp = 4.0; eng_grade = "A+"; }
    else if(eng_marks >= 80) { eng_gp = 3.7; eng_grade = "A"; }
    else if(eng_marks >= 75) { eng_gp = 3.3; eng_grade = "B+"; }
    else if(eng_marks >= 70) { eng_gp = 3.0; eng_grade = "B"; }
    else if(eng_marks >= 65) { eng_gp = 2.7; eng_grade = "B-"; }
    else if(eng_marks >= 60) { eng_gp = 2.3; eng_grade = "C+"; }
    else if(eng_marks >= 55) { eng_gp = 2.0; eng_grade = "C"; }
    else if(eng_marks >= 50) { eng_gp = 1.0; eng_grade = "D"; }
    else                     { eng_gp = 0.0; eng_grade = "F"; }

    if(pf_marks >= 85)      { pf_gp = 4.0; pf_grade = "A+"; }
    else if(pf_marks >= 80) { pf_gp = 3.7; pf_grade = "A"; }
    else if(pf_marks >= 75) { pf_gp = 3.3; pf_grade = "B+"; }
    else if(pf_marks >= 70) { pf_gp = 3.0; pf_grade = "B"; }
    else if(pf_marks >= 65) { pf_gp = 2.7; pf_grade = "B-"; }
    else if(pf_marks >= 60) { pf_gp = 2.3; pf_grade = "C+"; }
    else if(pf_marks >= 55) { pf_gp = 2.0; pf_grade = "C"; }
    else if(pf_marks >= 50) { pf_gp = 1.0; pf_grade = "D"; }
    else                    { pf_gp = 0.0; pf_grade = "F"; }

    if(ds_marks >= 85)      { ds_gp = 4.0; ds_grade = "A+"; }
    else if(ds_marks >= 80) { ds_gp = 3.7; ds_grade = "A"; }
    else if(ds_marks >= 75) { ds_gp = 3.3; ds_grade = "B+"; }
    else if(ds_marks >= 70) { ds_gp = 3.0; ds_grade = "B"; }
    else if(ds_marks >= 65) { ds_gp = 2.7; ds_grade = "B-"; }
    else if(ds_marks >= 60) { ds_gp = 2.3; ds_grade = "C+"; }
    else if(ds_marks >= 55) { ds_gp = 2.0; ds_grade = "C"; }
    else if(ds_marks >= 50) { ds_gp = 1.0; ds_grade = "D"; }
    else                    { ds_gp = 0.0; ds_grade = "F"; }

    if(l_l_marks >= 85)      { l_l_gp = 4.0; l_l_grade = "A+"; }
    else if(l_l_marks >= 80) { l_l_gp = 3.7; l_l_grade = "A"; }
    else if(l_l_marks >= 75) { l_l_gp = 3.3; l_l_grade = "B+"; }
    else if(l_l_marks >= 70) { l_l_gp = 3.0; l_l_grade = "B"; }
    else if(l_l_marks >= 65) { l_l_gp = 2.7; l_l_grade = "B-"; }
    else if(l_l_marks >= 60) { l_l_gp = 2.3; l_l_grade = "C+"; }
    else if(l_l_marks >= 55) { l_l_gp = 2.0; l_l_grade = "C"; }
    else if(l_l_marks >= 50) { l_l_gp = 1.0; l_l_grade = "D"; }
    else                     { l_l_gp = 0.0; l_l_grade = "F"; }

    // Print grade book
    cout << "\n..............GRADE BOOK..................\n";
    cout << "Course\tMarks\tGP\tCR\tTotal GP\tGrade\n";

    cout << "CAL\t" << cal_marks << "\t" << cal_gp << "\t" << cal_cr << "\t" << cal_gp * cal_cr <<"\t\t"<<cal_grade<< endl;
    cout << "PF \t" << pf_marks  << "\t" << pf_gp  << "\t" << pf_cr  << "\t" << pf_gp  * pf_cr  <<"\t\t"<<pf_grade<< endl;
    cout << "DS \t" << ds_marks  << "\t" << ds_gp  << "\t" << ds_cr  << "\t" << ds_gp  * ds_cr  <<"\t\t"<<ds_grade<< endl;
    cout << "ENG\t" << eng_marks << "\t" << eng_gp << "\t" << eng_cr << "\t" << eng_gp * eng_cr <<"\t\t"<<eng_grade<< endl; 
    cout << "LL \t" << l_l_marks << "\t" << l_l_gp << "\t" << l_l_cr << "\t" << l_l_gp * l_l_cr <<"\t\t"<<l_l_grade<< endl;
// Calculate total GPA
unsigned int total_cr = cal_cr + pf_cr + ds_cr + eng_cr + l_l_cr;
double total_gp = (cal_gp*cal_cr + pf_gp*pf_cr + ds_gp*ds_cr + eng_gp*eng_cr + l_l_gp*l_l_cr) / (double)total_cr;

cout << "Total (Cumulative) GPA: " << total_gp << endl;

    return 0;
}
