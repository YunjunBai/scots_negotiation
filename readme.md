# Welcome to SCOTS

> SCOTSv0.2 is in the making. If you are feeling adventurous have
> look at [SCOTSv0.2](https://gitlab.lrz.de/matthias/SCOTSv0.2)

**SCOTS** is a C++ tool (with a small Matlab interface) to synthesize controller for
possibly perturbed nonlinear control systems with respect to safety and reachability specifications. 

Please read the manual in the manual directory ./manual/manual.pdf

### Requirements

- A C++ development environment where you can compile C++ source code.

- The CUDD library by Fabio Somenzi, which can be downloaded at
    [VLSI@Colorado](http://vlsi.colorado.edu/~fabio/) or [David Kebo](http://davidkebo.com/source/cudd_versions/cudd-3.0.0.tar.gz). 
    SCOTS uses the dddmp and C++ wraper of the CUDD library.

    We use cudd-3.0.0 which we configured with 

    `$./configure --enable-shared --enable-obj --enable-dddmp --prefix=/opt/local/`
    
    Note that on some linux systems, the files config.h and util/util.h do not get copied after  the installation. You have to copy them manually.
    
    You might also need to add the library bibary to your Linux's library search path by the command:
    
    `$export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/local/lib`

- SCOTS itself is a header only library. You only need to add SCOTS source
  directory to the include directory in the compiler command. 

    Further details are found in the readme files in example directories and in the manual.
    For installing and running SCOTS on Windows, please refer to the readme-win.txt file.

### Directory structure

- ./bdd/
    Contains the source C++ source code for the SCOTS classes 
    which use Binary Decision Diagrams as underlying data structure

- ./doc/
    C++ Class documentation directory
  
- ./examples/
    Some C++/Maltab programs demonstrating the usage of SCOTS
  
- ./manual
    Contains a the manuel with its tex source
  
- ./mfiles
    Contains an mfile as a wrapper to the mex-file functions
  
- ./mfiles/mexfiles/
    mex-file to read the C++ output from file 

### Support

Please report any problems/bugs you face while installing and running SCOTS to [Mahmoud Khaled](https://www.hcs.ei.tum.de/en/members/mahmoud/).