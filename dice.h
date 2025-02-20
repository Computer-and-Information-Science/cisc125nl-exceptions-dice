/**
 * @file dice.h
 * @brief A class representing a collection of dice
 * @author N. Lippincott, Northampton Community College
 */
#pragma once

#include <string>

/**
 * Represents a collection of dice
 *
 * A collection includes from 1 through 6 dice, determined when a Dice
 * object is created. This class supports the ability to "roll" the dice
 * and retrieve various values related to the collection.
 */
class Dice {
private:
  int dice_values[6];
  int dice_count;
public:
  /**
   * Creates a pair of dice
   *
   * The default constructor create a pair of dice; a collect of 2 dice.
   */
  Dice();
  /**
   * Creates a collect of 1 through 6 dice
   *
   * This constructor supports the creation of a Dice object representing
   * from 1 through 6 dice. If the number of dice is outside the allowable
   * range, and exception is thrown.
   *
   * @param n_dice Number of dice in the collection
   */
  Dice(int n_dice);
  /**
   * Retrieve number of dice in the collection that have a given value
   *
   * @param value The value (1 through 6) of interest
   * @return Number of dice with the given value
   */
  int count(int value) const;
  /**
   * Retrieve the value of a specific die in the collection
   *
   * @param index Index (zero-based) of the die of interest
   * @return Value on the given die
   */
  int die(int index) const;
  /**
   * Roll the dice in the collection
   *
   * Assigns a random number from 1 through 6 to each die in the collection
   */
  void roll();
  /**
   * Retrieves the number of dice in the collection
   *
   * @return Number of dice
   */
  int size() const;
  /**
   * Get a string representation of the values in the collection
   *
   * Constructs a string containing the values of all the dice in the
   * collection separated by hyphens. This may be used to easily output
   * a visual representation of the dice.
   */
  std::string str() const;
  /**
   * Retrieve the total of all dice values
   *
   * @return Sum of values of all dice
   */
  int total() const;
};