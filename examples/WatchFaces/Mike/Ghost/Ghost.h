#ifndef WATCHY_GHOST_H
#define WATCHY_GHOST_H

#include <Watchy.h>
#include "image.h"
#include "Montserrat_Medium20pt7b.h"

class Ghost : public Watchy{
    public:
        Ghost();
		void drawWatchFace();
        void drawCentered(String text, int y2);
};

#endif
