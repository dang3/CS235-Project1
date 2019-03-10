#pragma once

#include "Image.h"
#include "ofGraphics.h"
#include "handles/Handle.h"
#include "Utils.h"

class Frame {
private:
	int rotateHandleHeight = 40;
	float scaleHandleWidth;
	float scaleHandleHeight;
	float xPos;
	float yPos;
	float width;
	float height;
	vector<Handle*> handles;
	Handle* selectedHandle;
	void drawBorder();
	void drawHandles();
	

public:
	Frame();
	~Frame();
	Image* curImage;
	void draw();
	void setXPos(float);
	void setYPos(float);
	void setWidth(float);
	void setHeight(float);
	void setImage(Image*);
	void setHandlePositions();
	bool isInsideHandles(glm::vec3);
	float getXPos();
	float getYPos();
	float getWidth();
	float getHeight();
	void scaleFrame(glm::vec3);
	void updateImage();
	void updateFrameDimensions(float, float);
	void processInput(glm::vec3*, glm::vec3* v = NULL);
	void moveFrameFromKey(DirectionKey);



	void test();
};
