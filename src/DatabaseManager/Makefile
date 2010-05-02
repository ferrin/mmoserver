CXXFLAGS = -g -std=c++0x -fPIC -I. -I.. -I/usr/include/mysql

LIBDIR = ../../lib

OBJS = \
Database.o \
DatabaseImplementationMySql.o \
DatabaseManager.o \
DatabaseResult.o \
DatabaseWorkerThread.o \
DataBindingFactory.o \
Transaction.o

$(LIBDIR)/libswganhDatabaseManager.so: $(OBJS)
	$(CXX) -shared $(OBJS) -o $@

clean:
	rm -f $(OBJS) *~ $(LIBDIR)/libswganhDatabaseManager.so
