/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()



//================================================================================

struct Dragon
{
    std::string familyOrigin = "Smaug";
    int firePower = 350;
    int knightsDefeated = 57;
    std::string birthplace = "Asgaard-upon-Thyme";
    int age = 500;

    Dragon();

    bool capturePrincess(int dragonFirePower);
    void breathFire(int firePower, std::string familyName);
    bool fightKnight(int courageOfKnight);
};

Dragon::Dragon()
{
}

bool Dragon::capturePrincess(int dragonFirePower)
{
    return dragonFirePower >= 50;
}

void Dragon::breathFire(int dragonFirePower, std::string familyName)
{
    std::cout << "You have" << (dragonFirePower >= 10 && familyName == "Smaug" ? " " : " not ") << "been incinerated." << std::endl;
}

bool Dragon::fightKnight(int courageOfKnight)
{
    return courageOfKnight >= 10;
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

        Lift();

        int moveLift(int floorNumber); // moveLiftUp() and moveLiftDown() consolidated into moveLift()
        std::string goToPenthouse(std::string password);
    };

    const int lifts = 3;
    static const int penthouseFloor = 58;
    const int numRooms = 760;
    double hoursSpentCleaningPerWeek = 15.4;
    float costOfProperty = 450005.09f;

    HighRise();

    void giveResidentKey(int roomNumber, int roomNumberOnContract);
    int printInvoiceResident(int invoiceAmount);
    int transportResident(int desiredFloor, int currentFloor);
};

HighRise::HighRise()
{
}

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

int HighRise::printInvoiceResident(int invoiceAmount)
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
    return desiredFloor;
}

HighRise::Lift::Lift()
{
}

int HighRise::Lift::moveLift(int floorNum)
{
    std::cout << "Welcome to our HighRise, I'm Mr. Ballard. This lift is travelling to floor " << floorNum <<  ". Have a pleasant trip." << std::endl;
    return floorNum;
}

std::string HighRise::Lift::goToPenthouse(std::string password)
{
    Lift penthouse;
    std::string penthousePassword = "RichyRichRich";
    if (password == penthousePassword)
    {
        penthouse.moveLift(penthouseFloor);
        return "Password correct!";
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

        Vision();

        void checkVision(double eyesightQuality);
        void probabilityOfSighting(bool morning);
        void getGlassesPrescription();
    };

    double numNeurons = 10e13;
    int numWorkingHemispheres = 2;
    float storageSpaceInGigabytes = 1000000.0f;
    double calculationsPerSecond = 10e15;
    float percentageOfUnknownBrainRegions = 0;

    Brain();

    void recogniseFace(bool awake, int numberMeetingsWithPerson);
    void estimateDistance(int distance);
    bool constructLanguage(int age);
};

Brain::Brain()
{
}

void Brain::recogniseFace(bool awake, int numberMeetingsWithPerson)
{
    std::cout << "Face" <<  (awake && numberMeetingsWithPerson >= 2 ? " " : " not ") << "recognised" << std::endl;
}

void Brain::estimateDistance(int distance)
{
    std::cout << "Distance: ";
    if (distance < 250)
    {
        std::cout << "Distance estimated" << std::endl;
    }
    else
    {
        std::cout << "Distance could not be estimated" << std::endl;
    }
}

bool Brain::constructLanguage(int age)
{
    return age >= 2;
}

Brain::Vision::Vision()
{
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
        std::cout << ">= 50% Chance of sighting" << std::endl;
    }
    else
    {
        std::cout << "< 50% chance of sighting" << std::endl;
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

    Chord();

    int makeSound(int noteNumber);
    int playArpeggio(int numberOfHeldNotes);
    int playNothing(int numberOfNotes);
};

Chord::Chord()
{

}

int Chord::makeSound(int noteNumber)
{
    if (noteNumber)
    {
        return noteNumber;
    }
    return playNothing(0);
}

int Chord::playArpeggio(int numberOfHeldNotes)
{
    if(numberOfHeldNotes)
    {
        return numberOfHeldNotes;
    }
    return playNothing(0);
}

int Chord::playNothing(int numOfNotes = 0)
{
    std::cout << "DEBUG: NOTHING WILL BE PLAYED" << std::endl;
    return numOfNotes;
}

struct Keys
{
    bool keyDepressed = false;
    int noteVelocity = 67;
    int noteMidiNumber = 59;
    float glideValue = 1003.5;
    bool monophonicSynth = true;

    Keys();

    bool playGlide(float glideValue);
    void playChords(Keys keys);
    bool playMonophonic(bool monophonicSynth);
};

Keys::Keys()
{
    std::cout << "WARNING: Key object operating in DEBUG mode" << std::endl;
}

bool Keys::playGlide(float glideNumber)
{
    return playMonophonic(glideNumber > 1.0f);
}

void Keys::playChords(Keys keys)
{
    keys.playMonophonic(false);
}

bool Keys::playMonophonic(bool monophonicKeys = true)
{
    if (monophonicKeys)
    {
        return monophonicSynth;
    }
    return monophonicKeys;
}

