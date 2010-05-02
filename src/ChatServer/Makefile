CXXFLAGS = -g -std=c++0x -I. -I.. -fPIC

BINDIR = ../../bin
LIBDIR = ../../lib

# ChatServer - executable
BINS = $(BINDIR)/ChatServer

LIBS = \
-lboost_thread \
-lmysqlclient \
-L$(LIBDIR) \
-lswganhConfigManager \
-lswganhCommon \
-lswganhDatabaseManager \
-lswganhLogManager \
-lswganhNetworkManager \
-lswganhUtils

OBJS = \
Channel.o \
CharacterAdminHandler.o \
ChatAvatarId.o \
ChatManager.o \
ChatMessageLib.o \
ChatMessages.o \
ChatServer.o \
CSRManager.o \
CSRMessages.o \
GroupManager.o \
GroupMessages.o \
GroupObject.o \
PlanetMapHandler.o \
Player.o \
StructureManagerChat.o \
TradeManagerChat.o \
TradeManagerHelp.o \
TradeMessages.o

$(BINS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LIBS) -o $@

clean:
	rm -f $(OBJS) $(BINS) *~
