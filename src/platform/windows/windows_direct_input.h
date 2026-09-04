#ifndef BONGO_CAT_WINDOWS_DIRECT_INPUT_H
#define BONGO_CAT_WINDOWS_DIRECT_INPUT_H

#include "bongo_cat/platform.h"

bool bongo_cat_windows_direct_input_create(BongoCatPlatform *platform,
    void *window);
bool bongo_cat_windows_direct_input_read(BongoCatPlatform *platform,
    double *x, double *y);
void bongo_cat_windows_direct_input_destroy(BongoCatPlatform *platform);
void bongo_cat_windows_direct_input_reset(BongoCatPlatform *platform);

#endif
