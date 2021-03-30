/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CarWash
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Dragon
5 properties:
    1) family origin
    2) fire power
    3) number of knights defeated in lifetime
    4) birthplace
    5) age
3 things it can do:
    1) capture princesses
    2) breath fire
    3) fight knights
 */

/*
Thing 2) High rise
5 properties:
    1) number of lifts
    2) number of floors
    3) number of rooms
    4) hours per week cleaned
    5) cost of property
3 things it can do:
    1) house residents
    2) charge residents
    3) transport residents between floors
 */

/*
Thing 3) Brain
5 properties:
    1) number of neurones
    2) number of functioning hemispheres
    3) memory storage in bytes
    4) calculations per second
    5) unknown regions
3 things it can do:
    1) recognise faces
    2) estimate distances
    3) construct a language
 */

/*
Thing 4) chord
5 properties:
    1) number of notes
    2) possible next chords within key
    3) chord number in roman numerals
    4) has chord been altered
    5) possible preceding chords within key
3 things it can do:
    1) make a sound
    2) be played as arpeggio
    3) be omitted
 */

/*
Thing 5) Keys
5 properties:
    1) key depressed
    2) velocity of key pressed (1-127)
    3) MIDI number of note pressed (1-127)
    4) note legato value (note held, while another is played)
    5) keyboard set to monophonic
3 things it can do:
    1) play legato
    2) play chords
    3) play monophonic
 */

/*
Thing 6) Oscillator
5 properties:
    1) pitch value of oscillator
    2) octave setting of oscillator (int 'foot' selection of LFO, 32, 16, 8, 4, 2)
    3) oscillator volume level
    4) oscillator pitch source
    5) waveform of oscillator
3 things it can do:
    1) make a sound
    2) be an LFO
    3) be a square wave
 */

/*
Thing 7) Filter
5 properties:
    1) Cutoff frequency
    2) Resonance
    3) Attack value
    4) Decay value
    5) Release value
3 things it can do:
    1) change oscillator cutoff
    2) change oscillator resonance
    3) receive host automation
 */

/*
Thing 8) Amplitude Envelope
5 properties:
    1) Attack value
    2) Decay value
    3) Sustain value
    4) Release value
    5) Hold value
3 things it can do:
    1) adjust oscillator attack
    2) receive host automation
    3) be bypassed
 */

/*
Thing 9) Arpeggiator
5 properties:
    1) Octave range value
    2) Number of note repetitions before moving to next note
    3) sequence pattern number
    4) note playing direction
    5) pitch duration selection
3 things it can do:
    1) be bypassed
    2) play held notes
    3) play a certain note duration
 */

/*
Thing 10) Synthesiser
5 properties:
    1) Keys
    2) Oscillator
    3) Filter
    4) Amplitude envelope
    5) Arpeggiator
3 things it can do:
    1) play a note
    2) play repeating notes
    3) filter the sound
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
