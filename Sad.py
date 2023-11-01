class Emotion:
  __im_sad = None

  def __init__(self):
    self.__im_sad = True

  def sad(self):
    print("When I get sad, ", end = "")
    return self.__im_sad

  def sad_stop(self):
    self.__im_sad = False
    print("I stop being sad ", end = "")

  def be_awesome(self):
    print("and be awesome instead", end = "")

myEmotion = Emotion()

# life motto
if (myEmotion.sad() is True):
  myEmotion.sad_stop()
  myEmotion.be_awesome()
