#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/festino/Miztli_doc_2.0/catkin_ws/src/Planning/kdl_parser/kdl_parser_py"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/festino/Miztli_doc_2.0/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/festino/Miztli_doc_2.0/catkin_ws/install/lib/python2.7/dist-packages:/home/festino/Miztli_doc_2.0/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/festino/Miztli_doc_2.0/catkin_ws/build" \
    "/usr/bin/python2" \
    "/home/festino/Miztli_doc_2.0/catkin_ws/src/Planning/kdl_parser/kdl_parser_py/setup.py" \
    egg_info --egg-base /home/festino/Miztli_doc_2.0/catkin_ws/build/Planning/kdl_parser/kdl_parser_py \
    build --build-base "/home/festino/Miztli_doc_2.0/catkin_ws/build/Planning/kdl_parser/kdl_parser_py" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/festino/Miztli_doc_2.0/catkin_ws/install" --install-scripts="/home/festino/Miztli_doc_2.0/catkin_ws/install/bin"
