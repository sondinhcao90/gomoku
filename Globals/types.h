#ifndef TYPES_H
#define TYPES_H

typedef enum{
    SC_Welcome = 0,
    SC_Login   = 1,
    SC_TwoPlayer = 2,
}eScreen;

typedef enum{
    PM_Single = 0,
    PM_TwoPlayer,
    PM_PlayOnline,
    PM_Replay
}ePlayMode;

#endif // TYPES_H
