QT       += core gui
QT       += xml
QT       += charts
QT       += core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barChart.cpp \
    chart.cpp \
    controller.cpp \
    dataHandler.cpp \
    fileHandler.cpp \
    lineChart.cpp \
    main.cpp \
    model.cpp \
    pieChart.cpp \
    subject.cpp \
    view.cpp

HEADERS += \
    barChart.h \
    chart.h \
    controller.h \
    dataHandler.h \
    fileHandler.h \
    lineChart.h \
    model.h \
    pieChart.h \
    subject.h \
    view.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
