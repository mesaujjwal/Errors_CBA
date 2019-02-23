language: cpp
compiler: gcc
dist: trusty

before_install:
# C++14
  - sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
  - sudo apt-get update -qq

install: 
 # C++14
  - sudo apt-get install -qq g++-6
  - sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-6 90
 # cppcheck
  - sudo apt-get install -qq cppcheck

 script: 
 # Build and run this project
  - qmake
  - make
  - ./travis_qmake_gcc_cpp14_cppcheck
        # cppcheck (mild)
  - cppcheck --quiet . 
        # cppcheck that makes the Travis build fail
        #- cppcheck --quiet --error-exitcode=1 . 

