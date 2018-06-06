#include <iostream>
using namespace std;
/**Student Name: Sergio Espinoza

  *Date Completed: june 6

  *Project No. and Page No. in the book: 1

  *Extra Credit: Yes or No:no 

  *Project Description: Chapter 1 PP

**/
int main()
{
    //initializing variables//
    int priceOfLabor=0 ; 
    int priceOfFans=0 ; 
    int numberOfFans=0 ;
   //displaying question//
    cout << "please enter the cost of labor per installation of fan:";
    //recieving user input//
    cin >> priceOfLabor;
    //displaying question//
    cout << "Now enter the price of the physical fans:";
    //recieving user input//
    cin >> priceOfFans;
    //displaying last question//
    cout << "now please enter the amount of fans installed:";
    //recieving user input//
    cin >> numberOfFans;
    //initializing the total price and price per fan//
    int totalPrice=(priceOfLabor+priceOfFans)*numberOfFans;
    int pricePerFanInstallation = priceOfLabor+priceOfFans;
    //displaying end result
    cout<< "your price per fan is:" << pricePerFanInstallation << endl;
    cout << "your total price is: " << totalPrice << endl;
     
    
    system("pause");
    return 0;
}