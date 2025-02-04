#include<iostream>

using namespace std;


//list the function prototypes here.
void report(int days, double dailyRate, double meds, double services);
void report(double meds, double services);

int main()
{
int days;
double dailyRate, meds, services;
char patientType;
do {
    cout << "Was the patient admitted as an in-patient or an out-patient? (i/o): "; cin >> patientType;
    if (patientType == 'i') {
        int days;
        double dailyRate, meds, services;
        cout << "Enter the number of days spent in the hospital: "; cin >> days;
        cout << "Enter the daily rate: "; cin >> dailyRate;
        cout << "Enter the hospital medication charges: "; cin >> meds;
        cout << "Enter the charges for hospital services (lab tests, etc): "; cin >> services;
        report(days, dailyRate, meds, services);
    } else if (patientType == 'o') {
        double meds, services;
        cout << "Enter the hospital medication charges: "; cin >> meds;
        cout << "Enter the charges for hospital services (lab tests, etc): "; cin >> services;
        report(meds, services);
    } else {
        cout << "Invalid input. Please enter 'i' for in-patient or 'o' for out-patient." << endl;
    }
} while (patientType != 'i' && patientType != 'o');
return 0;    
}


//Add the function definitions here.
void report(int days, double dailyRate, double meds, double services) {
    double totalCharges = (days * dailyRate) + meds + services;
    cout << "In-Patient Report" << endl;
    cout << "Days in Hospital: \t" << days << endl;
    cout << "Daily Rate: \t$" << dailyRate << endl;
    cout << "\n";
    cout << "Hospital Stay: \t$" << (days * dailyRate) << endl;
    cout << "Medication: \t$" << meds << endl;
    cout << "Hospital Services: \t$" << services << endl;
    cout << "\n";
    cout << "Total Charges: \t$" << totalCharges << endl;
}

void report(double meds, double services) {
    double totalCharges = meds + services;
    cout << "Out-Patient Report" << endl;
    cout << "Medication: \t$" << meds << endl;
    cout << "Hospital Services: \t$" << services << endl;
    cout << "\n";
    cout << "Total Charges: \t$" << totalCharges << endl;
}