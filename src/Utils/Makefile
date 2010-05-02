CXXFLAGS = -g -ansi -pedantic -Wall -std=c++0x -fPIC -I. -I..

LIBDIR = ../../lib

OBJS = \
bstring.o \
clock.o \
EventHandler.o \
rand.o \
Scheduler.o \
StreamColors.o \
Timer.o \
utils.o \
VariableTimeScheduler.o \

$(LIBDIR)/libswganhUtils.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhUtils.so
