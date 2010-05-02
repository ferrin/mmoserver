CXXFLAGS = -g -std=c++0x -fPIC -I. -I.. -I../../../deps/glm \
-I/usr/include/libnoise -I/usr/include/lua5.1

LIBDIR = ../../lib

OBJS = \
Script.o \
ScriptEngine.o \
ScriptEngineLib.o \
ScriptEventListener.o \
ScriptSupport.o \
glue_files/LuaInterface.o

$(LIBDIR)/libswganhScriptEngine.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhScriptEngine.so
