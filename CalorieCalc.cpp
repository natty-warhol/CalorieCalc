#include <iostream>
#include <fstream>
#include <ctime>
using namespace std ;

int main ( int argc, char *argv[]) {
    // integers for Calorie collection
    float g, b ;
    // sum of Calorie integers
    int sum ;
    // 1lb of fat equiv. in Cal
    float l = 3500 ;

    cout << "Total Calories Gained: " ;
    cin >> g ;
    cout << "Total Calories Burned: " ;
    cin >> b ;

    // create deficit values
    sum = g - b ;
    sum = abs(sum) ;
    cout << "Deficit in Calories: " << sum << "\n" ;
    cout << "Deficit in LBs: " << ( sum / l ) << "\n" ;

    // get today's date for file export
    time_t t = time(0) ;
    struct tm * now = localtime( & t ) ;

    char buffer [80];
    strftime (buffer,80,"%Y-%m-%d_CalorieDeficit.txt",now) ;

    // save to text file
    string input ;
    cout << "Output data? (Y/n): " ;
    cin >> input ;
    if(input == "y","Y","Yes","yes") { 
        std::ofstream myfile; 
        myfile.open (buffer); 
        if(myfile.is_open()) { 
            myfile << g << " = Total Gained" << endl << b << " = Total Lost" << endl << sum << " = Deficit in Calories" << endl << ( sum / l ) << " = Deficit in LBs" << endl; 
            std::cout<<"Success! See you tomorrow \n"<<std::endl; 
        } 
        myfile.close(); 
    }
    else if(input == "n","N","No","no") { cout << "Have a nice day, m'lad \n" << endl ; }

    return 0 ;
}
