 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different than the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



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

struct Dragon
{
//    1) family origin
    std::string familyOrigin = "Smaug";
//    2) fire power
    int firePower = 350;
//    3) number of knights defeated in lifetime
    int knightsDefeated = 57;
//    4) birthplace
    std::string birthplace = "Asgaard-upon-Thyme";
//    5) age
    int age = 500;

//    1) capture princesses
    void capturePrincess(Dragon dragon);
//    2) breath fire
    void breathFire(int firePower);
//    3) fight knights
    void fightKnight(Dragon birthplace, int courageOfKnight);
};

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

struct HighRise
{
    struct Lift
    {          
        // 5 properties
//      1) manufacturer's name
        std::string manufacturerName = "Cibes";
//      2) lift speed
        float liftSpeedMph = 8.5f;
//      3) floor number
        int floorNumber = 4;
//      4) room number
        int roomNumber = 570;
//      5) number of passengers
        int numberPassengers = 5;

        // 3 actions
//    1) moves up
        void moveLiftUp(Lift lift);
//    2) moves down
        void moveLiftDown(Lift lift);
//    3) goes to penthouse suite
        void goToPenthouse(std::string password);      
    };

//    1) number of lifts
    int lifts = 3;
//    2) number of floors
    int floors = 58;
//    3) number of rooms
    int numRooms = 760;
//    4) hours per week cleaned
    double hoursSpentCleaningPerWeek = 15.4;
//    5) cost of property
    float costOfProperty = 450005.09f;

//    1) house residents
    void giveResidentKey(int roomNumber);
//    2) charge residents
    int invoiceResident(int invoiceAmount);
//    3) transport residents between floors
    void transportResident(std::string residentName, Lift lift);
};

/*
Thing 3) Brain
5 properties:
    1) number of neurones
    2) number of functioning hemispheres
    3) memory storage in gigabytes
    4) calculations per second
    5) unknown regions
3 things it can do:
    1) recognise faces
    2) estimate distances
    3) construct a language
 */

struct Brain
{
    struct Vision
    {
        // 5 properties
//      1) number of functioning eyes
        int numberOfFunctioningEyes = 2;
//      2) vision quality
        double visionQuality = 65.5;
//      3) blinks per second
        float blinksPerSecond = 10.0f;
//      4) year of last eye test
        std::string yearLastEyeTest = "1985";
//      5) Peripheral vision in degrees
        int peripheralVision = 165;

        // 3 actions
//    1) check vision
        void checkVision(double visionQuality);
//    2) find probability of seeing object
        Vision probabilityOfSighting(Vision vision);
//    3) get glasses prescription
        Vision getGlasseesPrescription(Vision vision);        
    };

//    1) number of neurons
// can I use long long?
    double numNeurons = 10e13;
//    2) number of functioning hemispheres
    int numWorkingHemispheres = 2;
//    3) memory storage in gigabytes
    float storageSpaceInGigabytes = 1000000.0f;
//    4) calculations per second
    double calculationsPerSecond = 10e15;
//    5) unknown regions
    float percentageOfUnknownBrainRegions = 0;

//    1) recognise faces
    void recogniseFace(bool awake, int numberMeetingsWithPerson);
//    2) estimate distances
    void estimateDistance(Vision vision);
//    3) construct a language
    void constructLanguage(int age);
};

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

struct Chord
{

//    1) number of notes
    int numberOfNotes = 4;
//    2) possible next chords within key
    std::string nextChordList = "F#7, B";
//    3) chord number in roman numerals
    std::string chordInRomanNumerals = "V7";
//    4) has chord been altered
    bool alteredChord = false;
//    5) possible preceding chords within key
    std::string precedingChordList = "C#m, D#m";

//    1) make a sound
    void makeSound(int NoteNumber);
//    2) be played as arpeggio
    int playArpeggio(int numberOfHeldNotes);
//    3) be omitted
    void playNothing(std::string chord);
};

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

struct Keys
{

//    1) key depressed
    bool keyDepressed = false;
//    2) velocity of key pressed (1-127)
    int noteVelocity = 67;
//    3) MIDI number of note pressed (1-127)
    int noteMidiNumber = 59;
//    4) note legato value (note held, while another is played)
    float legatoValue = 1003.5;
//    5) keyboard set to monophonic
    bool monophonicSynth = true;

//    1) play legato
    void playLegato();
//    2) play chords
    void playChords();
//    3) play monophonic
    void playMonophonic(Keys keys);
};

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

struct Oscillator
{
//    1) pitch value of oscillator (Hz)
    int oscillatorPitch = 875;
//    2) octave setting of oscillator (int 'foot' selection of LFO, 32, 16, 8, 4, 2)
    unsigned int oscillatorOctave = 16;
//    3) oscillator volume level (dB)
    int oscillatorLevel = -6;
//    4) oscillator pitch source
    std::string oscillatorPitchSource = "Keyboard";
//    5) waveform of oscillator
    std::string oscillatorWaveform = "pulse";

//    1) make a sound
    void makeSound(Keys keys);
//    2) be an LFO
    void makeOscillatorAnLFO(int oscillatorNumber);
//    3) be a square wave
    void makeOscillatorSquareWave(int oscillatorNumber);

};

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

struct Filter
{
//    1) Cutoff frequency
    double cutoffFrequency = 7000.4;
//    2) Resonance
    double resonanceFrequency = 4578.93;
//    3) Attack value
    int attack = 89;
//    4) Decay value
    int decay = 34;
//    5) Release value
    int release = 89;

//    1) change oscillator cutoff
    void changeCutoff(double cutoffFrequency);
//    2) change oscillator resonance
    void changeResonance(double resonanceFrequency);
//    3) receive host automation
    void getAutomationFromHost(int parameterName);
};

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
    3) change dry/wet mix value
 */

struct AmplitudeEnvelope
{
//    1) Attack value
    int attack = 34;
//    2) Decay value
    int decay = 45;
//    3) Sustain value
    int sustain = 100;
//    4) Release value
    int release = 20;
//    5) Hold value
    int hold = 0;

//    1) adjust oscillator attack
    void changeAttack(int attack);
//    2) receive host automation
    void getAutomationFromHost(int parameterName);
//    3) change dry/wet mix value
    void changeDryWetMix(int dryValue, int wetValue);

};

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

struct Arpeggiator
{
//    1) Octave range value
    int octaveSetting = 0;
//    2) Number of note repetitions before moving to next note
    int noteRepetitions = 2;
//    3) sequence pattern number
    int sequencePattern = 3;
//    4) note playing direction
    std::string arpDirection = "Up/Down";
//    5) pitch duration selection
    int pitchDuration = 16;


//    1) be bypassed
    void bypassArp(bool ArpIsOn);
//    2) play held notes
    void playHeldNotes(int noteMidiNumbers); // would need to be array eventually
//    3) play a certain note duration
    int playNoteDuration(int noteDuration);
};

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

//6) your 10th UDT's properties should be instances of your #5-#9 UDTs.
//- No primitives allowed!

struct Synthesiser
{
//    1) Keys
    Keys keys;
//    2) Oscillator
    Oscillator oscillator;
//    3) Filter
    Filter filter;
//    4) Amplitude envelope
    AmplitudeEnvelope amplitudeEnvelope;
//    5) Arpeggiator
    Arpeggiator arpeggiator;

//    1) play a note
    Keys playANote(Keys keys);
//    2) play repeating notes
    Arpeggiator playRepeatingNotes(Arpeggiator noteRepetitions);
//    3) filter the sound
    Filter applyFilterToSound(Filter cutoff, Filter resonance);
};



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
