#ifndef CONTROLS_H
#define CONTROLS_H

typedef unsigned char controls_t;

class JoyStick {
public:
  JoyStick(int left_button_pin, int right_button_pin, int drop_button_pin, int rotate_cw_buton_pint, int rotate_ccw_button_pint);

  controls_t readInputs();
};

#endif // CONTROLS_H
