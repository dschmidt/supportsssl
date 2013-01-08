find_package(Qt4 COMPONENTS QtCore QtGui QtNetwork REQUIRED)

include(${QT_USE_FILE})

add_executable(supportsSsl main.cpp)

target_link_libraries(supportsSsl ${QT_QTCORE_LIBRARY} ${QT_QTNETWORK_LIBRARY} ${QT_QTGUI_LIBRARY})