a.out: main.o PowerTeam.o WhateverYouLike.o
	g++ main.o PowerTeam.o WhateverYouLike.o -o runMe

main.o: main.cpp
	g++ -c main.cpp

PowerTeam.o: PowerTeam.cpp PowerTeam.h
	g++ -c PowerTeam.cpp

WhateverYouLike.o: WhateverYouLike.cpp WhateverYouLike.h
	g++ -c WhateverYouLike.cpp

