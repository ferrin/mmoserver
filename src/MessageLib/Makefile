CXXFLAGS = -g -std=c++0x -fPIC -I. -I.. -I../../../deps/glm \
-I/usr/include/libnoise -I/usr/include/spatialindex

LIBDIR = ../../lib

OBJS = \
BuildingMessages.o \
CommonMessages.o \
CreatureMessages.o \
FactoryCrateMessages.o \
HarvesterMessages.o \
IntangibleMessages.o \
InternalMessages.o \
ManSchematicMessages.o \
MessageLib.o \
MissionMessages.o \
ObjControllerMessages.o \
PlayerMessages.o \
ResourceContainerMessages.o \
StaticMessages.o \
StructureMessages.o \
SystemMessages.o \
TangibleMessages.o


$(LIBDIR)/libswganhMessageLib.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhMessageLib.so
