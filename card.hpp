#pragma once

#include <array>
#include <string>

enum class Tag{up, down};
enum class Suit{clubs, diamonds, hearts, spades};

struct Card
{
  std::string title;
  Tag tag = Tag::down;
  Suit suit = Suit::clubs;
  int rank = 0;
  Card* next = nullptr;
};

struct Deck
{
  Card* cards;
  Deck()
  {
    
  }
};
