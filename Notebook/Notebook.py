import sys

import pyttsx3
import speech_recognition as sr
# Импортируем наш модуль интерфейса my.py
from main import *

class MyWin(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_Notebook()
        self.ui.setupUi(self)
        

        self.ui.action_3.triggered.connect(self.showDialog)
        self.ui.action_2.triggered.connect(self.Recording)
    def Write(self):
        sound = "recorded.wav"
 
        r = sr.Recognizer()
 
 
        with sr.AudioFile(sound) as source:
            r.adjust_for_ambient_noise(source)
            print("Converting Audio To Text ..... ")
            audio = r.listen(source)
 
  
 
        try:
            print("Converted Audio Is : \n" + r.recognize_google(audio, language='ru-RU'))
            line=str(r.recognize_google(audio, language='ru-RU'))
            self.ui.textBrowser.setText(line)
 
        except Exception as e:
            print("Error {} : ".format(e) )
    def Recording(self):
        flag=True
        speak=pyttsx3.init()
        speak.say('Включена функция голосового управления')
        speak.runAndWait()
        while flag:
       
            r = sr.Recognizer()
            with sr.Microphone(device_index=1) as source:
                speak=pyttsx3.init()
                speak.say('Что бы вы хотели')
                speak.runAndWait()
                audio=r.listen(source)
                
            query=r.recognize_google(audio, language='ru-RU')
            str2=query.lower()
            speak=pyttsx3.init()
            speak.say(f'По запросу {str2}')
            speak.runAndWait()
            
            if str2.find('открыть')>=0:
                self.showDialog()
            elif str2.find('закрыть')>=0:
                #flag=False
                #self.close()
                self.Write()
            elif str2.find('выключить')>=0:
                speak=pyttsx3.init()
                speak.say('Функция голосового управления отключена')
                speak.runAndWait()
                flag=False
            else:
                speak=pyttsx3.init()
                speak.say(f'По запросу {str2} ничего не найдено. Повторите запрос')
                speak.runAndWait()
    def showDialog(self):

        fname = QtWidgets.QFileDialog.getOpenFileName(self, 'Open file', '/home')[0]
        #with open(fname, 'r') as file:
            #line=file.read()
            #self.ui.textBrowser.setText(line)
        #file.close()
       
if __name__=="__main__":
    app = QtWidgets.QApplication(sys.argv)
    splash = QtWidgets.QSplashScreen(QtGui.QPixmap('picture\prew.png')) # Загружаем изображение;
    splash.showMessage('Загрузка данных...{0}%',QtCore.Qt.AlignHCenter | QtCore.Qt.AlignBottom, QtCore.Qt.black)
    splash.show() # Отображаем заставку;
    QtWidgets.qApp.processEvents() # Оборот цикла;
    engine=pyttsx3.init()
    engine.say('Привет, я твой голосовой помошник')
    engine.runAndWait()
    splash.setVisible(False)
    myapp = MyWin()
    myapp.show()
    sys.exit(app.exec_())

