FFMPEG=/root/ffmpeg_build
CC=gcc
CFLAGS=-g -I$(FFMPEG)/include
LDFLAGS = -L$(FFMPEG)/lib/ -lswscale -lswresample -lavformat -lavdevice -lavcodec -lavutil -lavfilter -lpostproc -lm -lpthread -lX11 -lm  -lvdpau -lva -lva-drm -lva-x11  -lz -lx264 -lx265 -ldl -lnuma -lvpx -lopus -lmp3lame   -ltheora -lSDL2
TARGETS=fftest
all: $(TARGETS)
fftest:test.c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -rf $(TARGETS)