struct Oscillator
{
    int oscillatorPitch = 875;
    unsigned int oscillatorOctave = 16;
    int oscillatorLevel = -6;
    std::string oscillatorPitchSource = "Keyboard";
    std::string oscillatorWaveform = "pulse";

    Oscillator();

    int makeSound(int oscillatorPitch);
    void makeOscillatorAnLFO(int oscillatorFrequency);
    int makeOscillatorSquareWave(int oscillatorWave);
};

Oscillator::Oscillator()
{
}

int Oscillator::makeSound(int oscillatorFrequency)
{
    std::cout << "PLAYING PITCH: " << oscillatorFrequency << std::endl;
    return oscillatorFrequency;
}

void Oscillator::makeOscillatorAnLFO(int oscillatorFrequency)
{
    oscillatorFrequency = 15;
}

int Oscillator::makeOscillatorSquareWave(int oscillatorWave)
{
    int squareWave = 2;
    return oscillatorWave + squareWave;
}

struct Filter
{
    double cutoffFrequency = 7000.4;
    double resonanceFrequency = 4578.93;
    int attack = 89;
    int decay = 34;
    int release = 89;

    Filter();

    double changeCutoff(double cutoffFrequency);
    double changeResonance(double resonanceFrequency);
    int getAutomationFromHost(int parameterNumber);
};

Filter::Filter()
{
    std::cout << "Filter instantiated" << std::endl;
}

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

    AmplitudeEnvelope();

    void changeAttack(int newAttack);
    int getAutomationFromHost(int parameterNumber);
    int changeDryWetMix(int wetValue);
};

AmplitudeEnvelope::AmplitudeEnvelope()
{
}

void AmplitudeEnvelope::changeAttack(int newAttack)
{
    attack = newAttack;
    std::cout << "Attack Lvl: " << newAttack << std::endl;
}

int AmplitudeEnvelope::getAutomationFromHost(int parameterNumber)
{
    return parameterNumber;
}

int AmplitudeEnvelope::changeDryWetMix(int wetValue)
{
    int dryValue = 1;
    return dryValue - wetValue;
}

struct Arpeggiator
{
    int octaveSetting = 0;
    int noteRepetitions = 2;
    int sequencePattern = 3;
    std::string arpDirection = "Up/Down";
    int pitchDuration = 16;


    Arpeggiator();

    bool bypassArp(bool arpState);
    int playHeldNotes(int noteMidiNumbers);
    int playNoteDuration(int noteDuration);
};

Arpeggiator::Arpeggiator()
{
}

bool Arpeggiator::bypassArp(bool arpState)
{
    if(arpState)
    {
        arpState = false;
    }
    return arpState;
}

int Arpeggiator::playHeldNotes(int noteMidiNumbers)
{
    return noteMidiNumbers;
}

int Arpeggiator::playNoteDuration(int noteDuration)
{
    std::cout << "Note duration selected: " << noteDuration << std::endl;
    return noteDuration;
}

struct Synthesiser
{
    Keys keys;
    Oscillator oscillator;
    Filter filter;
    AmplitudeEnvelope amplitudeEnvelope;
    Arpeggiator arpeggiator;

    Synthesiser();

    Keys playANote(Keys notes);
    Arpeggiator playRepeatingNotes(Arpeggiator notesPlayed);
    Filter applyFilterToSound(double cutoff);
};

Synthesiser::Synthesiser()
{
}

Keys Synthesiser::playANote(Keys notes)
{
    return notes;
}

Arpeggiator Synthesiser::playRepeatingNotes(Arpeggiator notesPlayed)
{
    std::cout << "Sequence Pattern: " <<  notesPlayed.sequencePattern << std::endl;
    notesPlayed.sequencePattern = 2;
    return notesPlayed;
}

Filter Synthesiser::applyFilterToSound(double cutoff)
{
    Filter cutoffValue;
    cutoffValue.changeCutoff(cutoff);

    return cutoffValue;
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
    HighRise highRise;
    

    // 3) Instantiating UDTs
    Dragon d;
    HighRise badgerClose;
    HighRise::Lift lift;

    Brain einstein;
    einstein.recogniseFace(true, 5);

    Brain::Vision wanda;
    Chord fSharp;
    Keys keys;
    Oscillator osc;
    Filter filter;
    AmplitudeEnvelope ampEnv;
    Arpeggiator arp;
    Synthesiser synth;

    Dragon dragon;
    dragon.breathFire(8, "Smaug");

    Chord chord;
    std::cout << "Make Sound: " << chord.makeSound(67) << std::endl;

    HighRise resident;
    std::cout << "Pay your invoice!: " << resident.printInvoiceResident(1235) << std::endl;
    std::cout << "Lifts: " << resident.lifts << std::endl;

    HighRise::Lift lift2;
    std::cout << "Resident roomNumber: " << lift2.roomNumber << std::endl;
    lift2.moveLift(5);

    Brain person;
    person.estimateDistance(678);


    std::cout << "good to go!" << std::endl;
}
