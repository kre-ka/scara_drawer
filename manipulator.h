#ifndef INC_MANIPULATOR_H_
#define INC_MANIPULATOR_H_

struct manipulator {
	float l_0;
	float l_1;
	float theta_0_range[2];
	float theta_1_range[2];
};
typedef struct manipulator Manipulator;

int inverse_kinematics(Manipulator *manipulator , float *in, float *out, int mode);

#endif /* INC_MANIPULATOR_H_ */
