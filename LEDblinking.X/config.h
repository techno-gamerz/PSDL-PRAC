// config.h

#ifndef CONFIG_H
#define CONFIG_H

// PIC18F4550 Configuration Bit Settings
// These settings can also be done through the GUI
#pragma config FOSC = HS      // Oscillator Selection bits (HS oscillator)
#pragma config WDT = OFF      // Watchdog Timer (Disabled)
#pragma config LVP = OFF      // Low Voltage ICSP (Disabled)
#pragma config PBADEN = OFF   // PORTB<4:0> are digital I/O on Reset

#define _XTAL_FREQ 1000000    // 1 MHz external crystal

// LED pin definitions
#define LED LATBbits.LATB0
#define LED_TRIS TRISBbits.TRISB0

#endif
