// C++ program to implement a cloud service
// that uses homomorphic encryption
// to process sensitive healthcare data securely and efficiently.
// Error 247
#include <bits/stdc++.h>
using namespace std;

// Store the data of Hospital
class Hospital {
public:
string H_name;
string location;
int available_beds;
float rating;
string contact;
string doctor_name;
int price;
};

// Stores the data of Patient
class Patient : public Hospital {
public:
string P_name;
int P_id;
};

// TODO: Define a class that implements homomorphic encryption

// Define a class to handle healthcare data processing
class HealthCareService {
public:
// TODO: Define a function that uses homomorphic encryption
// to process sensitive healthcare data securely and efficiently.
// Comparator function to sort the
// hospital data by name
bool name(Hospital& A, Hospital& B) {
    return A.H_name > B.H_name;
}

// Function to sort the hospital
// data by name
void SortHospitalByName(vector<Hospital> hospitals) {
    // Sort the data
    sort(hospitals.begin(),
        hospitals.end(),
        name);

    cout << "SORT BY NAME:"
        << endl
        << endl;
    PrintHospitalData(hospitals);
}

// Comparator function to sort the
// hospital data by rating
bool rating(Hospital& A, Hospital& B) {
    return A.rating > B.rating;
}

// Function to sort the hospital
// data by rating
void SortHospitalByRating(vector<Hospital> hospitals) {
    sort(hospitals.begin(),
        hospitals.end(),
        rating);

    cout << "SORT BY Rating:"
        << endl
        << endl;

    PrintHospitalData(hospitals);
}

// Comparator function to sort the
// hospital data by Bed Available
bool beds(Hospital& A, Hospital& B) {
    return A.available_beds > B.available_beds;
}

// Function to sort the hospital
// data by Bed Available
void SortByBedsAvailable(vector<Hospital> hospitals) {
    sort(hospitals.begin(),
        hospitals.end(),
        beds);

    cout << "SORT BY Available Beds:"
        << endl
        << endl;

    PrintHospitalData(hospitals);
}

// Comparator function to sort the
// hospital data by Bed Price
bool beds_price(Hospital& A, Hospital& B) {
    return A.price < B.price;
}

// Function to sort the hospital
// data by Bed Price
void SortByBedsPrice(vector<Hospital> hospitals) {
    sort(hospitals.begin(),
        hospitals.end(),
        beds_price);

    cout << "SORT BY Available Beds Price:"
        << endl
        << endl;

    PrintHospitalData(hospitals);
}

// Function to print the hospital
// data
void PrintHospitalData(vector<Hospital>& hospitals) {
    cout << "PRINT hospitals DATA:"
        << endl;

    cout << "HospitalName	 "
        << "Location	 "
        << "Beds_Available	 "
        << "Rating	 "
        << "Hospital_Contact	 "
        << "Doctor_Name	 "
        << "Price_Per_Bed	 \n";

    for (int i = 0; i < hospitals.size(); i++) {
        cout << hospitals[i].H_name
            << "				 "
            << "	 "
            << hospitals[i].location
            << "		 "
            << hospitals[i].available_beds
            << "				 "
            << hospitals[i].rating
            <<
            << "		 "
            << hospitals[i].Hospital_Contact
            << "				 "
            << hospitals[i].Doctor_Name	
            <<
            << "				 "
            << hospitals[i].Price_Per_Bed	
            <<
          }
}
// Comparator function to sort the
// patient data by id
bool id(Patient& A, Patient& B)
{
return A.P_id < B.P_id;
}

// Function to sort the patient
// data by id
void SortPatientById(
vector<Patient> patients)
{
sort(patients.begin(),
patients.end(),
id);
cout << "SORT patients BY ID:"
	<< endl
	<< endl;

PrintPatientData(patients, hospitals);
}
// Comparator function to sort the
// patient data by expenditure
bool expenditure(Patient& A, Patient& B)
{
return A.price < B.price;
}

// Function to sort the patient
// data by expenditure
void SortPatientByExpenditure(
vector<Patient> patients)
{
sort(patients.begin(),
patients.end(),
expenditure);

bash
Copy code
cout << "SORT patients BY Expenditure:"
	<< endl
	<< endl;

PrintPatientData(patients, hospitals);
}

// Driver code
int main()
{
// Hospital data
vector<Hospital> hospitals;
Hospital h1 = { "ABC Hospital", "Chanigarh", 100, 4.5, "4986153358", "Dr. Gupta", 500 };
Hospital h2 = { "DEF Hospital", "Delhi", 200, 4.1, "895236859", "Dr. Khanna", 750 };
Hospital h3 = { "GHI Hospital", "Dehradun", 150, 4.3, "5865145689", "Dr. Sharma", 600 };
Hospital h4 = { "JKL Hospital", "Mumbai", 250, 4.7, "9865745635", "Dr. Singh", 1000 };
hospitals.push_back(h1);
hospitals.push_back(h2);
hospitals.push_back(h3);
hospitals.push_back(h4);

// Patient data
vector<Patient> patients;
Patient p1 = { "Patient 1", 101, "9876543210" };
Patient p2 = { "Patient 2", 102, "9876543211" };
Patient p3 = { "Patient 3", 103, "9876543212" };
Patient p4 = { "Patient 4", 104, "9876543213" };

patients.push_back(p1);
patients.push_back(p2);
patients.push_back(p3);
patients.push_back(p4);

// Print hospital data
PrintHospitalData(hospitals);

// Print patient data
PrintPatientData(patients, hospitals);

// Sort hospital data by name
SortHospitalByName(hospitals);

// Sort hospital data by rating
SortHospitalByRating(hospitals);

// Sort hospital data by available beds
SortByBedsAvailable(hospitals);

// Sort hospital data by price per bed
SortByBedsPrice(hospitals);

// Print hospitals by city
PrintHospitalBycity("Delhi", hospitals);
PrintHospitalBycity("Mumbai", hospitals);

// Sort patient data by id
SortPatientById(patients);

// Sort patient data by expenditure
SortPatientByExpenditure(patients);

return 0;
}
