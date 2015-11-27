include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)

#Specific, console
include(../RibiClasses/CppCanvas/CppCanvas.pri)
include(../RibiClasses/CppDotMatrix/CppDotMatrix.pri)
include(../RibiClasses/CppTextCanvas/CppTextCanvas.pri)

#Specific, desktop
include(../ValentineCardDecrypter/ValentineCardDecrypterDesktop.pri)

SOURCES += qtmain.cpp
