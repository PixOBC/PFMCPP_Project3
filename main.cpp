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

struct Appendage
{
    void stepForward();
    int stepSize(int height);
};

void Appendage::stepForward()
{

}

int Appendage::stepSize(int height)
{
    return height / 2;
}

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTravelled;
    Appendage leftFoot;
    Appendage rightFoot;

    void run (int howFast, bool startWithLeftFoot);

};

// goto 6:25 in Implementation video
// Full qualified name
void Person::run(int howFast, bool startWithLeftFoot) // include howFast by creating distance travelled in particular time period?
{
    if (startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTravelled += leftFoot.stepSize(198) + rightFoot.stepSize(198);
}

/*
2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your udt definitions.
   If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
   use the parameter in your implementation.
   If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
   change the name of your local variable so it is different than the class member's name.

3) be sure to write the correct full qualified name for the nested type's member functions.
 // Full qualified type: include owning type, scope operator and name of the function (defining OUTSIDE the struct/class declaration)

4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
*/

//================================================================================

struct Dragon
{
    std::string familyOrigin = "Smaug";
    int firePower = 350;
    int knightsDefeated = 57;
    std::string birthplace = "Asgaard-upon-Thyme";
    int age = 500;

    bool capturePrincess(int dragonFirePower);
    void breathFire(int firePower, std::string familyName);
    bool fightKnight(int courageOfKnight);
};

    bool Dragon::capturePrincess(int dragonFirePower)
{
    if (dragonFirePower >=50)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Dragon::breathFire(int dragonFirePower, std::string familyName)
{
    double breathFireProbabilityInPercent;

    if(dragonFirePower >=10 && familyName == "Smaug")
    {
        breathFireProbabilityInPercent = 100;
    }
    else
    {
        breathFireProbabilityInPercent = 0;
    }
}

bool Dragon::fightKnight(int courageOfKnight)
{
    bool fight;
    if (courageOfKnight >=10)
    {
        return fight = true;
    }
    else
    {
        return fight = false;
    }
}
//===================================================================

struct HighRise
{
    struct Lift
    {
        std::string manufacturerName = "Cibes";
        float liftSpeedMph = 8.5f;
        int floorNumber = 4;
        int roomNumber = 570;
        int numberPassengers = 5;

        int moveLift(int floorNumber); // moveLiftUp() and moveLiftDown() consolidated into moveLift()
        std::string goToPenthouse(std::string password);
    };

    const int lifts = 3;
    static const int penthouseFloor = 58;
    const int numRooms = 760;
    double hoursSpentCleaningPerWeek = 15.4;
    float costOfProperty = 450005.09f;

    void giveResidentKey(int roomNumber, int roomNumberOnContract);
    int invoiceResident(int invoiceAmount);
    int transportResident(int desiredFloor, int currentFloor);
};

void HighRise::giveResidentKey(int roomNumber, int roomNumberOnContract)
{
    if (roomNumber == roomNumberOnContract)
    {
        std::cout << "Key dispensed to resident" << std::endl;
    }
    else
    {
        std::cout << "Key not dispensed! Check invoice paid" << std::endl;
    }
}

int HighRise::invoiceResident(int invoiceAmount)
{
    return invoiceAmount;
}

int HighRise::transportResident(int desiredFloor, int currentFloor)
{
    Lift lift;
    if (currentFloor != desiredFloor)
    {
        return lift.moveLift(desiredFloor);
    }
    else
    {
        return desiredFloor;
    }
}

int HighRise::Lift::moveLift(int floorNum)
{
    return floorNum;
}

std::string HighRise::Lift::goToPenthouse(std::string password)
{
    Lift penthouse;
    std::string penthousePassword = "RichyRichRich";
    if (password == penthousePassword)
    {
        penthouse.moveLift(penthouseFloor);
    }
    return "Password Incorrect!";
}

//====================================================================

struct Brain
{
    struct Vision
    {
        int numberOfFunctioningEyes = 2;
        double visionQuality = 65.5;
        float blinksPerSecond = 10.0f;
        std::string yearLastEyeTest = "1985";
        int peripheralVision = 165;

        void checkVision(double eyesightQuality);
        void probabilityOfSighting(bool morning);
        void getGlassesPrescription();
    };

    double numNeurons = 10e13;
    int numWorkingHemispheres = 2;
    float storageSpaceInGigabytes = 1000000.0f;
    double calculationsPerSecond = 10e15;
    float percentageOfUnknownBrainRegions = 0;

    void recogniseFace(bool awake, int numberMeetingsWithPerson);
    void estimateDistance(int distance);
    void constructLanguage(int age);
};

void Brain::recogniseFace(bool awake, int numberMeetingsWithPerson)
{
    if (awake && numberMeetingsWithPerson >= 2)
    {
        std::cout << "Face recognised" << std::endl;
    }
    else
    {
        std::cout << "Face not recognised" << std::endl;
    }

}

void Brain::estimateDistance(int distance)
{
    if (distance < 250)
    {
        std::cout << "Distance estimated" << std::endl;
    }
    else
    {
        std::cout << "Distance could not be estimated" << std::endl;
    }


}

void Brain::constructLanguage(int age)
{
    bool languageSuccess;
    if (age >= 2)
    {
        languageSuccess = true;
    }
    else
    {
        languageSuccess = false;
    }
}
void Brain::Vision::checkVision(double eyesightQuality)
{
    if (eyesightQuality < 45.8)
    {
        getGlassesPrescription();
    }
}

void Brain::Vision::probabilityOfSighting(bool morning)
{
    if (morning)
    {
        std::cout << " >=50% Chance of sighting" << std::endl;
    }
    else
    {
        std::cout << "<50% chance of sighting" << std::endl;
    }

}

void Brain::Vision::getGlassesPrescription()
{
    std::cout << "prescription needed" << std::endl;
}

struct Chord
{
    int numberOfNotes = 4;
    std::string nextChordList = "F#7, B";
    std::string chordInRomanNumerals = "V7";
    bool alteredChord = false;
    std::string precedingChordList = "C#m, D#m";

    int makeSound(int noteNumber);
    int playArpeggio(int numberOfHeldNotes);
    int playNothing(int numberOfNotes);
};

int Chord::makeSound(int noteNumber)
{
    if (noteNumber)
    {
        return noteNumber;
    }
    else
    {
        return playNothing(0);
    }
}

int Chord::playArpeggio(int numberOfHeldNotes)
{
    if(numberOfHeldNotes)
    {
        return numberOfHeldNotes;
    }
    else
    {
        return playNothing(0);
    }
}

int Chord::playNothing(int numOfNotes = 0)
{
    return numOfNotes;
}

struct Keys
{
    bool keyDepressed = false;
    int noteVelocity = 67;
    int noteMidiNumber = 59;
    float glideValue = 1003.5;
    bool monophonicSynth = true;

    bool playGlide(float glideValue);
    void playChords(Keys keys);
    bool playMonophonic(bool monophonicSynth);
};

bool Keys::playGlide(float glideNumber)
{
    if (glideNumber > 1.0f)
    {
        return playMonophonic(true);
    }
    return playMonophonic(false);
}

void Keys::playChords(Keys keys)
{
    keys.playMonophonic(false);
}

bool Keys::playMonophonic(bool monophonicKeys = true)
{
    if (monophonicKeys)
    {
        return monophonicSynth = true;
    }
    else
    {
    return monophonicKeys = false;
    }
}

struct Oscillator
{
    int oscillatorPitch = 875;
    unsigned int oscillatorOctave = 16;
    int oscillatorLevel = -6;
    std::string oscillatorPitchSource = "Keyboard";
    std::string oscillatorWaveform = "pulse";

    int makeSound(int oscillatorPitch);
    void makeOscillatorAnLFO(int oscillatorFrequency);
    int makeOscillatorSquareWave(int oscillatorWave);
};

int Oscillator::makeSound(int oscillatorFrequency)
{
    return oscillatorFrequency;
}

void Oscillator::makeOscillatorAnLFO(int oscillatorFrequency)
{
    oscillatorFrequency = 15;
}

int Oscillator::makeOscillatorSquareWave(int oscillatorWave)
{
    return oscillatorWave = 2;
}

struct Filter
{
    double cutoffFrequency = 7000.4;
    double resonanceFrequency = 4578.93;
    int attack = 89;
    int decay = 34;
    int release = 89;

    double changeCutoff(double cutoffFrequency);
    double changeResonance(double resonanceFrequency);
    int getAutomationFromHost(int parameterNumber);
};

double Filter::changeCutoff(double cutoff)
{
    return cutoff;   
}

double Filter::changeResonance(double resonance)
{
    return resonance;
}

int Filter::getAutomationFromHost(int parameterNumber)
{
    return parameterNumber;
}

struct AmplitudeEnvelope
{
    int attack = 34;
    int decay = 45;
    int sustain = 100;
    int release = 20;
    int hold = 0;

    void changeAttack(int newAttack);
    int getAutomationFromHost(int parameterNumber);
    int changeDryWetMix(int wetValue);
};

void AmplitudeEnvelope::changeAttack(int newAttack)
{
    attack = newAttack;
}

int AmplitudeEnvelope::getAutomationFromHost(int parameterNumber)
{
    return parameterNumber;
}

int AmplitudeEnvelope::changeDryWetMix(int wetValue)
{
    int dryValue = 1;
    int mix = dryValue - wetValue;
    return mix;
}

struct Arpeggiator
{
    int octaveSetting = 0;
    int noteRepetitions = 2;
    int sequencePattern = 3;
    std::string arpDirection = "Up/Down";
    int pitchDuration = 16;


    void bypassArp(bool arpIsOn)
    {
        if(!arpIsOn)
            arpIsOn = false;
        else
            arpIsOn = true;
    }

    int playHeldNotes(int noteMidiNumbers)
    {
        return noteMidiNumbers;
    }

    int playNoteDuration(int noteDuration)
    {
        return noteDuration;
    }
};

struct Synthesiser
{
    Keys keys;
    Oscillator oscillator;
    Filter filter;
    AmplitudeEnvelope amplitudeEnvelope;
    Arpeggiator arpeggiator;

    Keys playANote(Keys notes);
    Arpeggiator playRepeatingNotes(Arpeggiator notesPlayed);
    Filter applyFilterToSound(double cutoff);
};

Keys Synthesiser::playANote(Keys notes)
{
        return notes;   
}

Arpeggiator Synthesiser::playRepeatingNotes(Arpeggiator notesPlayed)
{
    notesPlayed.sequencePattern = 2;
    return notesPlayed;
}

Filter Synthesiser::applyFilterToSound(double cutoff)
{
    Filter cutoffValue;
    cutoffValue.changeCutoff(cutoff);

    return (cutoffValue);
}

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
