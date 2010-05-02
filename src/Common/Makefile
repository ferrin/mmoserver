CXXFLAGS = -g -std=c++0x -fPIC -I. -I..

LIBDIR = ../../lib

OBJS = \
atMacroString.o \
BuildInfo.o \
bytebuffer.o \
DispatchClient.o \
MessageDispatch.o \
MessageFactory.o

$(LIBDIR)/libswganhCommon.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhCommon.so
