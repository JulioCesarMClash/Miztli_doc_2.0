# Install script for directory: /home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge/msg" TYPE FILE FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/msg/RecognizedSpeech.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge/srv" TYPE FILE FILES
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/Default_BB_ROS_Bridge.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/Default_ROS_BB_Bridge.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/hd_lookat.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/hd_torque.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/mp_getclose.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/mp_getclose_xy.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/mp_getclose_xya.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/mp_move_dist.srv"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/srv/mp_move_dist_angle.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge/cmake" TYPE FILE FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/build/Interoperation/bbros_bridge/catkin_generated/installspace/bbros_bridge-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/include/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/share/roseus/ros/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/share/common-lisp/ros/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/share/gennodejs/ros/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/lib/python3/dist-packages/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/devel/lib/python3/dist-packages/bbros_bridge")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/build/Interoperation/bbros_bridge/catkin_generated/installspace/bbros_bridge.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge/cmake" TYPE FILE FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/build/Interoperation/bbros_bridge/catkin_generated/installspace/bbros_bridge-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge/cmake" TYPE FILE FILES
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/build/Interoperation/bbros_bridge/catkin_generated/installspace/bbros_bridgeConfig.cmake"
    "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/build/Interoperation/bbros_bridge/catkin_generated/installspace/bbros_bridgeConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/bbros_bridge" TYPE FILE FILES "/home/joel/Repositories/Miztli_doc_2.0/catkin_ws/src/Interoperation/bbros_bridge/package.xml")
endif()

