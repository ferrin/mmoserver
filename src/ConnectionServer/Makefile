CXXFLAGS = -g -std=c++0x -I. -I.. -fPIC

BINDIR = ../../bin
LIBDIR = ../../lib

BINS = $(BINDIR)/ConnectionServer

LIBS = \
-lspatialindex \
-lnoise \
-lboost_thread \
-lmysqlclient \
-llua5.1 \
-L$(LIBDIR) \
-lswganhConfigManager \
-lswganhDatabaseManager \
-lswganhLogManager \
-lswganhMessageLib \
-lswganhNetworkManager \
-lswganhUtils \
-lswganhCommon \
-lswganhZoneServer \
-lswganhScriptEngine 

OBJS = \
ClientManager.o \
ConnectionDispatch.o \
ConnectionServer.o \
MessageRouter.o \
ServerManager.o

$(BINS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LIBS) -ltolua -o $@

clean:
	rm -f $(OBJS) $(BINS) *~
