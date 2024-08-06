// lib created by Hazza shabir

#define PI 3.14


namespace vector {

class vector2 {
	private:
	    
	protected:
	    
	public:
	    float x;
	    float y;
	    vector2(float xa = 0.0f, float ya = 0.0f) {
	    	x = xa;
	    	y = ya;
	    }
};

class vector3 {
	private:
	    
	protected:
	    
	public:
	    float x;
	    float y;
	    float z;
	    vector3(float xa = 0.0f, float ya = 0.0f, float za = 0.0f) {
	    	x = xa;
	    	y = ya;
	    	z = za;
	    }
};

vector2 addVector(vector2 a, vector2 b) {
	vector2 c = vector2();
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

vector3 addVector(vector3 a, vector3 b) {
	vector3 c = vector3();
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

vector2 diffVector(vector2 a, vector2 b) {
	vector2 c = vector2();
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

vector3 diffVector(vector3 a, vector3 b) {
	vector3 c = vector3();
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}

vector2 scalProdVec(float a, vector2 b) {
	vector2 c = vector2();
	c.x = b.x * a;
	c.y = b.y * a;
	return c;
}

vector3 scalProdVec(float a, vector3 b) {
	vector3 c = vector3();
	c.x = b.x * a;
	c.y = b.y * a;
	c.z = b.z * a;
	return c;
}

vector2 ProdVec(vector2 a, vector2 b) {
	vector2 c = vector2();
	c.x = a.x * b.x;
	c.y *= a.y * b.y;
	return c;
}

vector3 ProdVec(vector3 a, vector3 b) {
	vector3 c = vector3();
	c.x = a.x * b.x;
	c.y = a.y * b.y;
	c.z = a.z + b.z;
	return c;
}

} // namespace vector end here


namespace matrix {

class matrix2by2 {
	private:
	    
	protected:
	    
	public:
	    float matrix[2][2];
	    float &a11 = matrix[0][0];
	    float &a12 = matrix[0][1];
	    float &a21 = matrix[1][0];
	    float &a22 = matrix[1][1];
	    
	    matrix2by2(float a = 0, float b = 0, float c = 0, float d = 0) {
	    	a11 = a;
	    	a12 = b;
	    	a21 = c;
	    	a22 = d;
	    }
	    void setValue(float a, float b, float c, float d) {
	    	a11 = a;
	    	a12 = b;
	    	a21 = c;
	    	a22 = d;
	    }
	    void setValueOf(char num[], float value) {
	    	if(num == "a11") {
	    		a11 = value;
	    	}
	    	else if(num == "a12") {
	    		a12 = value;
	    	}
	    	else if(num == "a21") {
	    		a21 = value;
	    	}
	    	else if(num == "a22") {
	    		a22 = value;
	    	}
	    	else {
	    		throw("outOfRange");
	    	}
	    }
	    float getValueOf(char num[]) {
	    	if(num == "a11") {
	    		return a11;
	    	}
	    	else if(num == "a12") {
	    		return a12;
	    	}
	    	else if(num == "a21") {
	    		return a21;
	    	}
	    	else if(num == "a22") {
	    		return a22;
	    	}
	    	else {
	    		throw("outOfRange");
	    	}
	    }
};

class matrix3by3 {
	private:
	    
	protected:
	    
	public:
	    float matrix[3][3];
	    float &a11 = matrix[0][0];
	    float &a12 = matrix[0][1];
	    float &a13 = matrix[0][2];
	    float &a21 = matrix[1][0];
	    float &a22 = matrix[1][1];
	    float &a23 = matrix[1][2];
	    float &a31 = matrix[2][0];
	    float &a32 = matrix[2][1];
	    float &a33 = matrix[2][2];
	    
	    matrix3by3(float a = 0, float b = 0, float c = 0, float d = 0, float e = 0, float f = 0, float g = 0, float h = 0, float i = 0) {
	    	a11 = a;
	    	a12 = b;
	    	a13 = c;
	    	a21 = d;
	    	a22 = e;
	    	a23 = f;
	    	a31 = g;
	    	a32 = h;
	    	a33 = i;
	    }
	    void setValue(float a, float b, float c, float d, float e = 0, float f = 0, float g = 0, float h = 0, float i = 0) {
	    	a11 = a;
	    	a12 = b;
	    	a21 = c;
	    	a22 = d;
	    	a22 = e;
	    	a23 = f;
	    	a31 = g;
	    	a32 = h;
	    	a33 = i;
	    }
	    void setValueOf(char num[], float value) {
	    	if(num == "a11") {
	    		a11 = value;
	    	}
	    	else if(num == "a12") {
	    		a12 = value;
	    	}
	    	else if(num == "a13") {
	    		a13 = value;
	    	}
	    	else if(num == "a21") {
	    		a21 = value;
	    	}
	    	else if(num == "a22") {
	    		a22 = value;
	    	}
	    	else if(num == "a23") {
	    		a23 = value;
	    	}
	    	else if(num == "a31") {
	    		a31 = value;
	    	}
	    	else if(num == "a32") {
	    		a32 = value;
	    	}
	    	else if(num == "a33") {
	    		a33 = value;
	    	}
	    	else {
	    		throw("outOfRange");
	    	}
	    }
	    float getValueOf(char num[]) {
	    	if(num == "a11") {
	    		return a11;
	    	}
	    	else if(num == "a12") {
	    		return a12;
	    	}
	    	else if(num == "a13") {
	    		return a13;
	    	}
	    	else if(num == "a21") {
	    		return a21;
	    	}
	    	else if(num == "a22") {
	    		return a22;
	    	}
	    	else if(num == "a23") {
	    		return a23;
	    	}
	    	else if(num == "a31") {
	    		return a31;
	    	}
	    	else if(num == "a32") {
	    		return a32;
	    	}
	    	else if(num == "a33") {
	    		return a33;
	    	}
	    	else {
	    		throw("outOfRange");
	    	}
	    }
};

float FindDeterminent(matrix2by2 M) {
	float value1 = M.a11 * M.a22;
	float value2 = M.a21 * M.a12;
	float result = value1 - value2;
	return result;
}

float FindDeterminent(matrix3by3 M) {
	float value1 = M.a11 * ((M.a22 * M.a33) - (M.a23 * M.a32));
	float value2 = M.a12 * ((M.a21 * M.a33) - (M.a23 * M.a31));
	float value3 = M.a13 * ((M.a21 * M.a32) - (M.a31 * M.a22));
	float result = value1 - value2 + value3;
	return result;
}

matrix2by2 scalProdMat(float value, matrix2by2 M) {
	for(int x = 0; x <= 1; x++) {
		for(int y = 0; y <= 1; y++) {
			M.matrix[x][y] *= value;
		}
	}
	return M;
}

matrix3by3 scalProdMat(float value, matrix3by3 M) {
	for(int x = 0; x <= 2; x++) {
		for(int y = 0; y <= 2; y++) {
			M.matrix[x][y] *= value;
		}
	}
	return M;
}

matrix2by2 addMatrix(matrix2by2 M1, matrix2by2 M2) {
	for(int x = 0; x <= 1; x++) {
		for(int y = 0; y <= 1; y++) {
			M1.matrix[x][y] += M2.matrix[x][y];
		}
	}
	return M1;
}

matrix3by3 addMatrix(matrix3by3 M1, matrix3by3 M2) {
	for(int x = 0; x <= 2; x++) {
		for(int y = 0; y <= 2; y++) {
			M1.matrix[x][y] += M2.matrix[x][y];
		}
	}
	return M1;
}

matrix2by2 diffMatrix(matrix2by2 M1, matrix2by2 M2) {
	for(int x = 0; x <= 1; x++) {
		for(int y = 0; y <= 1; y++) {
			M1.matrix[x][y] -= M2.matrix[x][y];
		}
	}
	return M1;
}

matrix3by3 diffMatrix(matrix3by3 M1, matrix3by3 M2) {
	for(int x = 0; x <= 2; x++) {
		for(int y = 0; y <= 2; y++) {
			M1.matrix[x][y] -= M2.matrix[x][y];
		}
	}
	return M1;
}

matrix2by2 ProdMat(matrix2by2 M1, matrix2by2 M2) {
	matrix2by2 M3 = matrix2by2();
	M3.a11 = (M1.a11 * M2.a11) + (M1.a12 * M2.a21);
	M3.a12 = (M1.a21 * M2.a11) + (M1.a22 * M2.a21);
	M3.a21 = (M1.a11 * M2.a12) + (M1.a12 * M2.a22);
	M3.a22 = (M1.a21 * M2.a12) + (M1.a22 * M2.a22);
	return M3;
}

} //namespace matrix end here


namespace mathf {

float powerOf(float a, int b = 2) {
	float c = float(a);
	if(b > 0) {
		for(int i = 1; i < b; i++) {
			c *= a;
		}
	}
	else if(b < 0) {
		b = -1 * b;
		for(int i = 1; i < b; i++) {
			c *= a;
		}
		c = 1 / c;
	}
	else {
		c = 0;
	}
	return c;
}

float areaOfCircle(float r) {
	float a = float();
	a = 2 * PI * r;
	return a;
}

bool isEven(int n) {
	if(n % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

float areaOfRectangle(float w, float h) {
	float a = w * h;
	return a;
}

float parameterOfRectangle(float w, float h) {
	float p = 2 * (w + h);
	return p;
}

float areaOfTriangle(float w, float h) {
	float a = (float) (1 / 2) * (w * h);
	return a;
}

float parameterOfSquare(float l) {
	float p = (float) 0.0f;
	p = 4 * l;
	return p;
}

float parameterOfTriangle(float a, float b, float c) {
	float p = (float) 0.0f;
	p = a + b + c;
	return p;
}

float absolute(float value) {
	if(value < 0) {
		value *= -1;
	}
	return value;
}

}// namespace mathf end here


//Main function started
        int main() {return 0;}