c: bashCalc.c
	gcc bashCalc.c -o bashcalcC

cpp: bashCalc.cpp
	g++ bashCalc.cpp -o bashcalcCPP

clean:
	$(RM) bashCalcC
	$(RM) bashCalcCPP
