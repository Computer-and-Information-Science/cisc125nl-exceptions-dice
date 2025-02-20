/**
 * @file dice.cpp
 * @brief A class representing a collection of dice
 * @author N. Lippincott, Northampton Community College
 */

#include "dice.h" 
#include <exception> 
#include <string>
using namespace std;

Dice::Dice() {
  // Default, sets number of dice to 2
  dice_count = 2;
  roll();
}

Dice::Dice(int n_dice) {
  // Validate number of dice for the collection
  if (n_dice < 1 || n_dice > 6)
    throw "Number of dice out of range.";
  // Set number of dice as requested
  dice_count = n_dice;
  roll();
}

int Dice::count(int value) const {
  // Determine the number of dice with the given value
  int count = 0;
  for (int i = 0; i < dice_count; i++)
    if (dice_values[i] == value)
      count++;
  return count;
}

int Dice::die(int index) const {
  // Get the value of a specific die by zero-based index
  if (index < 0 || index >= dice_count)
    throw "Die index out of range.";
  return dice_values[index];
}

void Dice::roll() {
  // Roll the dice by assigning a random number to each die
  for (int i = 0; i < dice_count; i++)
    dice_values[i] = rand() % 6 + 1;
}

int Dice::size() const {
  // Get the number of dice in the collection
  return dice_count;
}

string Dice::str() const {
  // Build a string that shows values on all dice
  string s;
  for (int i = 0; i < dice_count; i++) {
    if (i > 0)
      s += '-';
    s += to_string(dice_values[i]);
  }
  return s;
}

int Dice::total() const {
  // Calculate the sum of the dice values
  int sum = 0;
  for (int i = 0; i < dice_count; i++)
    sum += dice_values[i];
  return sum;
}
