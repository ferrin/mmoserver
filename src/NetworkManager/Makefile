CXXFLAGS = -g -std=c++0x -fPIC -I. -I..

LIBDIR = ../../lib

OBJS = \
CompCryptor.o \
NetConfig.o \
NetworkClient.o \
NetworkManager.o \
PacketFactory.o \
Service.o \
Session.o \
SessionFactory.o \
SocketReadThread.o \
SocketWriteThread.o \

$(LIBDIR)/libswganhNetworkManager.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhNetworkManager.so
