.PHONY: all
all: store

store: main.o device.o player.o tv.o appliances.o laptop.o iElectronics.o store.o
	gcc -o store main.o device.o player.o tv.o laptop.o appliances.o iElectronics.o store.o -lstdc++

main.o: player.h tv.h laptop.h iElectronics.h store.h
iElectronics.o: iElectronics.h
device.o: device.h iElectronics.h
appliances.o: appliances.h
player.o: player.h device.h appliances.h
tv.o: tv.h appliances.h
laptop.o: laptop.h appliances.h device.h
store.o: store.h iElectronics.h

.PHONY: clean
clean:
	-rm -f store *.o 2>/dev/null
