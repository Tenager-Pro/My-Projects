import webbrowser
import os
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtGui import QPainter, QColor, QFont
from PyQt5.QtCore import Qt
import os.path
import sys

# Импортируем наш модуль интерфейса my.py
from Menu import *
from Registration import *
from Authorization import *
class MyReg(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.reg = Ui_Registration()
        self.reg.setupUi(self)
        self.reg.lineEdit_4.setEchoMode(QtWidgets.QLineEdit.Password)
        self.reg.pushButton.clicked.connect(self.button)
        self.reg.pushButton_2.clicked.connect(self.home)

    def home(self):
        reg.close()
        first.show()


    def button(self):
        if self.reg.lineEdit.text()=='':
            QtWidgets.QMessageBox.about(self, "EROR", "Please input login!") 
        elif self.reg.lineEdit_2.text()=='':
            QtWidgets.QMessageBox.about(self, "EROR", "Please input name!")  
        elif self.reg.lineEdit_3.text()=='':
            QtWidgets.QMessageBox.about(self, "EROR", "Please input surname!")   
        elif self.reg.lineEdit_4.text()=='':
            QtWidgets.QMessageBox.about(self, "EROR", "Please input password!")
        else:
            login_input=self.reg.lineEdit.text()
            name_input=self.reg.lineEdit_2.text()
            surname_input=self.reg.lineEdit_3.text()
            password_input=self.reg.lineEdit_4.text()
            tech_input=self.reg.comboBox.currentText()
        
        with open("people.txt", "a+") as file:
            line=f'{login_input} {name_input} {surname_input} {password_input} {tech_input}\n'
            
            file.write(line)
        file.close()
        reg.close()
        first.show()
        
class MyAutho(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.autho = Ui_Authorization()
        self.autho.setupUi(self)
        self.autho.pushButton.clicked.connect(self.button)
        self.autho.lineEdit_2.setEchoMode(QtWidgets.QLineEdit.Password)

        with open("safe.txt", "r") as file:
            for line in file:
                line1=line.replace('\n','')
                safe_list = line.split(sep=' ')
                login_output=safe_list[0]
                password_output=safe_list[1]
                check=safe_list[2]
                if check=='1':
                    self.autho.lineEdit.setText(login_output)
                    self.autho.lineEdit_2.setText(password_output)
                    self.autho.checkBox.setChecked(True)
        self.update()
        
    def button(self):
        global first
        global login
        global password
        global name
        global surname
        global tech
        flag =False
        with open("people.txt", "r") as file:
            for line in file:
                line1=line.replace('\n','')
                str_list = line1.split(sep=' ')
                login=str_list[0]
                name=str_list[1]
                surname=str_list[2]
                password=str_list[3]
                tech=str_list[4]
           
                if login==self.autho.lineEdit.text():
                    if password ==self.autho.lineEdit_2.text():
                        if self.autho.checkBox.checkState() == Qt.Checked:
                            file=open("safe.txt", "w") 
                            str1=f'{login} {password} 1'
                            file.write(str1)
                            file.close()
                        else:
                            file=open("safe.txt", "w")
                            str1='no no 0'
                            file.write(str1)
                            file.close()
                        flag=True
                        first = MyWin()
                        first.show()
                        myapp.close()
                        break
                        
        if flag==False:
            QtWidgets.QMessageBox.about(self, "EROR", "Login or password does not exist!")
        
            
class MyWin(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_Menu()
        font = QtGui.QFont()
        font.setPointSize(16)
        font.setBold(True)
        font.setWeight(75)

 
      
        self.ui.setupUi(self)
        line='Name: '+name
        self.ui.label_2.setText(line)
        line='Surname: '+surname
        self.ui.label_4.setText(line)
        
        self.ui.label_5.setText(tech)
        

        
        self.ui.pushButton.clicked.connect(self.buttoninput)
        
        # Здесь прописываем событие нажатия на кнопку                     
        self.ui.pushButton_2.clicked.connect(self.buttonpress)
        
        self.ui.pushButton_3.clicked.connect(self.buttonreg)
        
    # Пока пустая функция которая выполняется
    # при нажатии на кнопку                  
    def buttoninput(self):
        if tech=='FF-adj,S-note,CA':
                
            path=f'C:\\Users\\{login}\\Downloads\\FF-adj, S-note, CA.xlsx'
                
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/ResponsePage.aspx?id=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUOExXQVlYTzRGU01aVUdYNE40VVpGSFFROS4u')
        else:
            self.update()

        if tech=='2 shift':
                
            path=f'C:\\Users\\{login}\\Downloads\\2 shift.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/ResponsePage.aspx?id=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhURURZTkdNUzRCQlQ1WkFVSlA2WUNKM0NFMC4u')
        else:
            self.update()

        if tech=='AL_ML_EL_PrC':
               
            path=f'C:\\Users\\{login}\\Downloads\\AL_ML_EL_PrC.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/ResponsePage.aspx?id=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUMzBUUDdCNjhJS0tSMzhJWlZMOFJXMFgzWC4u')
        else:
            self.update()

        if tech=='Chassis_Line':
                
            path=f'C:\\Users\\{login}\\Downloads\\Chassis_Line.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/ResponsePage.aspx?id=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUOENTMVQ4VVdOMTZTSlE5OVBFOTg1MFgxMC4u')
        else:
            self.update()
                
        if tech=='ML part 2-3+PreB+Tires':
                
            path=f'C:\\Users\\{login}\\Downloads\\ML part 2-3+PreB+Tires.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/ResponsePage.aspx?id=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhURTlCMllGQ05HMDhOMlhMMk5FRDlTWk5JUy4u')
        else:
            self.update()
    def buttonreg(self):
        
        if tech=='admin':
            global reg
            reg = MyReg()
            reg.show()
            first.close()
        else:
            QtWidgets.QMessageBox.about(self, "EROR", "You don't have enough rights!")



    def buttonpress(self):
        
       
        if tech=='FF-adj,S-note,CA':
                
            path=f'C:\\Users\\{login}\\Downloads\\FF-adj, S-note, CA.xlsx'
                
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/DesignPage.aspx?lang=en-US&origin=OfficeDotCom&route=Start#Analysis=true&FormId=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUOExXQVlYTzRGU01aVUdYNE40VVpGSFFROS4u')
        else:
            self.update()

        if tech=='2 shift':
                
            path=f'C:\\Users\\{login}\\Downloads\\2 shift.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/DesignPage.aspx?auth_pvr=OrgId&auth_upn=Artem.Kalashnikov%40volvo.com&lang=en-US&origin=OfficeDotCom&route=Start#Analysis=true&FormId=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhURURZTkdNUzRCQlQ1WkFVSlA2WUNKM0NFMC4u')
        else:
            self.update()

        if tech=='AL_ML_EL_PrC':
               
            path=f'C:\\Users\\{login}\\Downloads\\AL_ML_EL_PrC.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/DesignPage.aspx?auth_pvr=OrgId&auth_upn=Artem.Kalashnikov%40volvo.com&lang=en-US&origin=OfficeDotCom&route=Start#Analysis=true&FormId=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUMzBUUDdCNjhJS0tSMzhJWlZMOFJXMFgzWC4u')
        else:
            self.update()

        if tech=='Chassis_Line':
                
            path=f'C:\\Users\\{login}\\Downloads\\Chassis_Line.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/DesignPage.aspx?auth_pvr=OrgId&auth_upn=Artem.Kalashnikov%40volvo.com&lang=en-US&origin=OfficeDotCom&route=Start#Analysis=true&FormId=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhUOENTMVQ4VVdOMTZTSlE5OVBFOTg1MFgxMC4u')
        else:
            self.update()
                
        if tech=='ML part 2-3+PreB+Tires':
                
            path=f'C:\\Users\\{login}\\Downloads\\ML part 2-3+PreB+Tires.xlsx'
            if os.path.exists(path):       
                os.remove(path)
            webbrowser.open('https://forms.office.com/Pages/DesignPage.aspx?auth_pvr=OrgId&auth_upn=Artem.Kalashnikov%40volvo.com&lang=en-US&origin=OfficeDotCom&route=Start#Analysis=true&FormId=rpNU8pgc10GKMwvnX1_mAyA-Pc6oeWpNh9zXvH4vkNhURTlCMllGQ05HMDhOMlhMMk5FRDlTWk5JUy4u')
        else:
            self.update()

            
if __name__=="__main__":


    
    app = QtWidgets.QApplication(sys.argv)
    myapp = MyAutho()
    myapp.show()
    sys.exit(app.exec_())

