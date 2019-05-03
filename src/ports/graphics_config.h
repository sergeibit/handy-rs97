#ifndef GRAPHICS_CONFIG_H
#define GRAPHICS_CONFIG_H

#ifdef RS97
	#define SDL_OUTPUT_WIDTH 320
	#define SDL_OUTPUT_HEIGHT 240
	#define OUTPUT_WIDTH 320
	#define OUTPUT_HEIGHT 240
#elif defined(RS90)
	#define SDL_OUTPUT_WIDTH 240
	#define SDL_OUTPUT_HEIGHT 160
	#define OUTPUT_WIDTH 240
	#define OUTPUT_HEIGHT 160
#elif defined(RETROSTONE)
	/* Zero means auto-detect */
	#define SDL_OUTPUT_WIDTH 0
	#define SDL_OUTPUT_HEIGHT 0
	#define OUTPUT_WIDTH mainSurface->w
	#define OUTPUT_HEIGHT mainSurface->h
#else
	/* Zero means auto-detect */
	#define SDL_OUTPUT_WIDTH 480
	#define SDL_OUTPUT_HEIGHT 272
	#define OUTPUT_WIDTH 480
	#define OUTPUT_HEIGHT 272
#endif

#endif