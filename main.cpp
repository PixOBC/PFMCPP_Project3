/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects,
    until the smallest object is made of up only C++ primitives.

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties.

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double.

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)

    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example:
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
    1) is key depressed
    2) velocity of key pressed (1-127)
    3) MIDI number of note pressed (1-127)
    4) Is note legato (note held, while another is played)
    5) Is keyboard set to monophonic
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
    3) volume of oscillator
    4) is oscillator controlled by pitch via keys
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
    5) Envelope is on
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
    5) reset filter with each note (bool)
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
