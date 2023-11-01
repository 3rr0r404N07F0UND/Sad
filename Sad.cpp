#include <iostream>

class Emotion {
private:
  bool imSad;

public:
  Emotion() { this->imSad = true; }
  bool sad() {
    std::cout << "When I get sad, ";
    return this->imSad;
  }
  void sadStop() {
    this->imSad = false;
    std::cout << "I stop being sad ";
  }
  void beAwesome() { std::cout << "and be awesome instead"; }
};

int main(void) {
  Emotion *myEmotion = new Emotion();

  // life motto
  if (myEmotion->sad() == true) {
    myEmotion->sadStop();
    myEmotion->beAwesome();
  }
}
