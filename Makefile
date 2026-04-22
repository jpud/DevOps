all: catalog_reader

catalog_reader: catalog_reader.cpp
	g++ -o catalog_reader catalog_reader.cpp

clean:
	rm -f catalog_reader
