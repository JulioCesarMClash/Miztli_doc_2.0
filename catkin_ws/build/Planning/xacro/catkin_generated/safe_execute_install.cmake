execute_process(COMMAND "/home/festino/Miztli_doc_2.0/catkin_ws/build/Planning/xacro/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/festino/Miztli_doc_2.0/catkin_ws/build/Planning/xacro/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
