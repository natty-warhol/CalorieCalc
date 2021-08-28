#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
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
    if ( sum < 0 )
    { cout << "Deficit in Calories: " << sum << "\n" ;
      cout << "Deficit in LBs: " << ( sum / l ) << "\n" ; }
    else 
    { cout << "Surplus in Calories: " << sum << "\n" ;
        cout << "Surplus in LBs: " << ( sum / l ) << "\n" ; }

    // get today's date for file export
    time_t t = time(0) ;
    struct tm * now = localtime( & t ) ;

    char buffer [80];
    strftime (buffer,80,"%Y-%m-%d_CalorieDeficit.txt",now) ;

    // save to text file
    string input ;
    cout << "Output data? (y/N): " ;
    cin >> input ;
    if(input == "y") { 
        std::ofstream myfile; 
        myfile.open (buffer); 
        if(myfile.is_open()) { 
            myfile << g << " = Total Gained" << endl << b << " = Total Lost" << endl << sum << " = Deficit in Calories" << endl << ( sum / l ) << " = Deficit in LBs" << endl; 
            std::cout<<"Success! See you tomorrow \n"<<std::endl; 
        } 
        myfile.close(); 
    }
    if(input == "yes") { 
        std::ofstream myfile; 
        myfile.open (buffer); 
        if(myfile.is_open()) { 
            myfile << g << " = Total Gained" << endl << b << " = Total Lost" << endl << sum << " = Deficit in Calories" << endl << ( sum / l ) << " = Deficit in LBs" << endl; 
            std::cout<<"Success! See you tomorrow \n"<<std::endl; 
        } 
        myfile.close(); 
    }
    if(input == "Y") { 
        std::ofstream myfile; 
        myfile.open (buffer); 
        if(myfile.is_open()) { 
            myfile << g << " = Total Gained" << endl << b << " = Total Lost" << endl << sum << " = Deficit in Calories" << endl << ( sum / l ) << " = Deficit in LBs" << endl; 
            std::cout<<"Success! See you tomorrow \n"<<std::endl; 
        } 
        myfile.close(); 
    }
    if(input == "Yes") { 
        std::ofstream myfile; 
        myfile.open (buffer); 
        if(myfile.is_open()) { 
            myfile << g << " = Total Gained" << endl << b << " = Total Lost" << endl << sum << " = Deficit in Calories" << endl << ( sum / l ) << " = Deficit in LBs" << endl; 
            std::cout<<"Success! See you tomorrow \n"<<std::endl; 
        } 
        myfile.close(); 
    }

    if(input == "n") { cout << "Have a nice day, m'lad \n" << endl ; }
    if(input == "N") { cout << "Have a nice day, m'lad \n" << endl ; }
    if(input == "no") { cout << "Have a nice day, m'lad \n" << endl ; }
    if(input == "No") { cout << "Have a nice day, m'lad \n" << endl ; }
    else if(input == "\n") { cout << "Jesus, say something, ya dick \n" << endl ; }
    else { cout << "Jesus, pay attention, ya dick \n" << endl ; }
    return 0 ;
}
