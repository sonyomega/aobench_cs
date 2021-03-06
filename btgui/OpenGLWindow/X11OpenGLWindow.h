#ifndef X11_OPENGL_WINDOW_H
#define X11_OPENGL_WINDOW_H

#define b3gDefaultOpenGLWindow X11OpenGLWindow

#include "b3gWindowInterface.h"

class X11OpenGLWindow : public b3gWindowInterface
{

	struct InternalData2*   m_data;
        bool m_OpenGLInitialized;

protected:

        void enableOpenGL();

        void disableOpenGL();

        void pumpMessage();

        int getAsciiCodeFromVirtualKeycode(int orgCode);

public:

        X11OpenGLWindow();

        virtual ~X11OpenGLWindow();

        virtual void    createWindow(const b3gWindowConstructionInfo& ci);

        virtual void    closeWindow();

        virtual void    startRendering();

        virtual void    renderAllObjects();

        virtual void    endRendering();

        virtual float getRetinaScale() const {return 1.f;}


	virtual void    runMainLoop();
        virtual float   getTimeInSeconds();

        virtual bool    requestedExit() const;
        virtual void    setRequestExit() ;


        virtual void setMouseMoveCallback(b3MouseMoveCallback   mouseCallback);
        virtual void setMouseButtonCallback(b3MouseButtonCallback       mouseCallback);
        virtual void setResizeCallback(b3ResizeCallback resizeCallback);
        virtual void setWheelCallback(b3WheelCallback wheelCallback);
        virtual void setKeyboardCallback( b3KeyboardCallback    keyboardCallback);
	virtual b3KeyboardCallback	getKeyboardCallback();
        virtual void setRenderCallback( b3RenderCallback renderCallback);

        virtual void setWindowTitle(const char* title);

};


#endif

