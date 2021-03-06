/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() and for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
#include <vector>
#include <random>
#include <map>

namespace Example
{
    struct Bar
    {
        int num = 0;
        Bar(int n) : num(n) { }
    };
    struct Foo
    {
        Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c)
        {
            Bar bar(startingVal);                //4a)
            while( bar.num < threshold )         //4a)
            {
                bar.num += 1;                    //4a)

                if( bar.num >= threshold )       //4b)
                    return bar;
            }

            return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
        }
    };

    int main()
    {
        Foo foo;
        auto bar = foo.scopeLifetimeFunc(3, 1);        //5)

        std::cout << "bar.num: " << bar.num << std::endl;     //6)
        return 0;
    }
}

//call Example::main() in main()





//================================================================================

struct Dragon
{
    std::string familyOrigin  {"Smaug"};
    int firePower;
    int knightsDefeated = 57;
    std::string birthplace = "Asgaard-upon-Thyme";
    int age;

    Dragon();

    bool capturePrincess(int dragonFirePower);
    void breathFire(int firePower, std::string familyName);
    bool fightKnight(int courageOfKnight);
    void spellBirthplace(std::string placeOfBirth);

};

Dragon::Dragon()
        : firePower(350),
          age(500)
{
}

bool Dragon::capturePrincess(int dragonFirePower)
{
    std::cout << "Last known firepower: " << firePower << std::endl;
    firePower = dragonFirePower;
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

void Dragon::spellBirthplace(std::string placeOfBirth)
{
    std::cout << "Is this how you spell your place of birth Mr. Dragon, sir? ";

    for(auto c : placeOfBirth)
    {
        std::cout << c << "-";
    }
}
//===================================================================

struct HighRise
{
    struct Lift
    {
        std::string manufacturerName;
        float liftSpeedMph;
        int floorNumber;
        int roomNumber;
        int numberPassengers;

        Lift();

        int moveLift(int floorNumber);
        std::string goToPenthouse(std::string password);
        void visitEveryFloor(int startingFloorNumber);
    };

    const int lifts = 3;
    static const int penthouseFloor = 58;
    const int numRooms = 760;
    double hoursSpentCleaningPerWeek = 15.4;
    float costOfProperty;

    HighRise();

    void giveResidentKey(int roomNumber, int roomNumberOnContract);
    int printInvoiceResident(int invoiceAmount);
    int transportResident(int desiredFloor, int currentFloor);
};

HighRise::HighRise()
        : costOfProperty(450005.09f)
{
}

void HighRise::giveResidentKey(int roomNumber, int roomNumberOnContract)
{
    std::cout << "Resident room number is: " << roomNumber << "\n";
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
        : manufacturerName("Cibes"),
          liftSpeedMph(8.5f),
          floorNumber(4),
          roomNumber(570),
          numberPassengers(5)
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

void HighRise::Lift::visitEveryFloor(int startingFloorNumber)
{
    int totalNumFloors = 58;
    int currentFloorNum = startingFloorNumber;

    std::cout << "So, you've chosen to travel to EVERY floor, eh?\n";
    std::cout << "Your current floor is: ";
    while(currentFloorNum)
    {
        std::cout << currentFloorNum << " ";
        if(currentFloorNum >= totalNumFloors)
        {
            std::cout << std::endl;
            std::cout << "AAAAAAAALLLLL the way to the bottom!!!...";
            currentFloorNum = currentFloorNum %totalNumFloors;
        }
        else if(currentFloorNum == (startingFloorNumber -1))
        {
            break;
        }
        ++currentFloorNum;
    }
}

//====================================================================

struct Brain
{
    struct Vision
    {
        int numberOfFunctioningEyes;
        double visionQuality;
        float blinksPerSecond;
        std::string yearLastEyeTest = "1985";
        int peripheralVision = 165;

        Vision();

        void checkVision(double eyesightQuality);
        void probabilityOfSighting(bool morning);
        void getGlassesPrescription();
        void visionTest();
        void issueDriversLicense();
    };

    double numNeurons;
    int numWorkingHemispheres = 2;
    float storageSpaceInGigabytes = 1000000.0f;
    double calculationsPerSecond = 10e15;
    float percentageOfUnknownBrainRegions = 0;

    Brain();

    void recogniseFace(bool awake, int numberMeetingsWithPerson);
    void estimateDistance(int distance);
    bool constructLanguage(int age);
    int findFaceInMemory();
};

Brain::Brain()
        : numNeurons(10e13)

{
}

void Brain::recogniseFace(bool awake, int numberMeetingsWithPerson)
{
    std::cout << "Face" <<  (awake && numberMeetingsWithPerson >= 2 ? " " : " not ") << "recognised" << std::endl;
}

void Brain::estimateDistance(int distance)
{
    std::cout << "Distance: ";
    if (distance < 250 && numNeurons < 10e10)
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

int Brain::findFaceInMemory()
{
    std::vector<unsigned> storageSpace;
    const int faceLocationInMemory = 900;

    for(unsigned val = 0; val <= 1000000; ++val)
    {
        storageSpace.push_back(val);
        if (storageSpace[val] >= faceLocationInMemory)
        {
            std::cout << "Found the correct face at neuron: " << storageSpace[val] << std::endl;
            break;
        }
    }

    return faceLocationInMemory;


}

Brain::Vision::Vision()
        : numberOfFunctioningEyes(2),
          visionQuality(65.5),
          blinksPerSecond(10.0f)
{
}

void Brain::Vision::checkVision(double eyeQuality)
{
    visionQuality = eyeQuality;
    std::cout << "You're vision quality is: " << visionQuality << std::endl;
    if (eyeQuality < 45.8)
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

void Brain::Vision::visionTest()
{
    const unsigned numQuestions = 25;
    bool result; // pass/fail
    int count = 0;

    std::uniform_int_distribution<unsigned> answer(0, 1);
    std::default_random_engine e;
    std::cout << "RANDOM ANSWER DATA: ";
    for (size_t i = 0; i < numQuestions; ++i)
    {
        answer(e);
        result = answer(e);
        //std::cout << result << " ";
        if (result)
        {
            ++count;
        }
        std::cout << result << " ";
    }
    std::cout << "\n" <<(count > 20 ? "EYESIGHT TEST PASSED" : "EYESIGHT TEST FAILED") << std::endl;

}
void Brain::Vision::issueDriversLicense()
{
    visionTest();
}

//============================================================================

struct Chord
{
    int numberOfNotes = 4;
    std::string nextChordList = "F#7, B";
    std::string chordInRomanNumerals = "V7";
    bool alteredChord = false;
    std::string precedingChordList;

    Chord();

    int makeSound(int noteNumber);
    int playArpeggio(int numberOfHeldNotes);
    int playNothing(int numberOfNotes);
    void playThroughAllKeys();
};

Chord::Chord()
        : precedingChordList("C#m, D#m")
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

void Chord::playThroughAllKeys()
{
    std::vector<int> keyboardRange;
    int currentNote = 21;
    std::cout << "Note played: ";

    while (currentNote <= 108)
    {
        makeSound(currentNote);
        ++currentNote;
        std::cout << "CC" << currentNote << "-";
    }
    std::cout << std::endl;
}

//=======================================================================

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
    int velocityLimiter(int noteVelocity);
};

Keys::Keys()
{
    std::cout << "WARNING: Key object operating in DEBUG mode" << std::endl;
}

bool Keys::playGlide(float glideNumber)
{
    std::cout << "Glide val: " << glideValue << std::endl;
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

int Keys::velocityLimiter(int keyVelocity)
{
    const int velocityLimitLow = 26;
    const int velocityLimitHigh = 100;
    if (keyVelocity < velocityLimitLow)
    {
        std::cout << "Note velocity is lower than velocity limiter. Velocity constrained to " << velocityLimitLow;
        return velocityLimitLow;
    }
    else if(keyVelocity > velocityLimitHigh)
    {
        std::cout << "Note velocity greater than velocity limiter. Velocity constrained to " << velocityLimitHigh;
        return velocityLimitHigh;
    }
    return keyVelocity;
}

//=======================================================================

struct Oscillator
{
    int oscillatorPitch;
    unsigned oscillatorOctave = 16;
    int oscillatorLevel = -6;
    std::string oscillatorPitchSource = "Keyboard";
    std::string oscillatorWaveform = "pulse";

    Oscillator();

    int makeSound(int oscillatorPitch);
    void makeOscillatorAnLFO(int oscillatorFrequency);
    int makeOscillatorSquareWave(int oscillatorWave);
    void getPhaseIndex();
    std::vector<int> populateWaveWithData();

};

Oscillator::Oscillator()
{
    oscillatorPitch = 875;
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

std::vector<int> Oscillator::populateWaveWithData()
{
    std::vector<int> container {0, 3, 7, 7, 10, 4, 5, 6, 3, 8};
    std::vector<int> waveFormSamples;

    for (unsigned sample = 0; sample < 10; ++sample)
    {
        waveFormSamples.push_back(container[sample]);
    }

    std::cout << "Sample values for wave: ";

    for(auto c : waveFormSamples)
    {
        std::cout << c << " ";
    }

    return waveFormSamples;
}

//=======================================================================

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
    int findHpStopBand(int hpCutoff);
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
    std::cout << "Resonance: " << resonance << std::endl;
    return resonance;
}

int Filter::getAutomationFromHost(int parameterNumber)
{
    return parameterNumber;
}
int Filter::findHpStopBand(int hpCutoff)
{
    int humanHearingRangeHigh = 20000;
    int stopBand = 0;

    for (int frequency = 20; frequency <= humanHearingRangeHigh; ++frequency)
    {
        if(frequency == hpCutoff)
        {
            stopBand = humanHearingRangeHigh - hpCutoff;
            std::cout << "stop band < " << stopBand << "Hz" << std::endl;
        }
    }
    return stopBand;
}

//=======================================================================

struct AmplitudeEnvelope
{
    int attack;
    int decay;
    int sustain;
    int release;
    int hold;

    AmplitudeEnvelope();

    void changeAttack(int newAttack);
    int getAutomationFromHost(int parameterNumber);
    int changeDryWetMix(int wetValue);
    void emergencyVolumeLimiter();

};

AmplitudeEnvelope::AmplitudeEnvelope()
        : attack(34),
          decay (45),
          sustain(100),
          release(20),
          hold(0)
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

void AmplitudeEnvelope::emergencyVolumeLimiter()
{
    std::vector<double> buffer;

    static std::default_random_engine engine;
    static std::uniform_int_distribution<unsigned> distribution(0, 2);


    for(size_t i = 0; i < 20; ++i)
    {
        buffer.push_back(distribution(engine));
    }

    std::cout << "Buffer sample value: ";
    for (unsigned i = 0; i < buffer.size(); ++i)
    {
        if (buffer[i] > 1)
        {
            //std::cout <<"WARNING! AMPLITUDE HAS EXCEED THRESHOLD: ";
            buffer[i] = 1;
        }
        std:: cout << buffer[i] << " ";
    }
}

//=======================================================================

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
    void userSelectedNoteDuration(double noteDuration);
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

void Arpeggiator::userSelectedNoteDuration(double noteDuration)
{
    std::map<double, std::string> noteLengths
    {
        {4.0, "semibreve"},
        {2.0, "minim"},
        {1.0, "crotchet"},
        {0.5, "quaver"},
        {0.25, "semiquaver"}
    };

    std::vector<double> noteLengthVector = {4.0, 2.0, 1.0, 0.5, 0.25};
    std::cout << "Chose from the following note durations: ";

    for (auto c : noteLengthVector)
        std::cout << c << ", ";

    std::cout << std::endl;

    if(noteDuration == 4.0)
    {
        std::cout << noteLengths[4.0] << " beats per 4-4 bar = 1";
    }
    else if(noteDuration == 2.0)
    {
        std::cout << noteLengths[2.0] << " beats per 4-4 bar = 2";
    }
    else if(noteDuration == 1.0)
    {
        std::cout << noteLengths[1.0] << " beats per 4-4 bar = 4";
    }
    else if(noteDuration == 0.5)
    {
        std::cout << noteLengths[0.5] << " beats per 4-4 bar = 8";
    }
    else if(noteDuration == 0.25)
    {
        std::cout << noteLengths[0.25] << " beats per 4-4 bar = 16";
    }
    else
    {
        std::cout << "ERROR! Note duration not available" << std::endl;
    }
}

//=======================================================================

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
    void chordTypeSelector(std::string mode);
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

void Synthesiser::chordTypeSelector(std::string mode)
{
    std::map<std::string, std::vector<int> > chordType
    {
        {"major", {0, 4, 7}},
        {"minor", {0, 3, 7}},
        {"diminished", {0, 3, 6}},
        {"augmented", {0, 4, 8}}
    };

    std::cout << "You have selected the " << mode << " mode, which contains pitch classes: ";
    for (unsigned i = 0; i < 3; ++i)
    {
        std::cout << chordType[mode][i] << " ";
    }
    std::cout << std::endl;
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

    // 3) Instantiating UDTs
    Dragon d;

    HighRise badgerClose;
    HighRise highRise;

    HighRise::Lift lift;


    Brain einstein;
    einstein.recogniseFace(true, 5);


    Brain::Vision wanda;
    Chord fSharp;
    Keys keys;
    keys.velocityLimiter(120);


    Oscillator osc;
    osc.populateWaveWithData();

    Filter filter;
    filter.findHpStopBand(7600);

    AmplitudeEnvelope ampEnv;
    ampEnv.emergencyVolumeLimiter();

    Arpeggiator arp;
    arp.userSelectedNoteDuration(0.25);


    Synthesiser synth;
    synth.chordTypeSelector("augmented");


    Dragon dragon;
    dragon.breathFire(8, "Smaug");
    dragon.spellBirthplace("Hull");


    Chord chord;
    std::cout << "Make Sound: " << chord.makeSound(67) << std::endl;
    chord.playThroughAllKeys();


    HighRise resident;
    std::cout << "Pay your invoice!: " << resident.printInvoiceResident(1235) << std::endl;
    std::cout << "Lifts: " << resident.lifts << std::endl;


    HighRise::Lift lift2;
    std::cout << "Resident roomNumber: " << lift2.roomNumber << std::endl;
    lift2.moveLift(5);
    lift2.visitEveryFloor(34);


    Brain person;
    person.estimateDistance(678);
    person.findFaceInMemory();


    Brain::Vision vision;
    vision.issueDriversLicense();


    std::cout << "good to go!" << std::endl;
}
