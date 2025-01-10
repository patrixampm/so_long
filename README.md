# so_long
## Fun 2D game

so_long is the first game I've designed using C. It is a very simple, 2D game that needs an input map (there are a few valid maps in the maps folder), and make on your PC if you plan to clone the repo. With this, you will be able to execute this fun little game that has a cool looking character, who's aim is to eat every slice of pizza after a hard night partying in Malaga center. The cops are around, and you will only be able to catch an Uber and escape the center when you've had enough to eat, had a walk, and freshen'd up a little.

If you want to give it a try, or just mess around with the code, create more maps or new characters/enermies... clone the repo or download the .zip folder.

Open a terminal in the directory and type:
```
cd MLX42-master/build
cmake -B build
cmake --build build -j4
cd ../..
make
```
This will compile the MLX graphic library (developed by 42 CODAM students) first, and then in the root repository of the game it will compile the game, my libft library (which has a bunch of usefull C functions), and my get_next_line to read from files. The MLX library doesn't follow the 42 norm, but the rest of the program does.
Once you have the program ready for some action, type:
```
./so_long maps/map3.ber
```
There are 3 other maps you can use. Make your own if you like, but:
  * there must be at least one slice of pizza -> __'C'__
  * there can only be one, and at least one cop car -> __'E'__
  * there can only be one, and at least one player -> __'P'__
  * the map must be surrounded by walls -> __'1'__
  * the player must be able to access all pizza slices, and the exit (flood fill baby)

The window will open with the wild streets of night-time Málaga center, some delicious pizza slices you have to eat (all of them), and a cop car that will only leave and give space for your Uber ride once you've eaten up and chilled out.

Have fun!! Making this game def was :)
