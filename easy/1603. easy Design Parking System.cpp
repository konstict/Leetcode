class ParkingSystem {
public:
    int cars[3];
    ParkingSystem(int big, int medium, int small) {
        cars[0] = big;
        cars[1] = medium;
        cars[2] = small;
    }
    
    bool addCar(int carType) {
        int carType1 = carType-1;
        if(cars[carType1] == 0){
            return false;   
        }
        else{
            --cars[carType1];
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
 // 12 min, 3ms
