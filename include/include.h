#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include "include/val_cene.h"
#include "include/key_manette.h"

typedef struct setting_s
{
	sfVideoMode mode;
	sfRenderWindow* window;
	int read_speed;
	int hud_color;
} setting_t;

typedef struct struct_time_s
{
        sfTime Time;
        sfClock* Clock;
        float Second;
} struct_time_t;

typedef struct menu_s
{
	struct_time_t Clock;
} menu_t;

typedef struct intro_s
{
	sfColor color;
	sfFont* font;
	sfText* text;
} intro_t;

typedef struct game_s
{
	setting_t setting;
	struct_time_t Clock;
	intro_t intro;
	menu_t menu;
	sfEvent event;
	int game_cene;
	float game_time;
	float time;
} game_t;

typedef struct var_s
{
	char *buffer;
	int a;
	int i;
	int result;
	int buffer_size;
} var_t;

char	*get_next_line(int fd);

int	my_str_isnum(char const *str);

int	acces_menu();

#ifndef  READ_SIZE
#    define  READ_SIZE (1)
#endif
