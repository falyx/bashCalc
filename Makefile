c: bashCalc.c
	@echo "Building C Program..."
	@gcc bashCalc.c -o bashcalcC

cpp: bashCalc.cpp
	@echo "Building C++ Program..."
	@g++ bashCalc.cpp -o bashcalcCPP

clean:
	@echo "Removing all compiled files..."
	@$(RM) bashCalcC
	@$(RM) bashCalcCPP
