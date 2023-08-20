/// Employee Pay Raise Analysis and Report Generator


/// @brief This program asks the user name for the name of a data file,
///        reads the data file of employee information, calculates
///        and output pay raise information, and writes a report to the hard
///        drive.

    #include <iostream>
    #include <fstream>
    #include <iomanip>
    #include <string>

    using namespace std;

    // Start of the program
    int main()
    {
        // declare variables
        string lastnameA;
        string firstnameA;
        double currentSalaryA;
        double percentPayIncreaseA;
        double newSalaryA;

        string lastnameB;
        string firstnameB;
        double currentSalaryB;
        double percentPayIncreaseB;
        double newSalaryB;

        string lastnameC;
        string firstnameC;
        double currentSalaryC;
        double percentPayIncreaseC;
        double newSalaryC;

    // declaration and initialization of required variables
    ifstream infile;
    ofstream outfile;

    // open the files

    infile.open("Ch3_Ex5Data.txt");
    outfile.open("Ch3_Ex5output.dat");

    outfile << setprecision(2) << showpoint << fixed;

    // read the infile

    infile >> lastnameA >> firstnameA >> currentSalaryA >>
            percentPayIncreaseA;

    infile >> lastnameB >> firstnameB >> currentSalaryB >>
            percentPayIncreaseB;

    infile >> lastnameC >> firstnameC >> currentSalaryC >>
            percentPayIncreaseC;

    // calculate new salary

    newSalaryA = currentSalaryA + (currentSalaryA *
                percentPayIncreaseA / 100);

    newSalaryB = currentSalaryB + (currentSalaryB *
                percentPayIncreaseB / 100);

    newSalaryC = currentSalaryC + (currentSalaryC *
                percentPayIncreaseC / 100);

    // output into outfile

    outfile << "Enter the name of the employee data file: " << endl;
    outfile << "Name" << right << setw(31) << "Old Salary"
            << right << setw(15) << "New Salary" << endl;
    outfile <<
    "--------------------------------------------------" << endl;
    outfile << firstnameA << " " << lastnameA <<
            right << setw(22) << currentSalaryA <<
            right << setw(15)<< newSalaryA << endl;

    outfile << firstnameB << " " << lastnameB <<
            right << setw(23) << currentSalaryB <<
            right << setw(15) << newSalaryB << endl;

    outfile << firstnameC << " " << lastnameC <<
            right << setw(25) << currentSalaryC <<
            right << setw(15) << newSalaryC << endl;
    outfile <<
    "--------------------------------------------------" << endl
    << endl;

    // close both file
    infile.close();
    outfile.close();

    // open output.txt file to output data on to screen
    infile.open("Ch3_Ex5output.dat");

    // outputs data onto screen while reading output.txt
    string text;
    while (getline(infile, text)) {
        cout << text << endl;
    }
    infile.close();

    return 0;
}


