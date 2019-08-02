#ifndef OPOVERCLASS_H
#define OPOVERCLASS_H

class opOver{
	
	int *list;
	int arraySize;

public:
	
	int& operator[](int index);
	const int& operator[](int index) const;
	
};


#endif
