#include "Area.h"

bool Area::FileCheck(ifstream& pFile) {
	return pFile.peek() == -1;
}