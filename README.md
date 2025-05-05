# Component *LinkGsm*
This repo consists of component *LinkGsm*. It is a part of example application *[broker](https://github.com/slawomir-niespodziany/diff_broker)* which demonstrates the use of *[diff](https://github.com/slawomir-niespodziany/diff)* framework. 

Component *LinkGsm* is a GSM communication link mock. It implements *ILink* interface. 

<p align="center"><a href="include/LinkGsm.h"><img src="img/LinkGsm.png" alt="LinkGsm interface"/></a></p>

## Installation
*It is recommended to build and run the whole demo app at once, by following the guide in *[broker](https://github.com/slawomir-niespodziany/diff_broker)* repo. If you only want to install this single component, then proceed with this document.*

This component requires the *ILink* interface to be available in the local CMake registry. Please refer to the documentation of *[ilink](https://github.com/slawomir-niespodziany/diff_broker_ilink)* for installation guide.

The following commands can be run from within the component directory. They build and install the component in your local CMake registry. 
```
cmake -Bbuild -DCMAKE_EXPORT_PACKAGE_REGISTRY=ON
cmake --build build
```

## Prerequisites
The whole demo had been prepared and tested on Ubuntu 22.04 and Ubuntu 24.04. That being said, you only need *gcc* and *cmake* to build and install this component. The recent versions (incl. *cmake 4.0.1*) can be downloaded using following commands. 
```
sudo apt -y install build-essential
sudo snap install cmake --classic
```

## Testing
The component can be tested in isolation from the whole application. The following command, executed from the component directory, runs the prepared tests.
```
ctest --test-dir build/test
```
