#include<iostream>
#include<iomanip>

using namespace std;

int main() {
  int filingStatus, taxableIncome;
  double taxRate = 0.0;

  cout << "Enter Filing Status " << endl
       << "(1) Single" << endl
       << "(2) Married Jointly" << endl
       << "(3) Married Separately" << endl
       << "(4) Head of Household" << endl
       << "Filing status: ";

  cin >> filingStatus;

  cout << "Enter Taxable Income: ";
  cin >> taxableIncome;

  if (filingStatus == 1) {
    if (taxableIncome <= 6000) {
      taxRate = 10;
    } else if (taxableIncome <=27950){
      taxRate = 15;
    } else if (taxableIncome <=67700){
      taxRate = 27;
    } else if (taxableIncome <=141250){
      taxRate = 30;
    } else if (taxableIncome <=307050){
      taxRate = 35;
    } else {
      taxRate = 38.6;
    }
  } else if (filingStatus == 2) {
    if (taxableIncome <= 12000) {
      taxRate = 10;
    } else if (taxableIncome <=46700){
      taxRate = 15;
    } else if (taxableIncome <=112850){
      taxRate = 27;
    } else if (taxableIncome <=171950){
      taxRate = 30;
    } else if (taxableIncome <=307050){
      taxRate = 35;
    } else {
      taxRate = 38.6;
    }
  } else if (filingStatus == 3) {
    if (taxableIncome <= 6000) {
      taxRate = 10;
    } else if (taxableIncome <=23350){
      taxRate = 15;
    } else if (taxableIncome <=56425){
      taxRate = 27;
    } else if (taxableIncome <=85975){
      taxRate = 30;
    } else if (taxableIncome <=153525){
      taxRate = 35;
    } else {
      taxRate = 38.6;
    }
  } else if (filingStatus == 4) {
    if (taxableIncome <= 10000) {
      taxRate = 10;
    } else if (taxableIncome <=37450){
      taxRate = 15;
    } else if (taxableIncome <=96700){
      taxRate = 27;
    } else if (taxableIncome <=156600){
      taxRate = 30;
    } else if (taxableIncome <=307050){
      taxRate = 35;
    } else {
      taxRate = 38.6;
    }
  } else {
    cout << "Invalid filing status." << endl;
  }
  cout << taxRate << "%" << endl;
   return 0;
}
