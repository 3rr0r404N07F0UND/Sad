class Emotion {
  private boolean imSad;

  Emotion() {
    this.imSad = true;
  }

  public boolean sad() {
    System.out.print("When I get sad, ");

    return this.imSad;
  }

  public void sadStop() {
    this.imSad = false;
    System.out.print("I stop being sad ");
  }

  public void beAwesome() {
    System.out.print("and be awesome instead");
  }
}

class Sad {
  public static void main(String[] args) {
    Emotion myEmotion = new Emotion();

    // life motto
    if (myEmotion.sad() == true) {
      myEmotion.sadStop();
      myEmotion.beAwesome();
    }
  }
}
