class Emotion:
  __im_sad: bool | None = None

  def __init__(self) -> None:
    self.__im_sad = True

  def sad(self) -> bool:
    print("When I get sad, ", end = "")
    return self.__im_sad

  def sad_stop(self) -> None:
    self.__im_sad = False
    print("I stop being sad ", end = "")

  def be_awesome(self) -> None:
    print("and be awesome instead", end = "")

myEmotion: Emotion = Emotion()

# life motto
if (myEmotion.sad() is True):
  myEmotion.sad_stop()
  myEmotion.be_awesome()

