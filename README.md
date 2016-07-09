# BasicRestfulServiceCPP14
Here you see a a basic Restful Service Consumer in Modern C++14 deployed in Linux Environment

I) Program utilizes jsoncpp as JSON Parser Framework.
II) HTTP request works based on simple network socket.
III) Tested in Ubuntu Version 14
IV) IDE: Eclipse Neon
V) GCC & G++ Version 6.1.0

To compile and run
	cd BasicRestfulServiceCPP/Debug
	make clean
	make
	./BasicRestfulServiceCPP

For this program I developed a simple Web Service Program in NodeJS: https://github.com/JAlikhani/BooksWebServiceNodeJS
	
Compile and run example:

parallels@ubuntu:~/Documents/Projects$ cd BasicRestfulServiceCPP
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP$ ls
Debug  include  src
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP$ cd Debug
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ make
make: `src/BasicRestfulServiceCPP.o' is up to date.
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ make clean
rm -rf  ./src/BasicRestfulServiceCPP.o ./src/Http.o ./src/JSONParser.o ./src/jsoncpp.o  ./src/BasicRestfulServiceCPP.d ./src/Http.d ./src/JSONParser.d ./src/jsoncpp.d  BasicRestfulServiceCPP
 
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ make
Building file: ../src/BasicRestfulServiceCPP.cpp
Invoking: GCC C++ Compiler
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/BasicRestfulServiceCPP.d" -MT"src/BasicRestfulServiceCPP.o" -o "src/BasicRestfulServiceCPP.o" "../src/BasicRestfulServiceCPP.cpp"
Finished building: ../src/BasicRestfulServiceCPP.cpp
 
Building file: ../src/Http.cpp
Invoking: GCC C++ Compiler
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Http.d" -MT"src/Http.o" -o "src/Http.o" "../src/Http.cpp"
Finished building: ../src/Http.cpp
 
Building file: ../src/JSONParser.cpp
Invoking: GCC C++ Compiler
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/JSONParser.d" -MT"src/JSONParser.o" -o "src/JSONParser.o" "../src/JSONParser.cpp"
Finished building: ../src/JSONParser.cpp
 
Building file: ../src/jsoncpp.cpp
Invoking: GCC C++ Compiler
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/jsoncpp.d" -MT"src/jsoncpp.o" -o "src/jsoncpp.o" "../src/jsoncpp.cpp"
Finished building: ../src/jsoncpp.cpp
 
Building target: BasicRestfulServiceCPP
Invoking: GCC C++ Linker
g++  -o "BasicRestfulServiceCPP"  ./src/BasicRestfulServiceCPP.o ./src/Http.o ./src/JSONParser.o ./src/jsoncpp.o   
Finished building target: BasicRestfulServiceCPP
 
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ ls
BasicRestfulServiceCPP  makefile  objects.mk  sources.mk  src
parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ ./BasicRestfulServiceCPP
1:
title: In Search of Lost Time
author: Marcel Proust

2:
title: Moby Dick
author: Herman Melville

3:
title: Hamlet
author: William Shakespeare

4:
title: The Odyssey
author: Homer

parallels@ubuntu:~/Documents/Projects/BasicRestfulServiceCPP/Debug$ 



