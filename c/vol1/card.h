enum Tag
  {
    FACE_DOWN,
    FACE_UP
  };

enum Suit
  {
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES
  };

enum Rank
  {
    ace,
    one,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
  };


typedef struct
{
  enum Tag tag;
  enum Suit suit;
  enum Rank rank;
  struct Card* card;
} Card;


int test();
