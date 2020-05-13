#include <mutex>
extern int sdl_play_audio(const char* path);

int main(int argc, char* argv[]) {
	sdl_play_audio("16k.pcm");
}
