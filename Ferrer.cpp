#include <iostream>
using namespace std;

int main() {
    
    int gallons_used, starting_mileage,
    ending_mileage, distance_driven,
    average_miles_per_gallon;
    
    cout<<"Enter gallon used: ";
    cin>> gallons_used; // Get values for gallons used
    
    cout<<"Enter starting mileage: "; 
    cin>> starting_mileage; // Get values for starting mileage
    
    cout<<"Enter ending mileage: ";
    cin>> ending_mileage; // Get values for ending mileage 
    
    distance_driven = ending_mileage - starting_mileage; // Set value of distance driven to ending mileage - starting mileage
    
    average_miles_per_gallon = distance_driven / gallons_used; // Set value of average miles per gallon to distance driven / gallons used
    
    cout << "The average_miles_per_gallon: " << average_miles_per_gallon << endl; // Print the value of average miles per gallon
     
    if(average_miles_per_gallon > 25){ // If average miles per gallon is greater than 25.0 then
        cout<<"You are getting good gas mileage"; // Print the message "You are getting good gas mileage"
    }
    else
    cout<< "You are NOT getting good gas mileage: "; // Print the message "You are NOT getting good gas mileage"
    
    return 0; // Stop

}
