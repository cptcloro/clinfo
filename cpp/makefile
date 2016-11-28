CXX = g++
CXXFLAGS = -o

all:
	for filename in *; do \
	  case $$filename in \
	    *.cpp) echo $${filename%.*pp}; \
		 $(CXX) $(CXXFLAGS) $${filename%.*c}.o $$filename; \
	  esac \
	done

clean:
	rm -f *.o
