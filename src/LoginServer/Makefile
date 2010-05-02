CXXFLAGS = -g -std=c++0x -I. -I.. -fPIC

BINDIR = ../../bin
LIBDIR = ../../lib

BINS = $(BINDIR)/LoginServer

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
-lswganhZoneServer \
-lswganhScriptEngine \
-lswganhUtils \
-lswganhCommon

#-lswganhCommon \

OBJS = \
LoginManager.o \
LoginServer.o

$(BINS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LIBS) -ltolua -o $@

clean:
	rm -f $(OBJS) $(BINS) *~
