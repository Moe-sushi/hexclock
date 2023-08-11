all :
	cc -static -ffunction-sections -fdata-sections -Wl,--gc-sections nhclock.c -o nhclock
install :all
	cp nhclock ${PREFIX}/bin/nhclock
	chmod 777 ${PREFIX}/bin/nhclock
clean :
	rm nhclock
format :
	clang-format -i nhclock.c
	clang-format -i nhclock.h