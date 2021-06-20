#ifndef Background_h
#define Background_h

class Background {
private:
	char *Array;
public:
	Background();
	void setArray(int);
	char getArray(int) const;
	void Nine_Square_Division();	//匯出九宮格
	void print();					//匯出遊戲規則

};
#endif
