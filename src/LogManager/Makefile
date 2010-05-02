CXXFLAGS = -g -std=c++0x -fPIC -I. -I..

LIBDIR = ../../lib

OBJS = \
Log.o \
LogManager.o

$(LIBDIR)/libswganhLogManager.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhLogManager.so
