######################################################################
# Automatically generated by qmake (3.1) Wed Jan 25 18:59:13 2023
######################################################################

TEMPLATE = app
TARGET = Bolas
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += bola.h \
           darrastraimagen.h \
           dconfvelocidades.h \
           dconfvisualbolas.h \
           dexamen.h \
           dinformacion.h \
           dinfotabla.h \
           dpararbolas.h \
           mainwindow.h \
           miboton.h \
           widgetbordes.h \
           widgetconfbola.h \
           widgetconfvelocidad.h
FORMS += darrastraimagen.ui \
         dconfvelocidades.ui \
         dconfvisualbolas.ui \
         dexamen.ui \
         dinfotabla.ui \
         dpararbolas.ui \
         widgetconfbola.ui \
         widgetconfvelocidad.ui
SOURCES += bola.cpp \
           darrastraimagen.cpp \
           dconfvelocidades.cpp \
           dconfvisualbolas.cpp \
           dexamen.cpp \
           dinformacion.cpp \
           dinfotabla.cpp \
           dpararbolas.cpp \
           main.cpp \
           mainwindow.cpp \
           miboton.cpp \
           widgetbordes.cpp \
           widgetconfbola.cpp \
           widgetconfvelocidad.cpp
QT += widgets
