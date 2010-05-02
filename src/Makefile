
BINDIR = ../bin
LIBDIR = ../lib

#Libraries to build first
LIBS = \
$(LIBDIR)/libswganhCommon.so \
$(LIBDIR)/libswganhConfigManager.so \
$(LIBDIR)/libswganhDatabaseManager.so \
$(LIBDIR)/libswganhLogManager.so \
$(LIBDIR)/libswganhMessageLib.so \
$(LIBDIR)/libswganhNetworkManager.so \
$(LIBDIR)/libswganhScriptEngine.so \
$(LIBDIR)/libswganhUtils.so

#This is the oddball since is creates a lib and a executables.
LIBBIN = $(BINDIR)/ZoneServer

#Lastly create the rest of the executables.
BINS = \
$(BINDIR)/ChatServer \
$(BINDIR)/ConnectionServer \
$(BINDIR)/LoginServer \
$(BINDIR)/PingServer \


all: $(BINS)

$(LIBDIR)/libswganhCommon.so:
	$(MAKE) -C Common

$(LIBDIR)/libswganhConfigManager.so:
	$(MAKE) -C ConfigManager

$(LIBDIR)/libswganhDatabaseManager.so:
	$(MAKE) -C DatabaseManager

$(LIBDIR)/libswganhLogManager.so:
	$(MAKE) -C LogManager

$(LIBDIR)/libswganhMessageLib.so:
	$(MAKE) -C MessageLib

$(LIBDIR)/libswganhNetworkManager.so:
	$(MAKE) -C NetworkManager

$(LIBDIR)/libswganhScriptEngine.so:
	$(MAKE) -C ScriptEngine

$(LIBDIR)/libswganhUtils.so:
	$(MAKE) -C Utils

$(BINDIR)/ChatServer: $(LIBS) $(LIBBIN)
	$(MAKE) -C ChatServer

$(BINDIR)/ConnectionServer: $(LIBS) $(LIBBIN)
	$(MAKE) -C ConnectionServer

$(BINDIR)/LoginServer: $(LIBS) $(LIBBIN)
	$(MAKE) -C LoginServer

$(BINDIR)/PingServer: $(LIBS) $(LIBBIN)
	$(MAKE) -C PingServer

$(BINDIR)/ZoneServer: $(LIBS)
	$(MAKE) -C ZoneServer


clean:
	$(MAKE) -C Common clean;
	$(MAKE) -C ConfigManager clean;
	$(MAKE) -C DatabaseManager clean;
	$(MAKE) -C LogManager clean;
	$(MAKE) -C MessageLib clean;
	$(MAKE) -C NetworkManager clean;
	$(MAKE) -C ScriptEngine clean;
	$(MAKE) -C Utils clean;
	$(MAKE) -C ChatServer clean;
	$(MAKE) -C ConnectionServer clean;
	$(MAKE) -C LoginServer clean;
	$(MAKE) -C PingServer clean;
	$(MAKE) -C ZoneServer clean;
