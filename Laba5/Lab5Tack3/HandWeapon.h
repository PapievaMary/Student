#ifndef HOLD_H_
#define HOLD_H_
template<typename T1, typename T2>
class Hold {
    T1 LeftHandWeapon;
    T2 RightHandWeapon;

public:
    Hold(T1 LeftHandWeapon, T2 RightHandWeapon) {
        this->LeftHandWeapon = LeftHandWeapon;
        this->RightHandWeapon = RightHandWeapon;
    }

    T1 getLeftHandWeapon() { return LeftHandWeapon; }
    void setLeftHandWeapon(T1 weapon) { LeftHandWeapon = weapon; }
    T2 getRightHandWeapon() { return RightHandWeapon; }
    void setRightHandWeapon(T2 weapon) { RightHandWeapon = weapon; }

};
#endif 