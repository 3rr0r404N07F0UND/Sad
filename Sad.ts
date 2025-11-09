class Emotion {
  #imSad: boolean;
  constructor() {
    this.#imSad = true;
  }
  sad(): boolean {
    process.stdout.write("When I get sad, ");
    return this.#imSad;
  }
  sadStop(): void {
    this.#imSad = false;
    process.stdout.write("I stop being sad ");
  }
  beAwesome(): void {
    process.stdout.write("and be awesome instead");
  }
}

const myEmotion: Emotion = new Emotion();

// life motto
if (myEmotion.sad() === true) {
  myEmotion.sadStop();
  myEmotion.beAwesome();
}

