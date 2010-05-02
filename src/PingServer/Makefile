CXXFLAGS = -g -std=c++0x -I. -I.. -fPIC

BINDIR = ../../bin
LIBDIR = ../../lib

BINS = $(BINDIR)/PingServer

LIBS = \
-lboost_thread \
-lboost_system \
-lmysqlclient \
-L$(LIBDIR) \
-lswganhConfigManager \
-lswganhLogManager \
-lswganhUtils \
-lswganhDatabaseManager \
-lswganhNetworkManager \
-lswganhCommon

$(BINS): PingServer.cpp
	$(CXX) $(CXXFLAGS) PingServer.cpp $(LIBS) -ltolua -o $@

clean:
	rm -f $(OBJS) $(BINS) *~
