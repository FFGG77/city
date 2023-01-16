// Comment out this line when using as DLL
#define flecs_game_STATIC
#ifndef GAME_H
#define GAME_H

/* This generated file contains includes for project dependencies */
/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_GAME_BAKE_CONFIG_H
#define FLECS_GAME_BAKE_CONFIG_H

/* Headers of public dependencies */
#include "cglm.h"
#include "flecs.h"
#include "flecs_components_input.h"
#include "flecs_components_graphics.h"
#include "flecs_components_transform.h"
#include "flecs_components_physics.h"
#include "flecs_systems_physics.h"

/* Convenience macro for exporting symbols */
#ifndef flecs_game_STATIC
#if defined(flecs_game_EXPORTS) && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_GAME_API __declspec(dllexport)
#elif defined(flecs_game_EXPORTS)
  #define FLECS_GAME_API __attribute__((__visibility__("default")))
#elif defined(_MSC_VER)
  #define FLECS_GAME_API __declspec(dllimport)
#else
  #define FLECS_GAME_API
#endif
#else
  #define FLECS_GAME_API
#endif

#endif



// Reflection system boilerplate
#undef ECS_META_IMPL
#ifndef FLECS_GAME_IMPL
#define ECS_META_IMPL EXTERN // Ensure meta symbols are only defined once
#endif

// Number of bits to shift from x/y coordinate before creating the spatial hash.
// Larger numbers create larger cells.
#define FLECS_GAME_WORLD_CELL_SHIFT (8)

// Convenience macro to get size of world cell
#define FLECS_GAME_WORLD_CELL_SIZE (1 << FLECS_GAME_WORLD_CELL_SHIFT)

#ifdef __cplusplus
extern "C" {
#endif

FLECS_GAME_API
extern ECS_DECLARE(EcsCameraController);

FLECS_GAME_API
ECS_STRUCT(EcsCameraAutoMove, {
    float after;
    float speed;
    float t;
});

FLECS_GAME_API
extern ECS_DECLARE(EcsWorldCell);

FLECS_GAME_API
extern ECS_DECLARE(EcsWorldCellRoot);

FLECS_GAME_API
ECS_STRUCT(EcsWorldCellCoord, {
    int64_t x;
    int64_t y;
    int32_t size;
});

FLECS_GAME_API
void FlecsGameImport(ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#ifndef FLECS_NO_CPP
#include <iostream>

namespace flecs {

struct game {
    static flecs::entity_t CameraController;

    game(flecs::world& ecs) {
        // Load module contents
        FlecsGameImport(ecs);

        CameraController = EcsCameraController;

        // Bind C++ types with module contents
        ecs.module<flecs::game>();
    }
};

flecs::entity_t game::CameraController = 0;

}

#endif
#endif

#endif

