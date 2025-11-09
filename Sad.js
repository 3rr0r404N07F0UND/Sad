class Emotion {
  #imSad;
  constructor() {
    this.#imSad = true;
  }
  sad() {
    process.stdout.write("When I get sad, ");
    return this.#imSad;
  }
  sadStop() {
    this.#imSad = false;
    process.stdout.write("I stop being sad ");
  }
  beAwesome() {
    process.stdout.write("and be awesome instead");
  }
}

const myEmotion = new Emotion();

// life motto
if (myEmotion.sad() === true) {
  myEmotion.sadStop();
  myEmotion.beAwesome();
}

