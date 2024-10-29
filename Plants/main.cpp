#include <iostream>

class Plants {
public:
	virtual int GetHeight() = 0;
	virtual bool GetSize() = 0;
	virtual std::string GetName() = 0;


	//virtual void SetHeight(int height) {
	//	height_ = height;
	//}
	//virtual void SetName(std::string name) {
	//	name_ = name;
	//}
	

protected:
	std::string name_;
	bool size_;
	int height_;
};

class Tree :public Plants {
public:
	Tree() {
		size_ = true;
	}
/*я не понимаю, почему этото метод не работает
	Plod *TakePlod() {
		Plod *ptrPlod = new Plod(500, "Груша");
		return ptrPlod;
	}
*/
private:
	int count_plod_ = 20;


};

class Bush : public Plants {
public:
	Bush() {
		size_ = false;
	}

	void SetInfo(int height, std::string name, bool size) {
		name_ = name;
		size_ = size;
		height_ = height;
	}

};

class Plod{
public:
	Plod(){
		count_plod_ = 15;
	}
	Plod(int massa, std::string name) {
		massa_ = massa;
		name_ = name;
	}


	virtual float GetMassa()const = 0;
	virtual std::string GetName() = 0;


	

protected:
	std::string name_;
	float massa_;
	int count_plod_;

};

class Berry:public Plod{
public:
	float GetMassa()const {
		return massa_;
	}
	std::string GetName() {
		return name_;
	}
	Berry TakePlod() {
		Berry plod = Berry();
		return plod;
	}
	


};

class Fruit :public Plod {
public:
	float GetMassa()const {
		return massa_;
	}
	std::string GetName() {
		return name_;
	}
	Fruit TakePlod() {
		Fruit plod = Fruit();
		return plod;
	}



};
class Cone :public Plod {//шишки
public:
	float GetMassa()const {
		return massa_;
	}
	std::string GetName() {
		return name_;
	}
	Cone TakePlod() {
		Cone plod = Cone();
		return plod;
	}



};

class apple :public Fruit {

	
};

class pear :public Fruit {

};

class blueberry :public Berry {

};

class raspberry :public Berry {

};

class appletree: public Tree{ 
public:
	apple GetPlod() {
		apple apple_ = apple();
		return apple_;
	}


};

class peartree:public Tree{
public:
	pear GetPlod() {
		pear pear_ = pear();
		return pear_;
	}



};

class blueberrybush :public Bush {
public:
	blueberry GetPlod() {
		blueberry blueberry_ = blueberry();
		return blueberry_;
	}

};

class raspberrybush :public Bush {
public:
	raspberry GetPlod(){
		raspberry raspberry_ = raspberry();
		return raspberry_;
	}

};


int main() {
	Fruit mango;
	mango.TakePlod();


	return 0;
}