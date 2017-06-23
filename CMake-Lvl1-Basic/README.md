To "make target (`hello.exe`)" (out-of-source build):
1. `mkdir build && cd build`
2. `cmake .. -DCMAKE_BUILD_TYPE=Release -G "Unix Makefiles"`
3. `make`