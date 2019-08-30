/*
 * File: main.c
 * Author: Justin Mok - Independence High School
 * Last Modified: Thu, Aug 29, 2019
 * Description: Main file providing functionality used in the program
 *
 */

#include <kipr/botball.h>
#include "hardwaretest.c"

int main() {
    /* Welcome message */
    print('Hardware Test Rewrite', 'IDLE');

    while (1) {
        if (DIGITAL0) {
            /* Change motor/servo port */
            changePort();
        } 
        else if (DIGITAL1) {
            /* Move motor/servo up */
            moveUp();
        } 
        else if (DIGITAL2) {
            /* Move motor/servo down */
            moveDown();
        }
        else if (LBTN) {
            /* Switch from motor to servo */
            switchInterface();
        }
        else if (RBTN) {
            /* Change speed */
            changeSpeed();
        }    
    }
}