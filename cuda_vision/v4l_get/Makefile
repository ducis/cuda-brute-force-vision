all : vg piper
	
vg: v4l_get.cpp
	g++ -O3 -lrt -lv4l2 -lv4lconvert -ovg v4l_get.cpp

piper: piper.cpp
	g++ -O3 -lrt -opiper piper.cpp

clean:
	rm vg piper

netTest:
	./netTest
netTestT:
	./netTestT
