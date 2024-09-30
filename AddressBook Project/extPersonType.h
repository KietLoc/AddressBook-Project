#pragma once

#include <iostream> 
#include <string> 
#include "addressType.h"
#include "dateType.h"

using namespace std;

class extPersonType {

private:

    addressType address;
    dateType birthdate;

    string phoneNumber;

    string relationship;



public:

    // Constructor 

    extPersonType(string firstName = "", string lastName = "", int birthMonth = 1, int birthDay = 1, int birthYear = 1900, string street = "", string city = "", string state = "XX", int zip = 10000, string phone = "None", string rel = "None");



    // Setters 

    void setPhoneNumber(string phoneNumber);

    void setRelationship(string relationship);

    // Getters 

    string getPhoneNumber() const;

    string getRelationship() const;

    int getBirthMonth() const;

    // Print method 

    void print() const;

};
