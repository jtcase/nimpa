#ifndef RENDERER_H
#define RENDERER_H

#include<ncurses.h>

class Renderer {
    public:
        void initialize();
        void draw(const char* buffer, int cursor_position);
        void cleanup();
        int getInput();
};

#endif
