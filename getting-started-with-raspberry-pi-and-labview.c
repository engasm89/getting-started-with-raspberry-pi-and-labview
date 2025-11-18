/*
 * Course: Getting Started With Raspberry Pi And Labview
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Getting Started With Raspberry Pi And Labview" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Raspberry Pi)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/getting-started-with-raspberry-pi-and-labview/
 * Repository: https://github.com/engasm89/getting-started-with-raspberry-pi-and-labview
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Getting Started With Raspberry Pi And Labview
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Getting Started With Raspberry Pi And Labview
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for LabVIEW-friendly prints
#include <unistd.h> // Include POSIX sleep functions

// Define a GPIO to visualize LabVIEW commands
static const int LED_GPIO = 17; // LED on GPIO17

// Stub functions to emulate GPIO operations
int gpio_export(int gpio) { return 0; } // Export GPIO
int gpio_set_direction(int gpio, int output) { return 0; } // Set direction
int gpio_write(int gpio, int value) { return 0; } // Write value

// Program entry point
// Main routine: orchestrates the getting started with raspberry pi and labview scenario
int main(void) { // Start of main function
  printf("LabVIEW Link Demo: send 'ON'/'OFF' to control LED\n"); // Startup message
  gpio_export(LED_GPIO); // Export LED GPIO
  gpio_set_direction(LED_GPIO, 1); // Configure as output
  char cmd[8]; // Command buffer
  while (fgets(cmd, sizeof(cmd), stdin)) { // Read command from stdin
    if (cmd[0] == 'O' && cmd[1] == 'N') { // Check for ON command
      gpio_write(LED_GPIO, 1); // Turn LED on
      printf("ACK:ON\n"); // Acknowledge for LabVIEW
    } else if (cmd[0] == 'O' && cmd[1] == 'F' && cmd[2] == 'F') { // Check for OFF command
      gpio_write(LED_GPIO, 0); // Turn LED off
      printf("ACK:OFF\n"); // Acknowledge for LabVIEW
    } else { // Unknown command
      printf("ERR\n"); // Error acknowledgment
    } // End command parsing
    usleep(100000); // Small delay
  } // End input loop
  return 0; // Exit successfully
} // End of main function

