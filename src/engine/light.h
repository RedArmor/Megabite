#ifndef LIGHT_H
#define LIGHT_H

#include <GL/glut.h>

class light {
public:
    light(int id, int type, float red, float green, float blue, float x, float y, float z);
    ~light();
    
    void enable();
    void disable();
    
    void setRed(float red);
    void setGreen(float green);
    void setBlue(float blue);
    void setBrightness(float red, float green, float blue);
    float getRed();
    float getGreen();
    float getBlue();
    
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setLocation(float x, float y, float z);
    float getX();
    float getY();
    float getZ();
    
private:
    float color[4];
    float position[4];
    
    int id;
    int type;
};

#endif // #ifndef LIGHT_H