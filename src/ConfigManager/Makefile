CXXFLAGS = -g -std=c++0x -fPIC -I. -I..

LIBDIR = ../../lib

OBJS = \
ConfigFile.o \
ConfigManager.o


$(LIBDIR)/libswganhConfigManager.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhConfigManager.so
