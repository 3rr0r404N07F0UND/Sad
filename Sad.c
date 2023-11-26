#include <stdbool.h>
#include <stdio.h>

typedef struct {
  bool im_sad;
} Emotion;

void emotion_init(Emotion *inner_emotion) { inner_emotion->im_sad = true; }

bool emotion_sad(Emotion *inner_emotion) {
  printf("When I get sad, ");

  return inner_emotion->im_sad;
}

void emotion_sad_stop(Emotion *inner_emotion) {
  inner_emotion->im_sad = false;

  printf("I stop being sad ");
}

void emotion_be_awesome() { printf("and be awesome instead"); }

int main(void) {
  Emotion my_emotion;
  emotion_init(&my_emotion);

  if (emotion_sad(&my_emotion) == true) {
    emotion_sad_stop(&my_emotion);
    emotion_be_awesome();
  }

  return 0;
}
